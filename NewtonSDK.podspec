Pod::Spec.new do |spec|
    spec.name                     = 'NewtonSDK'
    spec.version                  = '0.1.0'
    spec.homepage                 = 'https://nwtn.io'
    spec.source                   = {:git => 'git@github.com:BSerg/newton-sdk-cocoa.git', :tag => '#{spec.version}'}
    spec.authors                  = 'Newton Technologies'
    spec.license                  = 'Apache 2.0'
    spec.summary                  = 'Newton Mobile SDK for iOS'
    spec.vendored_frameworks      = 'build/cocoapods/framework/NewtonSDK.framework'
    spec.libraries                = 'c++'
                
                
                
    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':',
        'PRODUCT_MODULE_NAME' => 'NewtonSDK',
    }
                
    spec.script_phases = [
        {
            :name => 'Build NewtonSDK',
            :execution_position => :before_compile,
            :shell_path => '/bin/sh',
            :script => <<-SCRIPT
                if [ "YES" = "$COCOAPODS_SKIP_KOTLIN_BUILD" ]; then
                  echo "Skipping Gradle build task invocation due to COCOAPODS_SKIP_KOTLIN_BUILD environment variable set to \"YES\""
                  exit 0
                fi
                set -ev
                REPO_ROOT="$PODS_TARGET_SRCROOT"
                "$REPO_ROOT/gradlew" -p "$REPO_ROOT" $KOTLIN_PROJECT_PATH:syncFramework \
                    -Pkotlin.native.cocoapods.platform=$PLATFORM_NAME \
                    -Pkotlin.native.cocoapods.archs="$ARCHS" \
                    -Pkotlin.native.cocoapods.configuration="$CONFIGURATION"
            SCRIPT
        }
    ]
                
end
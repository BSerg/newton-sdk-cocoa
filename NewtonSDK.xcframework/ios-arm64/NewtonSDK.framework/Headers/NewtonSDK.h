#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSDKAccountType, NSDKAccountDescriptorCompanion, NSDKAccountDescriptor, NSDKOperationType, NSDKOperationStatus, NSDKOperationEntity, NSDKNewtonApiClient, NSDKOperationRepositoryImplCompanion, NSDKOperationsParametersCompanion, NSDKOperationsParameters, NSDKCurrencyValue, NSDKOperationDealEntityCompanion, NSDKOperationDealEntity, NSDKOperationEntityCompanion, NSDKOperationEntitySerializer, NSDKInstrumentType, NSDKCurrency, NSDKOperationInstrumentEntityCompanion, NSDKOperationInstrumentEntity, NSDKOrderType, NSDKTradingOperationEntityCompanion, NSDKTradingOperationEntity, NSDKAccountEntity, NSDKPortfolioChartPoint, NSDKPortfolioRepositoryImplCompanion, NSDKAttribute, NSDKAccountStatus, NSDKAccountEntityCompanion, NSDKPortfolioChartPointCompanion, NSDKDividendsDescriptorCompanion, NSDKDividendsDescriptor, NSDKDividendsParametersCompanion, NSDKDividendsParameters, NSDKDividendEntity, NSDKDividendsRepositoryImplCompanion, NSDKDividendsResponseCompanion, NSDKDividendsResponse, NSDKDividendsResponseSerializer, NSDKDividendEntityCompanion, NSDKGetDividendsByInstrumentIdUseCaseCompanion, NSDKBondDataCompanion, NSDKBondData, NSDKKotlinEnumCompanion, NSDKKotlinEnum<E>, NSDKCandlesTimeGranularityCompanion, NSDKCandlesTimeGranularity, NSDKKotlinArray<T>, NSDKHistoryMarketDataCandleEntity, NSDKTimeGranularity, NSDKHistoryMarketDataEntity, NSDKMarketDataEntity, NSDKHistoryMarketDataCandleEntityCompanion, NSDKHistoryMarketDataEntityCompanion, NSDKIndexDataCompanion, NSDKIndexData, NSDKStaticParams, NSDKMarketDataEntityCompanion, NSDKStaticParamsCompanion, NSDKTimeGranularityCompanion, NSDKHistoryMarketDataCandlesParametersCompanion, NSDKHistoryMarketDataCandlesResponseCompanion, NSDKHistoryMarketDataCandlesResponse, NSDKHistoryMarketDataParametersCompanion, NSDKHistoryMarketDataRepositoryImplCompanion, NSDKInstrumentMarketDataEntity, NSDKHistoryMarketDataResponseCompanion, NSDKHistoryMarketDataResponse, NSDKInstrumentMarketDataEntityCompanion, NSDKInstrumentMarketDataEntitySerializer, NSDKMarketDataInstrumentKeyCompanion, NSDKMarketDataInstrumentKey, NSDKMarketDataSearchParameters, NSDKMarketDataParametersCompanion, NSDKMarketDataParameters, NSDKMarketDataRepositoryImplCompanion, NSDKMarketDataResponseResult, NSDKMarketDataResponseCompanion, NSDKMarketDataResponse, NSDKMarketDataResponseResultEntity, NSDKMarketDataResponseResultError, NSDKMarketDataResponseResultCompanion, NSDKMarketDataResponseResultEntityCompanion, NSDKMarketDataResponseResultErrorCompanion, NSDKMarketDataSearchParametersCompanion, NSDKNewtonApiClientConfig, NSDKKtor_client_coreHttpClient, NSDKNewtonApiClientConfigCompanion, NSDKKotlinThrowable, NSDKKotlinException, NSDKNewtonApiErrorCode, NSDKCatalogInstrumentEntity, NSDKCatalogInstrumentEntityCompanion, NSDKCatalogCurrencyInfo, NSDKBondAdditionalPublicOfferEntityCompanion, NSDKBondAdditionalPublicOfferEntity, NSDKCouponType, NSDKBondEntityCompanion, NSDKBondEntity, NSDKCatalogInstrumentAttribute, NSDKCatalogCurrencyInfoCompanion, NSDKCatalogInstrumentAttributeCompanion, NSDKCatalogInstrumentEntitySerializer, NSDKCurrencyEntityCompanion, NSDKCurrencyEntity, NSDKFundEntityCompanion, NSDKFundEntity, NSDKIpoEntityCompanion, NSDKIpoEntity, NSDKStockEntityCompanion, NSDKStockEntity, NSDKCatalogRepositoryImplCompanion, NSDKAccountStatusCompanion, NSDKAccountTypeCompanion, NSDKAttributeCompanion, NSDKCouponTypeCompanion, NSDKCurrencyCompanion, NSDKCurrencyValueCompanion, NSDKInstrumentTypeCompanion, NSDKOperationStatusCompanion, NSDKOperationTypeCompanion, NSDKOrderTypeCompanion, NSDKKotlinRuntimeException, NSDKKotlinIllegalStateException, NSDKKotlinx_serialization_coreSerializersModule, NSDKKotlinx_serialization_coreSerialKind, NSDKKotlinNothing, NSDKKtor_client_coreHttpClientEngineConfig, NSDKKtor_client_coreHttpClientConfig<T>, NSDKKtor_client_coreHttpRequestBuilder, NSDKKtor_client_coreHttpClientCall, NSDKKotlinx_coroutines_coreCoroutineDispatcher, NSDKKtor_client_coreHttpReceivePipeline, NSDKKtor_client_coreHttpRequestPipeline, NSDKKtor_client_coreHttpResponsePipeline, NSDKKtor_client_coreHttpSendPipeline, NSDKKtor_client_coreHttpRequestData, NSDKKtor_client_coreHttpResponseData, NSDKKtor_client_coreProxyConfig, NSDKKtor_httpHeadersBuilder, NSDKKtor_client_coreHttpRequestBuilderCompanion, NSDKKtor_httpURLBuilder, NSDKKtor_httpHttpMethod, NSDKKtor_client_coreHttpClientCallCompanion, NSDKKtor_client_coreTypeInfo, NSDKKtor_client_coreHttpResponse, NSDKKtor_utilsAttributeKey<T>, NSDKKotlinAbstractCoroutineContextElement, NSDKKotlinx_coroutines_coreCoroutineDispatcherKey, NSDKKtor_utilsPipelinePhase, NSDKKtor_utilsPipeline<TSubject, TContext>, NSDKKtor_client_coreHttpReceivePipelinePhases, NSDKKtor_client_coreHttpRequestPipelinePhases, NSDKKtor_client_coreHttpResponsePipelinePhases, NSDKKtor_client_coreHttpResponseContainer, NSDKKtor_client_coreHttpSendPipelinePhases, NSDKKtor_httpUrl, NSDKKtor_httpOutgoingContent, NSDKKtor_httpHttpStatusCode, NSDKKtor_utilsGMTDate, NSDKKtor_httpHttpProtocolVersion, NSDKKtor_utilsStringValuesBuilder, NSDKKtor_httpURLProtocol, NSDKKtor_httpParametersBuilder, NSDKKtor_httpURLBuilderCompanion, NSDKKotlinCancellationException, NSDKKotlinUnit, NSDKKtor_httpHttpMethodCompanion, NSDKKtor_ioMemory, NSDKKtor_ioIoBuffer, NSDKKotlinByteArray, NSDKKtor_ioByteReadPacket, NSDKKtor_ioByteOrder, NSDKKotlinAbstractCoroutineContextKey<B, E>, NSDKKtor_httpUrlCompanion, NSDKKtor_httpContentType, NSDKKtor_httpHttpStatusCodeCompanion, NSDKKtor_utilsGMTDateCompanion, NSDKKtor_utilsWeekDay, NSDKKtor_utilsMonth, NSDKKtor_httpHttpProtocolVersionCompanion, NSDKKtor_httpURLProtocolCompanion, NSDKKtor_httpUrlEncodingOption, NSDKKtor_ioMemoryCompanion, NSDKKtor_ioBufferCompanion, NSDKKtor_ioBuffer, NSDKKtor_ioChunkBuffer, NSDKKtor_ioChunkBufferCompanion, NSDKKotlinCharArray, NSDKKtor_ioIoBufferCompanion, NSDKKotlinByteIterator, NSDKKtor_ioAbstractInputCompanion, NSDKKtor_ioAbstractInput, NSDKKtor_ioByteReadPacketBaseCompanion, NSDKKtor_ioByteReadPacketBase, NSDKKtor_ioByteReadPacketPlatformBase, NSDKKtor_ioByteReadPacketCompanion, NSDKKtor_ioByteOrderCompanion, NSDKKotlinKTypeProjection, NSDKKtor_httpHeaderValueParam, NSDKKtor_httpHeaderValueWithParametersCompanion, NSDKKtor_httpHeaderValueWithParameters, NSDKKtor_httpContentTypeCompanion, NSDKKtor_utilsWeekDayCompanion, NSDKKtor_utilsMonthCompanion, NSDKKotlinx_coroutines_coreAtomicDesc, NSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, NSDKKotlinCharIterator, NSDKKotlinKVariance, NSDKKotlinKTypeProjectionCompanion, NSDKKotlinx_coroutines_coreAtomicOp<__contravariant T>, NSDKKotlinx_coroutines_coreOpDescriptor, NSDKKotlinx_coroutines_coreLockFreeLinkedListNode, NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol NSDKIAccountDescriptor, NSDKKotlinx_serialization_coreKSerializer, NSDKOperationRepository, NSDKKotlinx_serialization_coreEncoder, NSDKKotlinx_serialization_coreSerialDescriptor, NSDKKotlinx_serialization_coreSerializationStrategy, NSDKKotlinx_serialization_coreDecoder, NSDKKotlinx_serialization_coreDeserializationStrategy, NSDKPortfolioRepository, NSDKDividendsRepository, NSDKCatalogRepository, NSDKKotlinComparable, NSDKHistoryMarketDataRepository, NSDKMarketDataRepository, NSDKKotlinx_serialization_coreCompositeEncoder, NSDKKotlinAnnotation, NSDKKotlinx_serialization_coreCompositeDecoder, NSDKKotlinIterator, NSDKKotlinCoroutineContext, NSDKKotlinx_coroutines_coreCoroutineScope, NSDKKtor_ioCloseable, NSDKKtor_client_coreHttpClientEngine, NSDKKtor_client_coreHttpClientEngineCapability, NSDKKtor_utilsAttributes, NSDKKotlinx_serialization_coreSerializersModuleCollector, NSDKKotlinKClass, NSDKKotlinCoroutineContextElement, NSDKKotlinCoroutineContextKey, NSDKKtor_client_coreHttpClientFeature, NSDKKtor_httpHttpMessageBuilder, NSDKKotlinx_coroutines_coreJob, NSDKKtor_ioByteReadChannel, NSDKKtor_utilsTypeInfo, NSDKKtor_client_coreHttpRequest, NSDKKotlinContinuation, NSDKKotlinContinuationInterceptor, NSDKKotlinx_coroutines_coreRunnable, NSDKKotlinSuspendFunction2, NSDKKotlinKDeclarationContainer, NSDKKotlinKAnnotatedElement, NSDKKotlinKClassifier, NSDKKtor_httpHeaders, NSDKKtor_utilsStringValues, NSDKKotlinMapEntry, NSDKKotlinx_coroutines_coreChildHandle, NSDKKotlinx_coroutines_coreChildJob, NSDKKotlinx_coroutines_coreDisposableHandle, NSDKKotlinSequence, NSDKKotlinx_coroutines_coreSelectClause0, NSDKKtor_ioReadSession, NSDKKotlinSuspendFunction1, NSDKKotlinAppendable, NSDKKotlinKType, NSDKKtor_httpHttpMessage, NSDKKotlinFunction, NSDKKtor_httpParameters, NSDKKotlinx_coroutines_coreParentJob, NSDKKotlinx_coroutines_coreSelectInstance, NSDKKotlinSuspendFunction0, NSDKKtor_ioObjectPool, NSDKKtor_ioInput, NSDKKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface NSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface NSDKBase (NSDKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface NSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface NSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorNSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface NSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface NSDKByte : NSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface NSDKUByte : NSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface NSDKShort : NSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface NSDKUShort : NSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface NSDKInt : NSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface NSDKUInt : NSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface NSDKLong : NSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface NSDKULong : NSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface NSDKFloat : NSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface NSDKDouble : NSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface NSDKBoolean : NSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("IAccountDescriptor")))
@protocol NSDKIAccountDescriptor
@required
@property (readonly) NSString *accountId __attribute__((swift_name("accountId")));
@property (readonly) NSDKAccountType *accountType __attribute__((swift_name("accountType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountDescriptor")))
@interface NSDKAccountDescriptor : NSDKBase <NSDKIAccountDescriptor>
- (instancetype)initWithAccountId:(NSString *)accountId accountType:(NSDKAccountType *)accountType __attribute__((swift_name("init(accountId:accountType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKAccountDescriptorCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSDKAccountType *)component2 __attribute__((swift_name("component2()")));
- (NSDKAccountDescriptor *)doCopyAccountId:(NSString *)accountId accountType:(NSDKAccountType *)accountType __attribute__((swift_name("doCopy(accountId:accountType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accountId __attribute__((swift_name("accountId")));
@property (readonly) NSDKAccountType *accountType __attribute__((swift_name("accountType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountDescriptor.Companion")))
@interface NSDKAccountDescriptorCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKAccountDescriptorCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("OperationRepository")))
@protocol NSDKOperationRepository
@required

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOperationHistoryAccounts:(NSArray<id<NSDKIAccountDescriptor>> * _Nullable)accounts instrumentIds:(NSArray<NSDKLong *> * _Nullable)instrumentIds types:(NSArray<NSDKOperationType *> * _Nullable)types statuses:(NSArray<NSDKOperationStatus *> * _Nullable)statuses limit:(NSDKInt * _Nullable)limit timeStart:(NSDKLong * _Nullable)timeStart timeEnd:(NSDKLong * _Nullable)timeEnd completionHandler:(void (^)(NSArray<NSDKOperationEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOperationHistory(accounts:instrumentIds:types:statuses:limit:timeStart:timeEnd:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationRepositoryImpl")))
@interface NSDKOperationRepositoryImpl : NSDKBase <NSDKOperationRepository>
- (instancetype)initWithApiClient:(NSDKNewtonApiClient *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKOperationRepositoryImplCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOperationHistoryAccounts:(NSArray<id<NSDKIAccountDescriptor>> * _Nullable)accounts instrumentIds:(NSArray<NSDKLong *> * _Nullable)instrumentIds types:(NSArray<NSDKOperationType *> * _Nullable)types statuses:(NSArray<NSDKOperationStatus *> * _Nullable)statuses limit:(NSDKInt * _Nullable)limit timeStart:(NSDKLong * _Nullable)timeStart timeEnd:(NSDKLong * _Nullable)timeEnd completionHandler:(void (^)(NSArray<NSDKOperationEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOperationHistory(accounts:instrumentIds:types:statuses:limit:timeStart:timeEnd:completionHandler:)")));
@property (readonly) NSDKNewtonApiClient *apiClient __attribute__((swift_name("apiClient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationRepositoryImpl.Companion")))
@interface NSDKOperationRepositoryImplCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKOperationRepositoryImplCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationsParameters")))
@interface NSDKOperationsParameters : NSDKBase
- (instancetype)initWithLimit:(NSDKInt * _Nullable)limit accountDescriptors:(NSArray<NSDKAccountDescriptor *> * _Nullable)accountDescriptors instrumentIds:(NSArray<NSDKLong *> * _Nullable)instrumentIds types:(NSArray<NSDKOperationType *> * _Nullable)types statuses:(NSArray<NSDKOperationStatus *> * _Nullable)statuses timeStart:(NSDKLong * _Nullable)timeStart timeEnd:(NSDKLong * _Nullable)timeEnd __attribute__((swift_name("init(limit:accountDescriptors:instrumentIds:types:statuses:timeStart:timeEnd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKOperationsParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSDKInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSDKAccountDescriptor *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSDKLong *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSDKOperationType *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSDKOperationStatus *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSDKLong * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSDKLong * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKOperationsParameters *)doCopyLimit:(NSDKInt * _Nullable)limit accountDescriptors:(NSArray<NSDKAccountDescriptor *> * _Nullable)accountDescriptors instrumentIds:(NSArray<NSDKLong *> * _Nullable)instrumentIds types:(NSArray<NSDKOperationType *> * _Nullable)types statuses:(NSArray<NSDKOperationStatus *> * _Nullable)statuses timeStart:(NSDKLong * _Nullable)timeStart timeEnd:(NSDKLong * _Nullable)timeEnd __attribute__((swift_name("doCopy(limit:accountDescriptors:instrumentIds:types:statuses:timeStart:timeEnd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSDKAccountDescriptor *> * _Nullable accountDescriptors __attribute__((swift_name("accountDescriptors")));
@property (readonly) NSArray<NSDKLong *> * _Nullable instrumentIds __attribute__((swift_name("instrumentIds")));
@property (readonly) NSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSArray<NSDKOperationStatus *> * _Nullable statuses __attribute__((swift_name("statuses")));
@property (readonly) NSDKLong * _Nullable timeEnd __attribute__((swift_name("timeEnd")));
@property (readonly) NSDKLong * _Nullable timeStart __attribute__((swift_name("timeStart")));
@property (readonly) NSArray<NSDKOperationType *> * _Nullable types __attribute__((swift_name("types")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationsParameters.Companion")))
@interface NSDKOperationsParametersCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKOperationsParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetOperationHistoryUseCase")))
@interface NSDKGetOperationHistoryUseCase : NSDKBase
- (instancetype)initWithRepository:(id<NSDKOperationRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeAccounts:(NSArray<id<NSDKIAccountDescriptor>> * _Nullable)accounts instrumentIds:(NSArray<NSDKLong *> * _Nullable)instrumentIds types:(NSArray<NSDKOperationType *> * _Nullable)types statuses:(NSArray<NSDKOperationStatus *> * _Nullable)statuses limit:(NSDKInt * _Nullable)limit timeStart:(NSDKLong * _Nullable)timeStart timeEnd:(NSDKLong * _Nullable)timeEnd completionHandler:(void (^)(NSArray<NSDKOperationEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(accounts:instrumentIds:types:statuses:limit:timeStart:timeEnd:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationDealEntity")))
@interface NSDKOperationDealEntity : NSDKBase
- (instancetype)initWithId:(int64_t)id instrumentPrice:(NSDKCurrencyValue *)instrumentPrice instrumentCount:(double)instrumentCount totalSum:(NSDKCurrencyValue *)totalSum commission:(NSDKCurrencyValue *)commission exchangeTradeId:(NSString *)exchangeTradeId createdAt:(int64_t)createdAt __attribute__((swift_name("init(id:instrumentPrice:instrumentCount:totalSum:commission:exchangeTradeId:createdAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKOperationDealEntityCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKCurrencyValue *)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (NSDKCurrencyValue *)component4 __attribute__((swift_name("component4()")));
- (NSDKCurrencyValue *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (NSDKOperationDealEntity *)doCopyId:(int64_t)id instrumentPrice:(NSDKCurrencyValue *)instrumentPrice instrumentCount:(double)instrumentCount totalSum:(NSDKCurrencyValue *)totalSum commission:(NSDKCurrencyValue *)commission exchangeTradeId:(NSString *)exchangeTradeId createdAt:(int64_t)createdAt __attribute__((swift_name("doCopy(id:instrumentPrice:instrumentCount:totalSum:commission:exchangeTradeId:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKCurrencyValue *commission __attribute__((swift_name("commission")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *exchangeTradeId __attribute__((swift_name("exchangeTradeId")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) double instrumentCount __attribute__((swift_name("instrumentCount")));
@property (readonly) NSDKCurrencyValue *instrumentPrice __attribute__((swift_name("instrumentPrice")));
@property (readonly) NSDKCurrencyValue *totalSum __attribute__((swift_name("totalSum")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationDealEntity.Companion")))
@interface NSDKOperationDealEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKOperationDealEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("OperationEntity")))
@interface NSDKOperationEntity : NSDKBase
@property (class, readonly, getter=companion) NSDKOperationEntityCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *accountId __attribute__((swift_name("accountId")));
@property (readonly) NSDKAccountType *accountType __attribute__((swift_name("accountType")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSDKOperationStatus *status __attribute__((swift_name("status")));
@property (readonly) NSDKOperationType *type __attribute__((swift_name("type")));
@property (readonly) int64_t updatedAt __attribute__((swift_name("updatedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationEntity.Companion")))
@interface NSDKOperationEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKOperationEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol NSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<NSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol NSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<NSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<NSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol NSDKKotlinx_serialization_coreKSerializer <NSDKKotlinx_serialization_coreSerializationStrategy, NSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationEntitySerializer")))
@interface NSDKOperationEntitySerializer : NSDKBase <NSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)operationEntitySerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKOperationEntitySerializer *shared __attribute__((swift_name("shared")));
- (NSDKOperationEntity *)deserializeDecoder:(id<NSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<NSDKKotlinx_serialization_coreEncoder>)encoder value:(NSDKOperationEntity *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationInstrumentEntity")))
@interface NSDKOperationInstrumentEntity : NSDKBase
- (instancetype)initWithId:(int64_t)id type:(NSDKInstrumentType *)type ticker:(NSString *)ticker isin:(NSString * _Nullable)isin faceUnit:(NSDKCurrency * _Nullable)faceUnit name:(NSString * _Nullable)name logoSrc:(NSString * _Nullable)logoSrc __attribute__((swift_name("init(id:type:ticker:isin:faceUnit:name:logoSrc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKOperationInstrumentEntityCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKInstrumentType *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSDKCurrency * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKOperationInstrumentEntity *)doCopyId:(int64_t)id type:(NSDKInstrumentType *)type ticker:(NSString *)ticker isin:(NSString * _Nullable)isin faceUnit:(NSDKCurrency * _Nullable)faceUnit name:(NSString * _Nullable)name logoSrc:(NSString * _Nullable)logoSrc __attribute__((swift_name("doCopy(id:type:ticker:isin:faceUnit:name:logoSrc:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKCurrency * _Nullable faceUnit __attribute__((swift_name("faceUnit")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isin __attribute__((swift_name("isin")));
@property (readonly) NSString * _Nullable logoSrc __attribute__((swift_name("logoSrc")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@property (readonly) NSDKInstrumentType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationInstrumentEntity.Companion")))
@interface NSDKOperationInstrumentEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKOperationInstrumentEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TradingOperationEntity")))
@interface NSDKTradingOperationEntity : NSDKOperationEntity
- (instancetype)initWithId:(int64_t)id type:(NSDKOperationType *)type status:(NSDKOperationStatus *)status accountId:(NSString *)accountId accountType:(NSDKAccountType *)accountType createdAt:(int64_t)createdAt updatedAt:(int64_t)updatedAt orderId:(NSString * _Nullable)orderId orderType:(NSDKOrderType * _Nullable)orderType instrument:(NSDKOperationInstrumentEntity * _Nullable)instrument instrumentCountActual:(double)instrumentCountActual instrumentCountForecast:(double)instrumentCountForecast instrumentPriceActual:(NSDKCurrencyValue * _Nullable)instrumentPriceActual instrumentPriceForecast:(NSDKCurrencyValue * _Nullable)instrumentPriceForecast dealsCount:(int32_t)dealsCount deals:(NSArray<NSDKOperationDealEntity *> *)deals totalSumActual:(NSDKCurrencyValue * _Nullable)totalSumActual totalSumAccruedInterestActual:(NSDKCurrencyValue * _Nullable)totalSumAccruedInterestActual commissionActual:(NSDKCurrencyValue * _Nullable)commissionActual commissionForecast:(NSDKCurrencyValue * _Nullable)commissionForecast __attribute__((swift_name("init(id:type:status:accountId:accountType:createdAt:updatedAt:orderId:orderType:instrument:instrumentCountActual:instrumentCountForecast:instrumentPriceActual:instrumentPriceForecast:dealsCount:deals:totalSumActual:totalSumAccruedInterestActual:commissionActual:commissionForecast:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKTradingOperationEntityCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKOperationInstrumentEntity * _Nullable)component10 __attribute__((swift_name("component10()")));
- (double)component11 __attribute__((swift_name("component11()")));
- (double)component12 __attribute__((swift_name("component12()")));
- (NSDKCurrencyValue * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSDKCurrencyValue * _Nullable)component14 __attribute__((swift_name("component14()")));
- (int32_t)component15 __attribute__((swift_name("component15()")));
- (NSArray<NSDKOperationDealEntity *> *)component16 __attribute__((swift_name("component16()")));
- (NSDKCurrencyValue * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSDKCurrencyValue * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSDKCurrencyValue * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSDKOperationType *)component2 __attribute__((swift_name("component2()")));
- (NSDKCurrencyValue * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSDKOperationStatus *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSDKAccountType *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKOrderType * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKTradingOperationEntity *)doCopyId:(int64_t)id type:(NSDKOperationType *)type status:(NSDKOperationStatus *)status accountId:(NSString *)accountId accountType:(NSDKAccountType *)accountType createdAt:(int64_t)createdAt updatedAt:(int64_t)updatedAt orderId:(NSString * _Nullable)orderId orderType:(NSDKOrderType * _Nullable)orderType instrument:(NSDKOperationInstrumentEntity * _Nullable)instrument instrumentCountActual:(double)instrumentCountActual instrumentCountForecast:(double)instrumentCountForecast instrumentPriceActual:(NSDKCurrencyValue * _Nullable)instrumentPriceActual instrumentPriceForecast:(NSDKCurrencyValue * _Nullable)instrumentPriceForecast dealsCount:(int32_t)dealsCount deals:(NSArray<NSDKOperationDealEntity *> *)deals totalSumActual:(NSDKCurrencyValue * _Nullable)totalSumActual totalSumAccruedInterestActual:(NSDKCurrencyValue * _Nullable)totalSumAccruedInterestActual commissionActual:(NSDKCurrencyValue * _Nullable)commissionActual commissionForecast:(NSDKCurrencyValue * _Nullable)commissionForecast __attribute__((swift_name("doCopy(id:type:status:accountId:accountType:createdAt:updatedAt:orderId:orderType:instrument:instrumentCountActual:instrumentCountForecast:instrumentPriceActual:instrumentPriceForecast:dealsCount:deals:totalSumActual:totalSumAccruedInterestActual:commissionActual:commissionForecast:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accountId __attribute__((swift_name("accountId")));
@property (readonly) NSDKAccountType *accountType __attribute__((swift_name("accountType")));
@property (readonly) NSDKCurrencyValue * _Nullable commissionActual __attribute__((swift_name("commissionActual")));
@property (readonly) NSDKCurrencyValue * _Nullable commissionForecast __attribute__((swift_name("commissionForecast")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSArray<NSDKOperationDealEntity *> *deals __attribute__((swift_name("deals")));
@property (readonly) int32_t dealsCount __attribute__((swift_name("dealsCount")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSDKOperationInstrumentEntity * _Nullable instrument __attribute__((swift_name("instrument")));
@property (readonly) double instrumentCountActual __attribute__((swift_name("instrumentCountActual")));
@property (readonly) double instrumentCountForecast __attribute__((swift_name("instrumentCountForecast")));
@property (readonly) NSDKCurrencyValue * _Nullable instrumentPriceActual __attribute__((swift_name("instrumentPriceActual")));
@property (readonly) NSDKCurrencyValue * _Nullable instrumentPriceForecast __attribute__((swift_name("instrumentPriceForecast")));
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));
@property (readonly) NSDKOrderType * _Nullable orderType __attribute__((swift_name("orderType")));
@property (readonly) NSDKOperationStatus *status __attribute__((swift_name("status")));
@property (readonly) NSDKCurrencyValue * _Nullable totalSumAccruedInterestActual __attribute__((swift_name("totalSumAccruedInterestActual")));
@property (readonly) NSDKCurrencyValue * _Nullable totalSumActual __attribute__((swift_name("totalSumActual")));
@property (readonly) NSDKOperationType *type __attribute__((swift_name("type")));
@property (readonly) int64_t updatedAt __attribute__((swift_name("updatedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TradingOperationEntity.Companion")))
@interface NSDKTradingOperationEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKTradingOperationEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("PortfolioRepository")))
@protocol NSDKPortfolioRepository
@required

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPortfolioTypes:(NSArray<NSDKAccountType *> *)types yieldCalculationDateFrom:(NSString * _Nullable)yieldCalculationDateFrom withoutYield:(NSDKBoolean * _Nullable)withoutYield completionHandler:(void (^)(NSArray<NSDKAccountEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPortfolio(types:yieldCalculationDateFrom:withoutYield:completionHandler:)")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPortfolioChartAccountId:(NSString *)accountId accountType:(NSDKAccountType *)accountType startDate:(NSString * _Nullable)startDate endDate:(NSString * _Nullable)endDate completionHandler:(void (^)(NSArray<NSDKPortfolioChartPoint *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPortfolioChart(accountId:accountType:startDate:endDate:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PortfolioRepositoryImpl")))
@interface NSDKPortfolioRepositoryImpl : NSDKBase <NSDKPortfolioRepository>
- (instancetype)initWithApiClient:(NSDKNewtonApiClient *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKPortfolioRepositoryImplCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPortfolioTypes:(NSArray<NSDKAccountType *> *)types yieldCalculationDateFrom:(NSString * _Nullable)yieldCalculationDateFrom withoutYield:(NSDKBoolean * _Nullable)withoutYield completionHandler:(void (^)(NSArray<NSDKAccountEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPortfolio(types:yieldCalculationDateFrom:withoutYield:completionHandler:)")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPortfolioChartAccountId:(NSString *)accountId accountType:(NSDKAccountType *)accountType startDate:(NSString * _Nullable)startDate endDate:(NSString * _Nullable)endDate completionHandler:(void (^)(NSArray<NSDKPortfolioChartPoint *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPortfolioChart(accountId:accountType:startDate:endDate:completionHandler:)")));
@property (readonly) NSDKNewtonApiClient *apiClient __attribute__((swift_name("apiClient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PortfolioRepositoryImpl.Companion")))
@interface NSDKPortfolioRepositoryImplCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKPortfolioRepositoryImplCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *API_PATH_PORTFOLIO __attribute__((swift_name("API_PATH_PORTFOLIO")));
@property (readonly) NSString *API_PATH_PORTFOLIO_CHART __attribute__((swift_name("API_PATH_PORTFOLIO_CHART")));
@property (readonly) NSString *DEFAULT_YIELD_CALCULATION_DATE_FROM __attribute__((swift_name("DEFAULT_YIELD_CALCULATION_DATE_FROM")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountEntity")))
@interface NSDKAccountEntity : NSDKBase
- (instancetype)initWithAttributes:(NSArray<NSDKAttribute *> *)attributes id:(NSString *)id name:(NSString *)name type:(NSDKAccountType *)type iia:(BOOL)iia status:(NSDKAccountStatus *)status selected:(BOOL)selected yearRefillValue:(NSDKDouble * _Nullable)yearRefillValue yearRefillLimit:(NSDKDouble * _Nullable)yearRefillLimit createdAt:(int64_t)createdAt gracePeriodEndedAt:(NSDKLong * _Nullable)gracePeriodEndedAt valuation:(NSArray<NSDKCurrencyValue *> *)valuation expectedNetProfit:(NSArray<NSDKCurrencyValue *> *)expectedNetProfit expectedYield:(NSArray<NSDKCurrencyValue *> *)expectedYield noActivity:(BOOL)noActivity __attribute__((swift_name("init(attributes:id:name:type:iia:status:selected:yearRefillValue:yearRefillLimit:createdAt:gracePeriodEndedAt:valuation:expectedNetProfit:expectedYield:noActivity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKAccountEntityCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSDKAttribute *> *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component10 __attribute__((swift_name("component10()")));
- (NSDKLong * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSArray<NSDKCurrencyValue *> *)component12 __attribute__((swift_name("component12()")));
- (NSArray<NSDKCurrencyValue *> *)component13 __attribute__((swift_name("component13()")));
- (NSArray<NSDKCurrencyValue *> *)component14 __attribute__((swift_name("component14()")));
- (BOOL)component15 __attribute__((swift_name("component15()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSDKAccountType *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSDKAccountStatus *)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (NSDKDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKAccountEntity *)doCopyAttributes:(NSArray<NSDKAttribute *> *)attributes id:(NSString *)id name:(NSString *)name type:(NSDKAccountType *)type iia:(BOOL)iia status:(NSDKAccountStatus *)status selected:(BOOL)selected yearRefillValue:(NSDKDouble * _Nullable)yearRefillValue yearRefillLimit:(NSDKDouble * _Nullable)yearRefillLimit createdAt:(int64_t)createdAt gracePeriodEndedAt:(NSDKLong * _Nullable)gracePeriodEndedAt valuation:(NSArray<NSDKCurrencyValue *> *)valuation expectedNetProfit:(NSArray<NSDKCurrencyValue *> *)expectedNetProfit expectedYield:(NSArray<NSDKCurrencyValue *> *)expectedYield noActivity:(BOOL)noActivity __attribute__((swift_name("doCopy(attributes:id:name:type:iia:status:selected:yearRefillValue:yearRefillLimit:createdAt:gracePeriodEndedAt:valuation:expectedNetProfit:expectedYield:noActivity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSDKAttribute *> *attributes __attribute__((swift_name("attributes")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSArray<NSDKCurrencyValue *> *expectedNetProfit __attribute__((swift_name("expectedNetProfit")));
@property (readonly) NSArray<NSDKCurrencyValue *> *expectedYield __attribute__((swift_name("expectedYield")));
@property (readonly) NSDKLong * _Nullable gracePeriodEndedAt __attribute__((swift_name("gracePeriodEndedAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL iia __attribute__((swift_name("iia")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) BOOL noActivity __attribute__((swift_name("noActivity")));
@property (readonly) BOOL selected __attribute__((swift_name("selected")));
@property (readonly) NSDKAccountStatus *status __attribute__((swift_name("status")));
@property (readonly) NSDKAccountType *type __attribute__((swift_name("type")));
@property (readonly) NSArray<NSDKCurrencyValue *> *valuation __attribute__((swift_name("valuation")));
@property (readonly) NSDKDouble * _Nullable yearRefillLimit __attribute__((swift_name("yearRefillLimit")));
@property (readonly) NSDKDouble * _Nullable yearRefillValue __attribute__((swift_name("yearRefillValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountEntity.Companion")))
@interface NSDKAccountEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKAccountEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPortfolioChartUseCase")))
@interface NSDKGetPortfolioChartUseCase : NSDKBase
- (instancetype)initWithRepository:(id<NSDKPortfolioRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeAccountId:(NSString *)accountId accountType:(NSDKAccountType *)accountType startDate:(NSString * _Nullable)startDate endDate:(NSString * _Nullable)endDate completionHandler:(void (^)(NSArray<NSDKPortfolioChartPoint *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(accountId:accountType:startDate:endDate:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPortfolioUseCase")))
@interface NSDKGetPortfolioUseCase : NSDKBase
- (instancetype)initWithRepository:(id<NSDKPortfolioRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeTypes:(NSArray<NSDKAccountType *> *)types yieldCalculationDateFrom:(NSString * _Nullable)yieldCalculationDateFrom withoutYield:(NSDKBoolean * _Nullable)withoutYield completionHandler:(void (^)(NSArray<NSDKAccountEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(types:yieldCalculationDateFrom:withoutYield:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PortfolioChartPoint")))
@interface NSDKPortfolioChartPoint : NSDKBase
- (instancetype)initWithDate:(int64_t)date value:(NSArray<NSDKCurrencyValue *> *)value __attribute__((swift_name("init(date:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKPortfolioChartPointCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSDKCurrencyValue *> *)component2 __attribute__((swift_name("component2()")));
- (NSDKPortfolioChartPoint *)doCopyDate:(int64_t)date value:(NSArray<NSDKCurrencyValue *> *)value __attribute__((swift_name("doCopy(date:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t date __attribute__((swift_name("date")));
@property (readonly) NSArray<NSDKCurrencyValue *> *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PortfolioChartPoint.Companion")))
@interface NSDKPortfolioChartPointCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKPortfolioChartPointCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendsDescriptor")))
@interface NSDKDividendsDescriptor : NSDKBase
- (instancetype)initWithCompanyId:(NSString *)companyId currency:(NSDKCurrency *)currency instrumentType:(NSDKInstrumentType *)instrumentType __attribute__((swift_name("init(companyId:currency:instrumentType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKDividendsDescriptorCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSDKCurrency *)component2 __attribute__((swift_name("component2()")));
- (NSDKInstrumentType *)component3 __attribute__((swift_name("component3()")));
- (NSDKDividendsDescriptor *)doCopyCompanyId:(NSString *)companyId currency:(NSDKCurrency *)currency instrumentType:(NSDKInstrumentType *)instrumentType __attribute__((swift_name("doCopy(companyId:currency:instrumentType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *companyId __attribute__((swift_name("companyId")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) NSDKInstrumentType *instrumentType __attribute__((swift_name("instrumentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendsDescriptor.Companion")))
@interface NSDKDividendsDescriptorCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKDividendsDescriptorCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendsParameters")))
@interface NSDKDividendsParameters : NSDKBase
- (instancetype)initWithDescriptors:(NSArray<NSDKDividendsDescriptor *> *)descriptors groupByYearHappened:(BOOL)groupByYearHappened yearsCount:(int32_t)yearsCount __attribute__((swift_name("init(descriptors:groupByYearHappened:yearsCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKDividendsParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSDKDividendsDescriptor *> *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSDKDividendsParameters *)doCopyDescriptors:(NSArray<NSDKDividendsDescriptor *> *)descriptors groupByYearHappened:(BOOL)groupByYearHappened yearsCount:(int32_t)yearsCount __attribute__((swift_name("doCopy(descriptors:groupByYearHappened:yearsCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSDKDividendsDescriptor *> *descriptors __attribute__((swift_name("descriptors")));
@property (readonly) BOOL groupByYearHappened __attribute__((swift_name("groupByYearHappened")));
@property (readonly) int32_t yearsCount __attribute__((swift_name("yearsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendsParameters.Companion")))
@interface NSDKDividendsParametersCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKDividendsParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("DividendsRepository")))
@protocol NSDKDividendsRepository
@required

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDividendsCompanyId:(int64_t)companyId currency:(NSDKCurrency *)currency instrumentType:(NSDKInstrumentType *)instrumentType groupByYearHappened:(BOOL)groupByYearHappened yearsCount:(int32_t)yearsCount completionHandler:(void (^)(NSDictionary<NSDKInt *, NSArray<NSDKDividendEntity *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getDividends(companyId:currency:instrumentType:groupByYearHappened:yearsCount:completionHandler:)"))) __attribute__((deprecated("API will be changed")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendsRepositoryImpl")))
@interface NSDKDividendsRepositoryImpl : NSDKBase <NSDKDividendsRepository>
- (instancetype)initWithApiClient:(NSDKNewtonApiClient *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKDividendsRepositoryImplCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDividendsCompanyId:(int64_t)companyId currency:(NSDKCurrency *)currency instrumentType:(NSDKInstrumentType *)instrumentType groupByYearHappened:(BOOL)groupByYearHappened yearsCount:(int32_t)yearsCount completionHandler:(void (^)(NSDictionary<NSDKInt *, NSArray<NSDKDividendEntity *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getDividends(companyId:currency:instrumentType:groupByYearHappened:yearsCount:completionHandler:)"))) __attribute__((deprecated("Overrides deprecated member in 'io.nwtn.dividends.domain.DividendsRepository'. API will be changed")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendsRepositoryImpl.Companion")))
@interface NSDKDividendsRepositoryImplCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKDividendsRepositoryImplCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendsResponse")))
@interface NSDKDividendsResponse : NSDKBase
- (instancetype)initWithResponse:(NSDictionary<NSDKLong *, NSDictionary<NSDKInstrumentType *, NSDictionary<NSDKInt *, NSArray<NSDKDividendEntity *> *> *> *> * _Nullable)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKDividendsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSDKLong *, NSDictionary<NSDKInstrumentType *, NSDictionary<NSDKInt *, NSArray<NSDKDividendEntity *> *> *> *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSDKDividendsResponse *)doCopyResponse:(NSDictionary<NSDKLong *, NSDictionary<NSDKInstrumentType *, NSDictionary<NSDKInt *, NSArray<NSDKDividendEntity *> *> *> *> * _Nullable)response __attribute__((swift_name("doCopy(response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSDKLong *, NSDictionary<NSDKInstrumentType *, NSDictionary<NSDKInt *, NSArray<NSDKDividendEntity *> *> *> *> * _Nullable response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendsResponse.Companion")))
@interface NSDKDividendsResponseCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKDividendsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendsResponseSerializer")))
@interface NSDKDividendsResponseSerializer : NSDKBase <NSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dividendsResponseSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKDividendsResponseSerializer *shared __attribute__((swift_name("shared")));
- (NSDKDividendsResponse *)deserializeDecoder:(id<NSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<NSDKKotlinx_serialization_coreEncoder>)encoder value:(NSDKDividendsResponse *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendEntity")))
@interface NSDKDividendEntity : NSDKBase
- (instancetype)initWithComment:(NSString * _Nullable)comment currency:(NSDKCurrency *)currency dateHappened:(int64_t)dateHappened fiscalPeriodType:(NSString *)fiscalPeriodType fiscalYear:(NSDKInt * _Nullable)fiscalYear isFuture:(BOOL)isFuture totalValue:(NSDKDouble * _Nullable)totalValue valuePerShare:(NSDKDouble * _Nullable)valuePerShare __attribute__((swift_name("init(comment:currency:dateHappened:fiscalPeriodType:fiscalYear:isFuture:totalValue:valuePerShare:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKDividendEntityCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSDKCurrency *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSDKInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (NSDKDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDividendEntity *)doCopyComment:(NSString * _Nullable)comment currency:(NSDKCurrency *)currency dateHappened:(int64_t)dateHappened fiscalPeriodType:(NSString *)fiscalPeriodType fiscalYear:(NSDKInt * _Nullable)fiscalYear isFuture:(BOOL)isFuture totalValue:(NSDKDouble * _Nullable)totalValue valuePerShare:(NSDKDouble * _Nullable)valuePerShare __attribute__((swift_name("doCopy(comment:currency:dateHappened:fiscalPeriodType:fiscalYear:isFuture:totalValue:valuePerShare:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) int64_t dateHappened __attribute__((swift_name("dateHappened")));
@property (readonly) NSString *fiscalPeriodType __attribute__((swift_name("fiscalPeriodType")));
@property (readonly) NSDKInt * _Nullable fiscalYear __attribute__((swift_name("fiscalYear")));
@property (readonly) BOOL isFuture __attribute__((swift_name("isFuture")));
@property (readonly) NSDKDouble * _Nullable totalValue __attribute__((swift_name("totalValue")));
@property (readonly) NSDKDouble * _Nullable valuePerShare __attribute__((swift_name("valuePerShare")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DividendEntity.Companion")))
@interface NSDKDividendEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKDividendEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDividendsByInstrumentIdUseCase")))
@interface NSDKGetDividendsByInstrumentIdUseCase : NSDKBase
- (instancetype)initWithDividendsRepository:(id<NSDKDividendsRepository>)dividendsRepository catalogRepository:(id<NSDKCatalogRepository>)catalogRepository __attribute__((swift_name("init(dividendsRepository:catalogRepository:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKGetDividendsByInstrumentIdUseCaseCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInstrumentId:(int64_t)instrumentId yearsCount:(NSDKInt * _Nullable)yearsCount completionHandler:(void (^)(NSArray<NSDKDividendEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(instrumentId:yearsCount:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDividendsByInstrumentIdUseCase.Companion")))
@interface NSDKGetDividendsByInstrumentIdUseCaseCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKGetDividendsByInstrumentIdUseCaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t YEARS_COUNT __attribute__((swift_name("YEARS_COUNT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDividendsUseCase")))
@interface NSDKGetDividendsUseCase : NSDKBase
- (instancetype)initWithRepository:(id<NSDKDividendsRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeCompanyId:(int64_t)companyId currency:(NSDKCurrency *)currency instrumentType:(NSDKInstrumentType *)instrumentType yearsCount:(int32_t)yearsCount completionHandler:(void (^)(NSArray<NSDKDividendEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(companyId:currency:instrumentType:yearsCount:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BondData")))
@interface NSDKBondData : NSDKBase
- (instancetype)initWithSpread:(double)spread yieldPercent:(double)yieldPercent bondFaceValue:(double)bondFaceValue accruedInterest:(double)accruedInterest yieldToOfferPercent:(NSDKDouble * _Nullable)yieldToOfferPercent faceUnit:(NSString * _Nullable)faceUnit faceValueInCurrency:(NSDKDouble * _Nullable)faceValueInCurrency __attribute__((swift_name("init(spread:yieldPercent:bondFaceValue:accruedInterest:yieldToOfferPercent:faceUnit:faceValueInCurrency:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKBondDataCompanion *companion __attribute__((swift_name("companion")));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (NSDKDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSDKDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKBondData *)doCopySpread:(double)spread yieldPercent:(double)yieldPercent bondFaceValue:(double)bondFaceValue accruedInterest:(double)accruedInterest yieldToOfferPercent:(NSDKDouble * _Nullable)yieldToOfferPercent faceUnit:(NSString * _Nullable)faceUnit faceValueInCurrency:(NSDKDouble * _Nullable)faceValueInCurrency __attribute__((swift_name("doCopy(spread:yieldPercent:bondFaceValue:accruedInterest:yieldToOfferPercent:faceUnit:faceValueInCurrency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double accruedInterest __attribute__((swift_name("accruedInterest")));
@property (readonly) double bondFaceValue __attribute__((swift_name("bondFaceValue")));
@property (readonly) NSString * _Nullable faceUnit __attribute__((swift_name("faceUnit")));
@property (readonly) NSDKDouble * _Nullable faceValueInCurrency __attribute__((swift_name("faceValueInCurrency")));
@property (readonly) double spread __attribute__((swift_name("spread")));
@property (readonly) double yieldPercent __attribute__((swift_name("yieldPercent")));
@property (readonly) NSDKDouble * _Nullable yieldToOfferPercent __attribute__((swift_name("yieldToOfferPercent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BondData.Companion")))
@interface NSDKBondDataCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKBondDataCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol NSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface NSDKKotlinEnum<E> : NSDKBase <NSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CandlesTimeGranularity")))
@interface NSDKCandlesTimeGranularity : NSDKKotlinEnum<NSDKCandlesTimeGranularity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKCandlesTimeGranularityCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKCandlesTimeGranularity *oneMinute __attribute__((swift_name("oneMinute")));
@property (class, readonly) NSDKCandlesTimeGranularity *fiveMinutes __attribute__((swift_name("fiveMinutes")));
@property (class, readonly) NSDKCandlesTimeGranularity *tenMinutes __attribute__((swift_name("tenMinutes")));
@property (class, readonly) NSDKCandlesTimeGranularity *fifteenMinutes __attribute__((swift_name("fifteenMinutes")));
@property (class, readonly) NSDKCandlesTimeGranularity *thirtyMinutes __attribute__((swift_name("thirtyMinutes")));
@property (class, readonly) NSDKCandlesTimeGranularity *oneHour __attribute__((swift_name("oneHour")));
@property (class, readonly) NSDKCandlesTimeGranularity *oneDay __attribute__((swift_name("oneDay")));
@property (class, readonly) NSDKCandlesTimeGranularity *oneWeek __attribute__((swift_name("oneWeek")));
@property (class, readonly) NSDKCandlesTimeGranularity *oneMonth __attribute__((swift_name("oneMonth")));
+ (NSDKKotlinArray<NSDKCandlesTimeGranularity *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CandlesTimeGranularity.Companion")))
@interface NSDKCandlesTimeGranularityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCandlesTimeGranularityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetHistoryMarketDataCandlesUseCase")))
@interface NSDKGetHistoryMarketDataCandlesUseCase : NSDKBase
- (instancetype)initWithRepository:(id<NSDKHistoryMarketDataRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInstrumentId:(int64_t)instrumentId granularity:(NSDKCandlesTimeGranularity *)granularity periodStart:(int64_t)periodStart periodEnd:(int64_t)periodEnd completionHandler:(void (^)(NSArray<NSDKHistoryMarketDataCandleEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(instrumentId:granularity:periodStart:periodEnd:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetHistoryMarketDataUseCase")))
@interface NSDKGetHistoryMarketDataUseCase : NSDKBase
- (instancetype)initWithRepository:(id<NSDKHistoryMarketDataRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInstrumentId:(int64_t)instrumentId granularity:(NSDKTimeGranularity *)granularity pointsNum:(int32_t)pointsNum startTime:(int64_t)startTime endTime:(NSDKLong * _Nullable)endTime completionHandler:(void (^)(NSArray<NSDKHistoryMarketDataEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(instrumentId:granularity:pointsNum:startTime:endTime:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMarketDataUseCase")))
@interface NSDKGetMarketDataUseCase : NSDKBase
- (instancetype)initWithRepository:(id<NSDKMarketDataRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInstrumentId:(int64_t)instrumentId completionHandler:(void (^)(NSDKMarketDataEntity * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(instrumentId:completionHandler:)")));
@property (readonly) id<NSDKMarketDataRepository> repository __attribute__((swift_name("repository")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataCandleEntity")))
@interface NSDKHistoryMarketDataCandleEntity : NSDKBase
- (instancetype)initWithOpen:(double)open close:(double)close high:(double)high low:(double)low volume:(int64_t)volume candleStart:(int64_t)candleStart candleEnd:(int64_t)candleEnd __attribute__((swift_name("init(open:close:high:low:volume:candleStart:candleEnd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKHistoryMarketDataCandleEntityCompanion *companion __attribute__((swift_name("companion")));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (NSDKHistoryMarketDataCandleEntity *)doCopyOpen:(double)open close:(double)close high:(double)high low:(double)low volume:(int64_t)volume candleStart:(int64_t)candleStart candleEnd:(int64_t)candleEnd __attribute__((swift_name("doCopy(open:close:high:low:volume:candleStart:candleEnd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t candleEnd __attribute__((swift_name("candleEnd")));
@property (readonly) int64_t candleStart __attribute__((swift_name("candleStart")));
@property (readonly) double close __attribute__((swift_name("close")));
@property (readonly) double high __attribute__((swift_name("high")));
@property (readonly) double low __attribute__((swift_name("low")));
@property (readonly) double open __attribute__((swift_name("open")));
@property (readonly) int64_t volume __attribute__((swift_name("volume")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataCandleEntity.Companion")))
@interface NSDKHistoryMarketDataCandleEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKHistoryMarketDataCandleEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataEntity")))
@interface NSDKHistoryMarketDataEntity : NSDKBase
- (instancetype)initWithOpen:(NSDKDouble * _Nullable)open close:(double)close high:(NSDKDouble * _Nullable)high low:(NSDKDouble * _Nullable)low volume:(int64_t)volume time:(int64_t)time startTime:(NSDKLong * _Nullable)startTime endTime:(NSDKLong * _Nullable)endTime yield:(NSDKDouble * _Nullable)yield faceValue:(NSDKDouble * _Nullable)faceValue accruedInterest:(NSDKDouble * _Nullable)accruedInterest faceValueInCurrency:(NSDKDouble * _Nullable)faceValueInCurrency accruedInterestInCurrency:(NSDKDouble * _Nullable)accruedInterestInCurrency __attribute__((swift_name("init(open:close:high:low:volume:time:startTime:endTime:yield:faceValue:accruedInterest:faceValueInCurrency:accruedInterestInCurrency:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKHistoryMarketDataEntityCompanion *companion __attribute__((swift_name("companion")));
- (NSDKDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSDKDouble * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSDKDouble * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSDKDouble * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSDKDouble * _Nullable)component13 __attribute__((swift_name("component13()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (NSDKDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSDKDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSDKLong * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKLong * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKHistoryMarketDataEntity *)doCopyOpen:(NSDKDouble * _Nullable)open close:(double)close high:(NSDKDouble * _Nullable)high low:(NSDKDouble * _Nullable)low volume:(int64_t)volume time:(int64_t)time startTime:(NSDKLong * _Nullable)startTime endTime:(NSDKLong * _Nullable)endTime yield:(NSDKDouble * _Nullable)yield faceValue:(NSDKDouble * _Nullable)faceValue accruedInterest:(NSDKDouble * _Nullable)accruedInterest faceValueInCurrency:(NSDKDouble * _Nullable)faceValueInCurrency accruedInterestInCurrency:(NSDKDouble * _Nullable)accruedInterestInCurrency __attribute__((swift_name("doCopy(open:close:high:low:volume:time:startTime:endTime:yield:faceValue:accruedInterest:faceValueInCurrency:accruedInterestInCurrency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKDouble * _Nullable accruedInterest __attribute__((swift_name("accruedInterest")));
@property (readonly) NSDKDouble * _Nullable accruedInterestInCurrency __attribute__((swift_name("accruedInterestInCurrency")));
@property (readonly) double close __attribute__((swift_name("close")));
@property (readonly) NSDKLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) NSDKDouble * _Nullable faceValue __attribute__((swift_name("faceValue")));
@property (readonly) NSDKDouble * _Nullable faceValueInCurrency __attribute__((swift_name("faceValueInCurrency")));
@property (readonly) NSDKDouble * _Nullable high __attribute__((swift_name("high")));
@property (readonly) NSDKDouble * _Nullable low __attribute__((swift_name("low")));
@property (readonly) NSDKDouble * _Nullable open __attribute__((swift_name("open")));
@property (readonly) NSDKLong * _Nullable startTime __attribute__((swift_name("startTime")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@property (readonly) int64_t volume __attribute__((swift_name("volume")));
@property (readonly) NSDKDouble * _Nullable yield __attribute__((swift_name("yield")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataEntity.Companion")))
@interface NSDKHistoryMarketDataEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKHistoryMarketDataEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("HistoryMarketDataRepository")))
@protocol NSDKHistoryMarketDataRepository
@required

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHistoryMarketDataInstrumentId:(int64_t)instrumentId granularity:(NSDKTimeGranularity *)granularity pointsNum:(int32_t)pointsNum startTime:(int64_t)startTime endTime:(NSDKLong * _Nullable)endTime completionHandler:(void (^)(NSArray<NSDKHistoryMarketDataEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHistoryMarketData(instrumentId:granularity:pointsNum:startTime:endTime:completionHandler:)")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHistoryMarketDataCandlesInstrumentId:(int64_t)instrumentId granularity:(NSDKCandlesTimeGranularity *)granularity periodStart:(int64_t)periodStart periodEnd:(int64_t)periodEnd completionHandler:(void (^)(NSArray<NSDKHistoryMarketDataCandleEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHistoryMarketDataCandles(instrumentId:granularity:periodStart:periodEnd:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IndexData")))
@interface NSDKIndexData : NSDKBase
- (instancetype)initWithOpen:(double)open lastChangePercent:(double)lastChangePercent monthChangePercent:(double)monthChangePercent yearChangePercent:(double)yearChangePercent annualHigh:(NSDKDouble * _Nullable)annualHigh annualLow:(NSDKDouble * _Nullable)annualLow __attribute__((swift_name("init(open:lastChangePercent:monthChangePercent:yearChangePercent:annualHigh:annualLow:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKIndexDataCompanion *companion __attribute__((swift_name("companion")));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (NSDKDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSDKDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSDKIndexData *)doCopyOpen:(double)open lastChangePercent:(double)lastChangePercent monthChangePercent:(double)monthChangePercent yearChangePercent:(double)yearChangePercent annualHigh:(NSDKDouble * _Nullable)annualHigh annualLow:(NSDKDouble * _Nullable)annualLow __attribute__((swift_name("doCopy(open:lastChangePercent:monthChangePercent:yearChangePercent:annualHigh:annualLow:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKDouble * _Nullable annualHigh __attribute__((swift_name("annualHigh")));
@property (readonly) NSDKDouble * _Nullable annualLow __attribute__((swift_name("annualLow")));
@property (readonly) double lastChangePercent __attribute__((swift_name("lastChangePercent")));
@property (readonly) double monthChangePercent __attribute__((swift_name("monthChangePercent")));
@property (readonly) double open __attribute__((swift_name("open")));
@property (readonly) double yearChangePercent __attribute__((swift_name("yearChangePercent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IndexData.Companion")))
@interface NSDKIndexDataCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKIndexDataCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataEntity")))
@interface NSDKMarketDataEntity : NSDKBase
- (instancetype)initWithStaticParams:(NSDKStaticParams *)staticParams bondData:(NSDKBondData * _Nullable)bondData indexData:(NSDKIndexData * _Nullable)indexData highBidYield:(NSDKDouble * _Nullable)highBidYield lowAskYield:(NSDKDouble * _Nullable)lowAskYield limitUp:(NSDKDouble * _Nullable)limitUp limitDown:(NSDKDouble * _Nullable)limitDown lastClosePrice:(NSDKDouble * _Nullable)lastClosePrice lastPrice:(NSDKDouble * _Nullable)lastPrice closePrice:(NSDKDouble * _Nullable)closePrice lowAsk:(NSDKDouble * _Nullable)lowAsk highBid:(NSDKDouble * _Nullable)highBid tradingInstrumentStatus:(NSString *)tradingInstrumentStatus tradingStatus:(NSString *)tradingStatus updateTime:(int64_t)updateTime exchangeTime:(int64_t)exchangeTime __attribute__((swift_name("init(staticParams:bondData:indexData:highBidYield:lowAskYield:limitUp:limitDown:lastClosePrice:lastPrice:closePrice:lowAsk:highBid:tradingInstrumentStatus:tradingStatus:updateTime:exchangeTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKMarketDataEntityCompanion *companion __attribute__((swift_name("companion")));
- (NSDKStaticParams *)component1 __attribute__((swift_name("component1()")));
- (NSDKDouble * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSDKDouble * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSDKDouble * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (int64_t)component15 __attribute__((swift_name("component15()")));
- (int64_t)component16 __attribute__((swift_name("component16()")));
- (NSDKBondData * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDKIndexData * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSDKDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSDKDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSDKDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSDKDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKMarketDataEntity *)doCopyStaticParams:(NSDKStaticParams *)staticParams bondData:(NSDKBondData * _Nullable)bondData indexData:(NSDKIndexData * _Nullable)indexData highBidYield:(NSDKDouble * _Nullable)highBidYield lowAskYield:(NSDKDouble * _Nullable)lowAskYield limitUp:(NSDKDouble * _Nullable)limitUp limitDown:(NSDKDouble * _Nullable)limitDown lastClosePrice:(NSDKDouble * _Nullable)lastClosePrice lastPrice:(NSDKDouble * _Nullable)lastPrice closePrice:(NSDKDouble * _Nullable)closePrice lowAsk:(NSDKDouble * _Nullable)lowAsk highBid:(NSDKDouble * _Nullable)highBid tradingInstrumentStatus:(NSString *)tradingInstrumentStatus tradingStatus:(NSString *)tradingStatus updateTime:(int64_t)updateTime exchangeTime:(int64_t)exchangeTime __attribute__((swift_name("doCopy(staticParams:bondData:indexData:highBidYield:lowAskYield:limitUp:limitDown:lastClosePrice:lastPrice:closePrice:lowAsk:highBid:tradingInstrumentStatus:tradingStatus:updateTime:exchangeTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKBondData * _Nullable bondData __attribute__((swift_name("bondData")));
@property (readonly) NSDKDouble * _Nullable closePrice __attribute__((swift_name("closePrice")));
@property (readonly) int64_t exchangeTime __attribute__((swift_name("exchangeTime")));
@property (readonly) NSDKDouble * _Nullable highBid __attribute__((swift_name("highBid")));
@property (readonly) NSDKDouble * _Nullable highBidYield __attribute__((swift_name("highBidYield")));
@property (readonly) NSDKIndexData * _Nullable indexData __attribute__((swift_name("indexData")));
@property (readonly) NSDKDouble * _Nullable lastClosePrice __attribute__((swift_name("lastClosePrice")));
@property (readonly) NSDKDouble * _Nullable lastPrice __attribute__((swift_name("lastPrice")));
@property (readonly) NSDKDouble * _Nullable limitDown __attribute__((swift_name("limitDown")));
@property (readonly) NSDKDouble * _Nullable limitUp __attribute__((swift_name("limitUp")));
@property (readonly) NSDKDouble * _Nullable lowAsk __attribute__((swift_name("lowAsk")));
@property (readonly) NSDKDouble * _Nullable lowAskYield __attribute__((swift_name("lowAskYield")));
@property (readonly) NSDKStaticParams *staticParams __attribute__((swift_name("staticParams")));
@property (readonly) NSString *tradingInstrumentStatus __attribute__((swift_name("tradingInstrumentStatus")));
@property (readonly) NSString *tradingStatus __attribute__((swift_name("tradingStatus")));
@property (readonly) int64_t updateTime __attribute__((swift_name("updateTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataEntity.Companion")))
@interface NSDKMarketDataEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKMarketDataEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("MarketDataRepository")))
@protocol NSDKMarketDataRepository
@required

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMarketDataInstrumentId:(int64_t)instrumentId completionHandler:(void (^)(NSDKMarketDataEntity * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMarketData(instrumentId:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticParams")))
@interface NSDKStaticParams : NSDKBase
- (instancetype)initWithCurrency:(NSDKCurrency *)currency lotSize:(int64_t)lotSize priceStep:(double)priceStep settlementType:(NSString *)settlementType __attribute__((swift_name("init(currency:lotSize:priceStep:settlementType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKStaticParamsCompanion *companion __attribute__((swift_name("companion")));
- (NSDKCurrency *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSDKStaticParams *)doCopyCurrency:(NSDKCurrency *)currency lotSize:(int64_t)lotSize priceStep:(double)priceStep settlementType:(NSString *)settlementType __attribute__((swift_name("doCopy(currency:lotSize:priceStep:settlementType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) int64_t lotSize __attribute__((swift_name("lotSize")));
@property (readonly) double priceStep __attribute__((swift_name("priceStep")));
@property (readonly) NSString *settlementType __attribute__((swift_name("settlementType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticParams.Companion")))
@interface NSDKStaticParamsCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKStaticParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeGranularity")))
@interface NSDKTimeGranularity : NSDKKotlinEnum<NSDKTimeGranularity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKTimeGranularityCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKTimeGranularity *tenMinutes __attribute__((swift_name("tenMinutes")));
@property (class, readonly) NSDKTimeGranularity *day __attribute__((swift_name("day")));
@property (class, readonly) NSDKTimeGranularity *hour __attribute__((swift_name("hour")));
@property (class, readonly) NSDKTimeGranularity *week __attribute__((swift_name("week")));
@property (class, readonly) NSDKTimeGranularity *month __attribute__((swift_name("month")));
@property (class, readonly) NSDKTimeGranularity *year __attribute__((swift_name("year")));
+ (NSDKKotlinArray<NSDKTimeGranularity *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeGranularity.Companion")))
@interface NSDKTimeGranularityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKTimeGranularityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataCandlesParameters")))
@interface NSDKHistoryMarketDataCandlesParameters : NSDKBase
- (instancetype)initWithInstrumentId:(int64_t)instrumentId granularity:(NSDKCandlesTimeGranularity *)granularity periodStart:(int64_t)periodStart periodEnd:(NSDKLong * _Nullable)periodEnd __attribute__((swift_name("init(instrumentId:granularity:periodStart:periodEnd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKHistoryMarketDataCandlesParametersCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDKCandlesTimeGranularity *granularity __attribute__((swift_name("granularity")));
@property (readonly) int64_t instrumentId __attribute__((swift_name("instrumentId")));
@property (readonly) NSDKLong * _Nullable periodEnd __attribute__((swift_name("periodEnd")));
@property (readonly) int64_t periodStart __attribute__((swift_name("periodStart")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataCandlesParameters.Companion")))
@interface NSDKHistoryMarketDataCandlesParametersCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKHistoryMarketDataCandlesParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataCandlesResponse")))
@interface NSDKHistoryMarketDataCandlesResponse : NSDKBase
- (instancetype)initWithResponse:(NSArray<NSDKHistoryMarketDataCandleEntity *> *)response responseTime:(int64_t)responseTime errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("init(response:responseTime:errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKHistoryMarketDataCandlesResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSDKHistoryMarketDataCandleEntity *> *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSDKHistoryMarketDataCandlesResponse *)doCopyResponse:(NSArray<NSDKHistoryMarketDataCandleEntity *> *)response responseTime:(int64_t)responseTime errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("doCopy(response:responseTime:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) NSArray<NSDKHistoryMarketDataCandleEntity *> *response __attribute__((swift_name("response")));
@property (readonly) int64_t responseTime __attribute__((swift_name("responseTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataCandlesResponse.Companion")))
@interface NSDKHistoryMarketDataCandlesResponseCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKHistoryMarketDataCandlesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataParameters")))
@interface NSDKHistoryMarketDataParameters : NSDKBase
- (instancetype)initWithInstrumentIds:(NSArray<NSString *> *)instrumentIds granularity:(NSDKTimeGranularity *)granularity pointsNum:(int32_t)pointsNum startTime:(int64_t)startTime endTime:(NSDKLong * _Nullable)endTime __attribute__((swift_name("init(instrumentIds:granularity:pointsNum:startTime:endTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKHistoryMarketDataParametersCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDKLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) NSDKTimeGranularity *granularity __attribute__((swift_name("granularity")));
@property (readonly) NSArray<NSString *> *instrumentIds __attribute__((swift_name("instrumentIds")));
@property (readonly) int32_t pointsNum __attribute__((swift_name("pointsNum")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataParameters.Companion")))
@interface NSDKHistoryMarketDataParametersCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKHistoryMarketDataParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataRepositoryImpl")))
@interface NSDKHistoryMarketDataRepositoryImpl : NSDKBase <NSDKHistoryMarketDataRepository>
- (instancetype)initWithApiClient:(NSDKNewtonApiClient *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKHistoryMarketDataRepositoryImplCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHistoryMarketDataInstrumentId:(int64_t)instrumentId granularity:(NSDKTimeGranularity *)granularity pointsNum:(int32_t)pointsNum startTime:(int64_t)startTime endTime:(NSDKLong * _Nullable)endTime completionHandler:(void (^)(NSArray<NSDKHistoryMarketDataEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHistoryMarketData(instrumentId:granularity:pointsNum:startTime:endTime:completionHandler:)")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHistoryMarketDataCandlesInstrumentId:(int64_t)instrumentId granularity:(NSDKCandlesTimeGranularity *)granularity periodStart:(int64_t)periodStart periodEnd:(int64_t)periodEnd completionHandler:(void (^)(NSArray<NSDKHistoryMarketDataCandleEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHistoryMarketDataCandles(instrumentId:granularity:periodStart:periodEnd:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataRepositoryImpl.Companion")))
@interface NSDKHistoryMarketDataRepositoryImplCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKHistoryMarketDataRepositoryImplCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataResponse")))
@interface NSDKHistoryMarketDataResponse : NSDKBase
- (instancetype)initWithResponse:(NSArray<NSDKInstrumentMarketDataEntity *> *)response responseTime:(double)responseTime __attribute__((swift_name("init(response:responseTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKHistoryMarketDataResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSDKInstrumentMarketDataEntity *> *)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (NSDKHistoryMarketDataResponse *)doCopyResponse:(NSArray<NSDKInstrumentMarketDataEntity *> *)response responseTime:(double)responseTime __attribute__((swift_name("doCopy(response:responseTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSDKInstrumentMarketDataEntity *> *response __attribute__((swift_name("response")));
@property (readonly) double responseTime __attribute__((swift_name("responseTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMarketDataResponse.Companion")))
@interface NSDKHistoryMarketDataResponseCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKHistoryMarketDataResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstrumentMarketDataEntity")))
@interface NSDKInstrumentMarketDataEntity : NSDKBase
- (instancetype)initWithId:(NSString *)id entities:(NSArray<NSDKHistoryMarketDataEntity *> *)entities __attribute__((swift_name("init(id:entities:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKInstrumentMarketDataEntityCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSDKHistoryMarketDataEntity *> *)component2 __attribute__((swift_name("component2()")));
- (NSDKInstrumentMarketDataEntity *)doCopyId:(NSString *)id entities:(NSArray<NSDKHistoryMarketDataEntity *> *)entities __attribute__((swift_name("doCopy(id:entities:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSDKHistoryMarketDataEntity *> *entities __attribute__((swift_name("entities")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstrumentMarketDataEntity.Companion")))
@interface NSDKInstrumentMarketDataEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKInstrumentMarketDataEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstrumentMarketDataEntitySerializer")))
@interface NSDKInstrumentMarketDataEntitySerializer : NSDKBase <NSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)instrumentMarketDataEntitySerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKInstrumentMarketDataEntitySerializer *shared __attribute__((swift_name("shared")));
- (NSDKInstrumentMarketDataEntity *)deserializeDecoder:(id<NSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<NSDKKotlinx_serialization_coreEncoder>)encoder value:(NSDKInstrumentMarketDataEntity *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataInstrumentKey")))
@interface NSDKMarketDataInstrumentKey : NSDKBase
- (instancetype)initWithId:(int64_t)id exchange:(NSString *)exchange classCode:(NSString *)classCode ticker:(NSString *)ticker __attribute__((swift_name("init(id:exchange:classCode:ticker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKMarketDataInstrumentKeyCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSDKMarketDataInstrumentKey *)doCopyId:(int64_t)id exchange:(NSString *)exchange classCode:(NSString *)classCode ticker:(NSString *)ticker __attribute__((swift_name("doCopy(id:exchange:classCode:ticker:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *classCode __attribute__((swift_name("classCode")));
@property (readonly) NSString *exchange __attribute__((swift_name("exchange")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataInstrumentKey.Companion")))
@interface NSDKMarketDataInstrumentKeyCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKMarketDataInstrumentKeyCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataParameters")))
@interface NSDKMarketDataParameters : NSDKBase
- (instancetype)initWithId:(int64_t)id searchParams:(NSDKMarketDataSearchParameters * _Nullable)searchParams __attribute__((swift_name("init(id:searchParams:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKMarketDataParametersCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKMarketDataSearchParameters * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDKMarketDataParameters *)doCopyId:(int64_t)id searchParams:(NSDKMarketDataSearchParameters * _Nullable)searchParams __attribute__((swift_name("doCopy(id:searchParams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSDKMarketDataSearchParameters * _Nullable searchParams __attribute__((swift_name("searchParams")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataParameters.Companion")))
@interface NSDKMarketDataParametersCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKMarketDataParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataRepositoryImpl")))
@interface NSDKMarketDataRepositoryImpl : NSDKBase <NSDKMarketDataRepository>
- (instancetype)initWithApiClient:(NSDKNewtonApiClient *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKMarketDataRepositoryImplCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMarketDataInstrumentId:(int64_t)instrumentId completionHandler:(void (^)(NSDKMarketDataEntity * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMarketData(instrumentId:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataRepositoryImpl.Companion")))
@interface NSDKMarketDataRepositoryImplCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKMarketDataRepositoryImplCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataResponse")))
@interface NSDKMarketDataResponse : NSDKBase
- (instancetype)initWithResponse:(NSDKMarketDataResponseResult *)response responseTime:(int64_t)responseTime errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("init(response:responseTime:errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKMarketDataResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSDKMarketDataResponseResult *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSDKMarketDataResponse *)doCopyResponse:(NSDKMarketDataResponseResult *)response responseTime:(int64_t)responseTime errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("doCopy(response:responseTime:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) NSDKMarketDataResponseResult *response __attribute__((swift_name("response")));
@property (readonly) int64_t responseTime __attribute__((swift_name("responseTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataResponse.Companion")))
@interface NSDKMarketDataResponseCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKMarketDataResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataResponseResult")))
@interface NSDKMarketDataResponseResult : NSDKBase
- (instancetype)initWithData:(NSArray<NSDKMarketDataResponseResultEntity *> *)data errors:(NSArray<NSDKMarketDataResponseResultError *> *)errors __attribute__((swift_name("init(data:errors:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKMarketDataResponseResultCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSDKMarketDataResponseResultEntity *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSDKMarketDataResponseResultError *> *)component2 __attribute__((swift_name("component2()")));
- (NSDKMarketDataResponseResult *)doCopyData:(NSArray<NSDKMarketDataResponseResultEntity *> *)data errors:(NSArray<NSDKMarketDataResponseResultError *> *)errors __attribute__((swift_name("doCopy(data:errors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSDKMarketDataResponseResultEntity *> *data __attribute__((swift_name("data")));
@property (readonly) NSArray<NSDKMarketDataResponseResultError *> *errors __attribute__((swift_name("errors")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataResponseResult.Companion")))
@interface NSDKMarketDataResponseResultCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKMarketDataResponseResultCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataResponseResultEntity")))
@interface NSDKMarketDataResponseResultEntity : NSDKBase
- (instancetype)initWithKey:(NSDKMarketDataInstrumentKey *)key value:(NSDKMarketDataEntity *)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKMarketDataResponseResultEntityCompanion *companion __attribute__((swift_name("companion")));
- (NSDKMarketDataInstrumentKey *)component1 __attribute__((swift_name("component1()")));
- (NSDKMarketDataEntity *)component2 __attribute__((swift_name("component2()")));
- (NSDKMarketDataResponseResultEntity *)doCopyKey:(NSDKMarketDataInstrumentKey *)key value:(NSDKMarketDataEntity *)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKMarketDataInstrumentKey *key __attribute__((swift_name("key")));
@property (readonly) NSDKMarketDataEntity *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataResponseResultEntity.Companion")))
@interface NSDKMarketDataResponseResultEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKMarketDataResponseResultEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataResponseResultError")))
@interface NSDKMarketDataResponseResultError : NSDKBase
- (instancetype)initWithKey:(NSDKMarketDataInstrumentKey *)key type:(NSString *)type __attribute__((swift_name("init(key:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKMarketDataResponseResultErrorCompanion *companion __attribute__((swift_name("companion")));
- (NSDKMarketDataInstrumentKey *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDKMarketDataResponseResultError *)doCopyKey:(NSDKMarketDataInstrumentKey *)key type:(NSString *)type __attribute__((swift_name("doCopy(key:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKMarketDataInstrumentKey *key __attribute__((swift_name("key")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataResponseResultError.Companion")))
@interface NSDKMarketDataResponseResultErrorCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKMarketDataResponseResultErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataSearchParameters")))
@interface NSDKMarketDataSearchParameters : NSDKBase
- (instancetype)initWithExchange:(NSString *)exchange classCode:(NSString *)classCode ticker:(NSString *)ticker __attribute__((swift_name("init(exchange:classCode:ticker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKMarketDataSearchParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSDKMarketDataSearchParameters *)doCopyExchange:(NSString *)exchange classCode:(NSString *)classCode ticker:(NSString *)ticker __attribute__((swift_name("doCopy(exchange:classCode:ticker:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *classCode __attribute__((swift_name("classCode")));
@property (readonly) NSString *exchange __attribute__((swift_name("exchange")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketDataSearchParameters.Companion")))
@interface NSDKMarketDataSearchParametersCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKMarketDataSearchParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewtonApiClient")))
@interface NSDKNewtonApiClient : NSDKBase
- (instancetype)initWithApiUrl:(NSString *)apiUrl config:(NSDKNewtonApiClientConfig * _Nullable)config __attribute__((swift_name("init(apiUrl:config:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithApiUrl:(NSString *)apiUrl httpClient:(NSDKKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(apiUrl:httpClient:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deletePath:(NSString *)path params:(NSDictionary<NSString *, NSString *> * _Nullable)params completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(path:params:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPath:(NSString *)path params:(NSDictionary<NSString *, NSString *> * _Nullable)params completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(path:params:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)patchPath:(NSString *)path params:(id _Nullable)params completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("patch(path:params:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)postPath:(NSString *)path params:(id _Nullable)params completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("post(path:params:completionHandler:)")));
@property (readonly) NSString *apiUrl __attribute__((swift_name("apiUrl")));
@property (readonly) NSDKKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewtonApiClientConfig")))
@interface NSDKNewtonApiClientConfig : NSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NSDKNewtonApiClientConfigCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property int32_t maxRetryAttempts __attribute__((swift_name("maxRetryAttempts")));
@property int64_t timeout __attribute__((swift_name("timeout")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewtonApiClientConfig.Companion")))
@interface NSDKNewtonApiClientConfigCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKNewtonApiClientConfigCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_RETRY_ATTEMPTS __attribute__((swift_name("MAX_RETRY_ATTEMPTS")));
@property (readonly) int64_t TIMEOUT __attribute__((swift_name("TIMEOUT")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface NSDKKotlinThrowable : NSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (NSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface NSDKKotlinException : NSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewtonApiError")))
@interface NSDKNewtonApiError : NSDKKotlinException
- (instancetype)initWithCode:(NSDKNewtonApiErrorCode *)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSDKNewtonApiErrorCode *code __attribute__((swift_name("code")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewtonApiErrorCode")))
@interface NSDKNewtonApiErrorCode : NSDKKotlinEnum<NSDKNewtonApiErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NSDKNewtonApiErrorCode *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) NSDKNewtonApiErrorCode *badRequest __attribute__((swift_name("badRequest")));
@property (class, readonly) NSDKNewtonApiErrorCode *forbidden __attribute__((swift_name("forbidden")));
@property (class, readonly) NSDKNewtonApiErrorCode *internalError __attribute__((swift_name("internalError")));
@property (class, readonly) NSDKNewtonApiErrorCode *unexpected __attribute__((swift_name("unexpected")));
+ (NSDKKotlinArray<NSDKNewtonApiErrorCode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("CatalogRepository")))
@protocol NSDKCatalogRepository
@required

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCatalogInstrumentId:(int64_t)id completionHandler:(void (^)(NSDKCatalogInstrumentEntity * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCatalogInstrument(id:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCatalogInstrumentUseCase")))
@interface NSDKGetCatalogInstrumentUseCase : NSDKBase
- (instancetype)initWithRepository:(id<NSDKCatalogRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeInstrumentId:(int64_t)instrumentId completionHandler:(void (^)(NSDKCatalogInstrumentEntity * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(instrumentId:completionHandler:)")));
@end;

__attribute__((swift_name("CatalogInstrumentEntity")))
@interface NSDKCatalogInstrumentEntity : NSDKBase
@property (class, readonly, getter=companion) NSDKCatalogInstrumentEntityCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL availableForQualifiedOnly __attribute__((swift_name("availableForQualifiedOnly")));
@property (readonly) NSString *classcode __attribute__((swift_name("classcode")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *exchange __attribute__((swift_name("exchange")));
@property (readonly) NSDKCurrency * _Nullable faceUnit __attribute__((swift_name("faceUnit")));
@property (readonly) NSDKDouble * _Nullable faceValue __attribute__((swift_name("faceValue")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isin __attribute__((swift_name("isin")));
@property (readonly) NSString * _Nullable issuerDescription __attribute__((swift_name("issuerDescription")));
@property (readonly) NSDKLong * _Nullable issuerId __attribute__((swift_name("issuerId")));
@property (readonly) NSString * _Nullable issuerName __attribute__((swift_name("issuerName")));
@property (readonly) NSString * _Nullable issuerWebsiteUrl __attribute__((swift_name("issuerWebsiteUrl")));
@property (readonly) NSString * _Nullable logoSrc __attribute__((swift_name("logoSrc")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable sector __attribute__((swift_name("sector")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetCurrency __attribute__((swift_name("targetCurrency")));
@property (readonly) NSString * _Nullable targetCurrencySymbol __attribute__((swift_name("targetCurrencySymbol")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetFaceUnit __attribute__((swift_name("targetFaceUnit")));
@property (readonly) NSString * _Nullable targetFaceUnitCurrencySymbol __attribute__((swift_name("targetFaceUnitCurrencySymbol")));
@property (readonly) NSDKDouble * _Nullable taxAmount __attribute__((swift_name("taxAmount")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@property (readonly) BOOL tradeable __attribute__((swift_name("tradeable")));
@property (readonly) NSDKInstrumentType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BondAdditionalPublicOfferEntity")))
@interface NSDKBondAdditionalPublicOfferEntity : NSDKCatalogInstrumentEntity
- (instancetype)initWithId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit primaryInstrumentId:(int64_t)primaryInstrumentId openingAt:(int64_t)openingAt closingAt:(int64_t)closingAt actualClosedAt:(NSDKLong * _Nullable)actualClosedAt title:(NSString *)title issueSize:(NSString * _Nullable)issueSize termsOfPlacement:(NSString * _Nullable)termsOfPlacement pricePerItem:(double)pricePerItem yield:(double)yield yieldToOffer:(NSDKDouble * _Nullable)yieldToOffer minBuyLotCount:(int64_t)minBuyLotCount __attribute__((swift_name("init(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:primaryInstrumentId:openingAt:closingAt:actualClosedAt:title:issueSize:termsOfPlacement:pricePerItem:yield:yieldToOffer:minBuyLotCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKBondAdditionalPublicOfferEntityCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKCurrency * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSDKCurrency *)component11 __attribute__((swift_name("component11()")));
- (NSDKLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (BOOL)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSDKInstrumentType *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component23 __attribute__((swift_name("component23()")));
- (int64_t)component24 __attribute__((swift_name("component24()")));
- (int64_t)component25 __attribute__((swift_name("component25()")));
- (int64_t)component26 __attribute__((swift_name("component26()")));
- (NSDKLong * _Nullable)component27 __attribute__((swift_name("component27()")));
- (NSString *)component28 __attribute__((swift_name("component28()")));
- (NSString * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component30 __attribute__((swift_name("component30()")));
- (double)component31 __attribute__((swift_name("component31()")));
- (double)component32 __attribute__((swift_name("component32()")));
- (NSDKDouble * _Nullable)component33 __attribute__((swift_name("component33()")));
- (int64_t)component34 __attribute__((swift_name("component34()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKBondAdditionalPublicOfferEntity *)doCopyId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit primaryInstrumentId:(int64_t)primaryInstrumentId openingAt:(int64_t)openingAt closingAt:(int64_t)closingAt actualClosedAt:(NSDKLong * _Nullable)actualClosedAt title:(NSString *)title issueSize:(NSString * _Nullable)issueSize termsOfPlacement:(NSString * _Nullable)termsOfPlacement pricePerItem:(double)pricePerItem yield:(double)yield yieldToOffer:(NSDKDouble * _Nullable)yieldToOffer minBuyLotCount:(int64_t)minBuyLotCount __attribute__((swift_name("doCopy(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:primaryInstrumentId:openingAt:closingAt:actualClosedAt:title:issueSize:termsOfPlacement:pricePerItem:yield:yieldToOffer:minBuyLotCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKLong * _Nullable actualClosedAt __attribute__((swift_name("actualClosedAt")));
@property (readonly) BOOL availableForQualifiedOnly __attribute__((swift_name("availableForQualifiedOnly")));
@property (readonly) NSString *classcode __attribute__((swift_name("classcode")));
@property (readonly) int64_t closingAt __attribute__((swift_name("closingAt")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *exchange __attribute__((swift_name("exchange")));
@property (readonly) NSDKCurrency * _Nullable faceUnit __attribute__((swift_name("faceUnit")));
@property (readonly) NSDKDouble * _Nullable faceValue __attribute__((swift_name("faceValue")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isin __attribute__((swift_name("isin")));
@property (readonly) NSString * _Nullable issueSize __attribute__((swift_name("issueSize")));
@property (readonly) NSString * _Nullable issuerDescription __attribute__((swift_name("issuerDescription")));
@property (readonly) NSDKLong * _Nullable issuerId __attribute__((swift_name("issuerId")));
@property (readonly) NSString * _Nullable issuerName __attribute__((swift_name("issuerName")));
@property (readonly) NSString * _Nullable issuerWebsiteUrl __attribute__((swift_name("issuerWebsiteUrl")));
@property (readonly) NSString * _Nullable logoSrc __attribute__((swift_name("logoSrc")));
@property (readonly) int64_t minBuyLotCount __attribute__((swift_name("minBuyLotCount")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) int64_t openingAt __attribute__((swift_name("openingAt")));
@property (readonly) double pricePerItem __attribute__((swift_name("pricePerItem")));
@property (readonly) int64_t primaryInstrumentId __attribute__((swift_name("primaryInstrumentId")));
@property (readonly) NSString * _Nullable sector __attribute__((swift_name("sector")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetCurrency __attribute__((swift_name("targetCurrency")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetFaceUnit __attribute__((swift_name("targetFaceUnit")));
@property (readonly) NSDKDouble * _Nullable taxAmount __attribute__((swift_name("taxAmount")));
@property (readonly) NSString * _Nullable termsOfPlacement __attribute__((swift_name("termsOfPlacement")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) BOOL tradeable __attribute__((swift_name("tradeable")));
@property (readonly) NSDKInstrumentType *type __attribute__((swift_name("type")));
@property (readonly) double yield __attribute__((swift_name("yield")));
@property (readonly) NSDKDouble * _Nullable yieldToOffer __attribute__((swift_name("yieldToOffer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BondAdditionalPublicOfferEntity.Companion")))
@interface NSDKBondAdditionalPublicOfferEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKBondAdditionalPublicOfferEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BondEntity")))
@interface NSDKBondEntity : NSDKCatalogInstrumentEntity
- (instancetype)initWithId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit accruedInt:(NSDKDouble * _Nullable)accruedInt couponPercent:(NSDKFloat * _Nullable)couponPercent couponValue:(NSDKDouble * _Nullable)couponValue couponPeriod:(NSDKInt * _Nullable)couponPeriod nextCoupon:(NSString * _Nullable)nextCoupon buybackPrice:(NSDKDouble * _Nullable)buybackPrice buybackDate:(NSString * _Nullable)buybackDate offerDate:(NSString * _Nullable)offerDate maturityDate:(NSString * _Nullable)maturityDate earlyRepayment:(NSDKBoolean * _Nullable)earlyRepayment daysToRedemption:(int32_t)daysToRedemption issueDate:(NSString * _Nullable)issueDate couponType:(NSDKCouponType * _Nullable)couponType series:(NSString * _Nullable)series __attribute__((swift_name("init(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:accruedInt:couponPercent:couponValue:couponPeriod:nextCoupon:buybackPrice:buybackDate:offerDate:maturityDate:earlyRepayment:daysToRedemption:issueDate:couponType:series:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKBondEntityCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKCurrency * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSDKCurrency *)component11 __attribute__((swift_name("component11()")));
- (NSDKLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (BOOL)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSDKInstrumentType *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSDKDouble * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSDKFloat * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSDKDouble * _Nullable)component26 __attribute__((swift_name("component26()")));
- (NSDKInt * _Nullable)component27 __attribute__((swift_name("component27()")));
- (NSString * _Nullable)component28 __attribute__((swift_name("component28()")));
- (NSDKDouble * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component30 __attribute__((swift_name("component30()")));
- (NSString * _Nullable)component31 __attribute__((swift_name("component31()")));
- (NSString * _Nullable)component32 __attribute__((swift_name("component32()")));
- (NSDKBoolean * _Nullable)component33 __attribute__((swift_name("component33()")));
- (int32_t)component34 __attribute__((swift_name("component34()")));
- (NSString * _Nullable)component35 __attribute__((swift_name("component35()")));
- (NSDKCouponType * _Nullable)component36 __attribute__((swift_name("component36()")));
- (NSString * _Nullable)component37 __attribute__((swift_name("component37()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKBondEntity *)doCopyId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit accruedInt:(NSDKDouble * _Nullable)accruedInt couponPercent:(NSDKFloat * _Nullable)couponPercent couponValue:(NSDKDouble * _Nullable)couponValue couponPeriod:(NSDKInt * _Nullable)couponPeriod nextCoupon:(NSString * _Nullable)nextCoupon buybackPrice:(NSDKDouble * _Nullable)buybackPrice buybackDate:(NSString * _Nullable)buybackDate offerDate:(NSString * _Nullable)offerDate maturityDate:(NSString * _Nullable)maturityDate earlyRepayment:(NSDKBoolean * _Nullable)earlyRepayment daysToRedemption:(int32_t)daysToRedemption issueDate:(NSString * _Nullable)issueDate couponType:(NSDKCouponType * _Nullable)couponType series:(NSString * _Nullable)series __attribute__((swift_name("doCopy(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:accruedInt:couponPercent:couponValue:couponPeriod:nextCoupon:buybackPrice:buybackDate:offerDate:maturityDate:earlyRepayment:daysToRedemption:issueDate:couponType:series:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKDouble * _Nullable accruedInt __attribute__((swift_name("accruedInt")));
@property (readonly) BOOL availableForQualifiedOnly __attribute__((swift_name("availableForQualifiedOnly")));
@property (readonly) NSString * _Nullable buybackDate __attribute__((swift_name("buybackDate")));
@property (readonly) NSDKDouble * _Nullable buybackPrice __attribute__((swift_name("buybackPrice")));
@property (readonly) NSString *classcode __attribute__((swift_name("classcode")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSDKFloat * _Nullable couponPercent __attribute__((swift_name("couponPercent")));
@property (readonly) NSDKInt * _Nullable couponPeriod __attribute__((swift_name("couponPeriod")));
@property (readonly) NSDKCouponType * _Nullable couponType __attribute__((swift_name("couponType")));
@property (readonly) NSDKDouble * _Nullable couponValue __attribute__((swift_name("couponValue")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) int32_t daysToRedemption __attribute__((swift_name("daysToRedemption")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSDKBoolean * _Nullable earlyRepayment __attribute__((swift_name("earlyRepayment")));
@property (readonly) NSString *exchange __attribute__((swift_name("exchange")));
@property (readonly) NSDKCurrency * _Nullable faceUnit __attribute__((swift_name("faceUnit")));
@property (readonly) NSDKDouble * _Nullable faceValue __attribute__((swift_name("faceValue")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isin __attribute__((swift_name("isin")));
@property (readonly) NSString * _Nullable issueDate __attribute__((swift_name("issueDate")));
@property (readonly) NSString * _Nullable issuerDescription __attribute__((swift_name("issuerDescription")));
@property (readonly) NSDKLong * _Nullable issuerId __attribute__((swift_name("issuerId")));
@property (readonly) NSString * _Nullable issuerName __attribute__((swift_name("issuerName")));
@property (readonly) NSString * _Nullable issuerWebsiteUrl __attribute__((swift_name("issuerWebsiteUrl")));
@property (readonly) NSString * _Nullable logoSrc __attribute__((swift_name("logoSrc")));
@property (readonly) NSString * _Nullable maturityDate __attribute__((swift_name("maturityDate")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable nextCoupon __attribute__((swift_name("nextCoupon")));
@property (readonly) NSString * _Nullable offerDate __attribute__((swift_name("offerDate")));
@property (readonly) NSString * _Nullable sector __attribute__((swift_name("sector")));
@property (readonly) NSString * _Nullable series __attribute__((swift_name("series")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetCurrency __attribute__((swift_name("targetCurrency")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetFaceUnit __attribute__((swift_name("targetFaceUnit")));
@property (readonly) NSDKDouble * _Nullable taxAmount __attribute__((swift_name("taxAmount")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@property (readonly) BOOL tradeable __attribute__((swift_name("tradeable")));
@property (readonly) NSDKInstrumentType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BondEntity.Companion")))
@interface NSDKBondEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKBondEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogCurrencyInfo")))
@interface NSDKCatalogCurrencyInfo : NSDKBase
- (instancetype)initWithCode:(NSString *)code attributes:(NSArray<NSDKCatalogInstrumentAttribute *> * _Nullable)attributes __attribute__((swift_name("init(code:attributes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKCatalogCurrencyInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSDKCatalogInstrumentAttribute *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDKCatalogCurrencyInfo *)doCopyCode:(NSString *)code attributes:(NSArray<NSDKCatalogInstrumentAttribute *> * _Nullable)attributes __attribute__((swift_name("doCopy(code:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSDKCatalogInstrumentAttribute *> * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogCurrencyInfo.Companion")))
@interface NSDKCatalogCurrencyInfoCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCatalogCurrencyInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogInstrumentAttribute")))
@interface NSDKCatalogInstrumentAttribute : NSDKBase
- (instancetype)initWithKey:(NSString *)key value:(NSString *)value type:(NSString *)type __attribute__((swift_name("init(key:value:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKCatalogInstrumentAttributeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSDKCatalogInstrumentAttribute *)doCopyKey:(NSString *)key value:(NSString *)value type:(NSString *)type __attribute__((swift_name("doCopy(key:value:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogInstrumentAttribute.Companion")))
@interface NSDKCatalogInstrumentAttributeCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCatalogInstrumentAttributeCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *ATTRIBUTE_KEY_SYMBOL __attribute__((swift_name("ATTRIBUTE_KEY_SYMBOL")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogInstrumentEntity.Companion")))
@interface NSDKCatalogInstrumentEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCatalogInstrumentEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogInstrumentEntitySerializer")))
@interface NSDKCatalogInstrumentEntitySerializer : NSDKBase <NSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)catalogInstrumentEntitySerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCatalogInstrumentEntitySerializer *shared __attribute__((swift_name("shared")));
- (NSDKCatalogInstrumentEntity *)deserializeDecoder:(id<NSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<NSDKKotlinx_serialization_coreEncoder>)encoder value:(NSDKCatalogInstrumentEntity *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyEntity")))
@interface NSDKCurrencyEntity : NSDKCatalogInstrumentEntity
- (instancetype)initWithId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit __attribute__((swift_name("init(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKCurrencyEntityCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKCurrency * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSDKCurrency *)component11 __attribute__((swift_name("component11()")));
- (NSDKLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (BOOL)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSDKInstrumentType *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKCurrencyEntity *)doCopyId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit __attribute__((swift_name("doCopy(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL availableForQualifiedOnly __attribute__((swift_name("availableForQualifiedOnly")));
@property (readonly) NSString *classcode __attribute__((swift_name("classcode")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *exchange __attribute__((swift_name("exchange")));
@property (readonly) NSDKCurrency * _Nullable faceUnit __attribute__((swift_name("faceUnit")));
@property (readonly) NSDKDouble * _Nullable faceValue __attribute__((swift_name("faceValue")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isin __attribute__((swift_name("isin")));
@property (readonly) NSString * _Nullable issuerDescription __attribute__((swift_name("issuerDescription")));
@property (readonly) NSDKLong * _Nullable issuerId __attribute__((swift_name("issuerId")));
@property (readonly) NSString * _Nullable issuerName __attribute__((swift_name("issuerName")));
@property (readonly) NSString * _Nullable issuerWebsiteUrl __attribute__((swift_name("issuerWebsiteUrl")));
@property (readonly) NSString * _Nullable logoSrc __attribute__((swift_name("logoSrc")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable sector __attribute__((swift_name("sector")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetCurrency __attribute__((swift_name("targetCurrency")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetFaceUnit __attribute__((swift_name("targetFaceUnit")));
@property (readonly) NSDKDouble * _Nullable taxAmount __attribute__((swift_name("taxAmount")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@property (readonly) BOOL tradeable __attribute__((swift_name("tradeable")));
@property (readonly) NSDKInstrumentType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyEntity.Companion")))
@interface NSDKCurrencyEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCurrencyEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FundEntity")))
@interface NSDKFundEntity : NSDKCatalogInstrumentEntity
- (instancetype)initWithId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit __attribute__((swift_name("init(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKFundEntityCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKCurrency * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSDKCurrency *)component11 __attribute__((swift_name("component11()")));
- (NSDKLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (BOOL)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSDKInstrumentType *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKFundEntity *)doCopyId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit __attribute__((swift_name("doCopy(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL availableForQualifiedOnly __attribute__((swift_name("availableForQualifiedOnly")));
@property (readonly) NSString *classcode __attribute__((swift_name("classcode")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *exchange __attribute__((swift_name("exchange")));
@property (readonly) NSDKCurrency * _Nullable faceUnit __attribute__((swift_name("faceUnit")));
@property (readonly) NSDKDouble * _Nullable faceValue __attribute__((swift_name("faceValue")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isin __attribute__((swift_name("isin")));
@property (readonly) NSString * _Nullable issuerDescription __attribute__((swift_name("issuerDescription")));
@property (readonly) NSDKLong * _Nullable issuerId __attribute__((swift_name("issuerId")));
@property (readonly) NSString * _Nullable issuerName __attribute__((swift_name("issuerName")));
@property (readonly) NSString * _Nullable issuerWebsiteUrl __attribute__((swift_name("issuerWebsiteUrl")));
@property (readonly) NSString * _Nullable logoSrc __attribute__((swift_name("logoSrc")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable sector __attribute__((swift_name("sector")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetCurrency __attribute__((swift_name("targetCurrency")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetFaceUnit __attribute__((swift_name("targetFaceUnit")));
@property (readonly) NSDKDouble * _Nullable taxAmount __attribute__((swift_name("taxAmount")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@property (readonly) BOOL tradeable __attribute__((swift_name("tradeable")));
@property (readonly) NSDKInstrumentType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FundEntity.Companion")))
@interface NSDKFundEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKFundEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IpoEntity")))
@interface NSDKIpoEntity : NSDKCatalogInstrumentEntity
- (instancetype)initWithId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit openingAt:(int64_t)openingAt closingAt:(int64_t)closingAt allocationDate:(NSString *)allocationDate minSum:(double)minSum referencePrice:(double)referencePrice __attribute__((swift_name("init(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:openingAt:closingAt:allocationDate:minSum:referencePrice:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKIpoEntityCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKCurrency * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSDKCurrency *)component11 __attribute__((swift_name("component11()")));
- (NSDKLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (BOOL)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSDKInstrumentType *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component23 __attribute__((swift_name("component23()")));
- (int64_t)component24 __attribute__((swift_name("component24()")));
- (int64_t)component25 __attribute__((swift_name("component25()")));
- (NSString *)component26 __attribute__((swift_name("component26()")));
- (double)component27 __attribute__((swift_name("component27()")));
- (double)component28 __attribute__((swift_name("component28()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKIpoEntity *)doCopyId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit openingAt:(int64_t)openingAt closingAt:(int64_t)closingAt allocationDate:(NSString *)allocationDate minSum:(double)minSum referencePrice:(double)referencePrice __attribute__((swift_name("doCopy(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:openingAt:closingAt:allocationDate:minSum:referencePrice:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *allocationDate __attribute__((swift_name("allocationDate")));
@property (readonly) BOOL availableForQualifiedOnly __attribute__((swift_name("availableForQualifiedOnly")));
@property (readonly) NSString *classcode __attribute__((swift_name("classcode")));
@property (readonly) int64_t closingAt __attribute__((swift_name("closingAt")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *exchange __attribute__((swift_name("exchange")));
@property (readonly) NSDKCurrency * _Nullable faceUnit __attribute__((swift_name("faceUnit")));
@property (readonly) NSDKDouble * _Nullable faceValue __attribute__((swift_name("faceValue")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isin __attribute__((swift_name("isin")));
@property (readonly) NSString * _Nullable issuerDescription __attribute__((swift_name("issuerDescription")));
@property (readonly) NSDKLong * _Nullable issuerId __attribute__((swift_name("issuerId")));
@property (readonly) NSString * _Nullable issuerName __attribute__((swift_name("issuerName")));
@property (readonly) NSString * _Nullable issuerWebsiteUrl __attribute__((swift_name("issuerWebsiteUrl")));
@property (readonly) NSString * _Nullable logoSrc __attribute__((swift_name("logoSrc")));
@property (readonly) double minSum __attribute__((swift_name("minSum")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) int64_t openingAt __attribute__((swift_name("openingAt")));
@property (readonly) double referencePrice __attribute__((swift_name("referencePrice")));
@property (readonly) NSString * _Nullable sector __attribute__((swift_name("sector")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetCurrency __attribute__((swift_name("targetCurrency")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetFaceUnit __attribute__((swift_name("targetFaceUnit")));
@property (readonly) NSDKDouble * _Nullable taxAmount __attribute__((swift_name("taxAmount")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@property (readonly) BOOL tradeable __attribute__((swift_name("tradeable")));
@property (readonly) NSDKInstrumentType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IpoEntity.Companion")))
@interface NSDKIpoEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKIpoEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StockEntity")))
@interface NSDKStockEntity : NSDKCatalogInstrumentEntity
- (instancetype)initWithId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit lastPrice:(NSDKDouble * _Nullable)lastPrice __attribute__((swift_name("init(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:lastPrice:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKStockEntityCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDKCurrency * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSDKCurrency *)component11 __attribute__((swift_name("component11()")));
- (NSDKLong * _Nullable)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (BOOL)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSDKInstrumentType *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSDKCatalogCurrencyInfo * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSDKDouble * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDKDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSDKStockEntity *)doCopyId:(int64_t)id type:(NSDKInstrumentType *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description ticker:(NSString *)ticker isin:(NSString * _Nullable)isin logoSrc:(NSString * _Nullable)logoSrc faceValue:(NSDKDouble * _Nullable)faceValue taxAmount:(NSDKDouble * _Nullable)taxAmount faceUnit:(NSDKCurrency * _Nullable)faceUnit currency:(NSDKCurrency *)currency issuerId:(NSDKLong * _Nullable)issuerId tradeable:(BOOL)tradeable classcode:(NSString *)classcode exchange:(NSString *)exchange availableForQualifiedOnly:(BOOL)availableForQualifiedOnly sector:(NSString * _Nullable)sector country:(NSString * _Nullable)country issuerName:(NSString * _Nullable)issuerName issuerDescription:(NSString * _Nullable)issuerDescription issuerWebsiteUrl:(NSString * _Nullable)issuerWebsiteUrl targetCurrency:(NSDKCatalogCurrencyInfo * _Nullable)targetCurrency targetFaceUnit:(NSDKCatalogCurrencyInfo * _Nullable)targetFaceUnit lastPrice:(NSDKDouble * _Nullable)lastPrice __attribute__((swift_name("doCopy(id:type:name:description:ticker:isin:logoSrc:faceValue:taxAmount:faceUnit:currency:issuerId:tradeable:classcode:exchange:availableForQualifiedOnly:sector:country:issuerName:issuerDescription:issuerWebsiteUrl:targetCurrency:targetFaceUnit:lastPrice:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL availableForQualifiedOnly __attribute__((swift_name("availableForQualifiedOnly")));
@property (readonly) NSString *classcode __attribute__((swift_name("classcode")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *exchange __attribute__((swift_name("exchange")));
@property (readonly) NSDKCurrency * _Nullable faceUnit __attribute__((swift_name("faceUnit")));
@property (readonly) NSDKDouble * _Nullable faceValue __attribute__((swift_name("faceValue")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isin __attribute__((swift_name("isin")));
@property (readonly) NSString * _Nullable issuerDescription __attribute__((swift_name("issuerDescription")));
@property (readonly) NSDKLong * _Nullable issuerId __attribute__((swift_name("issuerId")));
@property (readonly) NSString * _Nullable issuerName __attribute__((swift_name("issuerName")));
@property (readonly) NSString * _Nullable issuerWebsiteUrl __attribute__((swift_name("issuerWebsiteUrl")));
@property (readonly) NSDKDouble * _Nullable lastPrice __attribute__((swift_name("lastPrice")));
@property (readonly) NSString * _Nullable logoSrc __attribute__((swift_name("logoSrc")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable sector __attribute__((swift_name("sector")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetCurrency __attribute__((swift_name("targetCurrency")));
@property (readonly) NSDKCatalogCurrencyInfo * _Nullable targetFaceUnit __attribute__((swift_name("targetFaceUnit")));
@property (readonly) NSDKDouble * _Nullable taxAmount __attribute__((swift_name("taxAmount")));
@property (readonly) NSString *ticker __attribute__((swift_name("ticker")));
@property (readonly) BOOL tradeable __attribute__((swift_name("tradeable")));
@property (readonly) NSDKInstrumentType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StockEntity.Companion")))
@interface NSDKStockEntityCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKStockEntityCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogRepositoryImpl")))
@interface NSDKCatalogRepositoryImpl : NSDKBase <NSDKCatalogRepository>
- (instancetype)initWithApiClient:(NSDKNewtonApiClient *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKCatalogRepositoryImplCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of NewtonApiError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCatalogInstrumentId:(int64_t)id completionHandler:(void (^)(NSDKCatalogInstrumentEntity * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCatalogInstrument(id:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CatalogRepositoryImpl.Companion")))
@interface NSDKCatalogRepositoryImplCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCatalogRepositoryImplCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountStatus")))
@interface NSDKAccountStatus : NSDKKotlinEnum<NSDKAccountStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKAccountStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKAccountStatus *theNew __attribute__((swift_name("theNew")));
@property (class, readonly) NSDKAccountStatus *prepare __attribute__((swift_name("prepare")));
@property (class, readonly) NSDKAccountStatus *signedDocuments __attribute__((swift_name("signedDocuments")));
@property (class, readonly) NSDKAccountStatus *conditionallyActive __attribute__((swift_name("conditionallyActive")));
@property (class, readonly) NSDKAccountStatus *active __attribute__((swift_name("active")));
@property (class, readonly) NSDKAccountStatus *blocked __attribute__((swift_name("blocked")));
@property (class, readonly) NSDKAccountStatus *closed __attribute__((swift_name("closed")));
@property (class, readonly) NSDKAccountStatus *reserved __attribute__((swift_name("reserved")));
@property (class, readonly) NSDKAccountStatus *registration __attribute__((swift_name("registration")));
@property (class, readonly) NSDKAccountStatus *restricted __attribute__((swift_name("restricted")));
@property (class, readonly) NSDKAccountStatus *closing __attribute__((swift_name("closing")));
+ (NSDKKotlinArray<NSDKAccountStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountStatus.Companion")))
@interface NSDKAccountStatusCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKAccountStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountType")))
@interface NSDKAccountType : NSDKKotlinEnum<NSDKAccountType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKAccountTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKAccountType *demo __attribute__((swift_name("demo")));
@property (class, readonly) NSDKAccountType *real __attribute__((swift_name("real")));
+ (NSDKKotlinArray<NSDKAccountType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountType.Companion")))
@interface NSDKAccountTypeCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKAccountTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attribute")))
@interface NSDKAttribute : NSDKBase
- (instancetype)initWithKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKAttributeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDKAttribute *)doCopyKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attribute.Companion")))
@interface NSDKAttributeCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKAttributeCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CouponType")))
@interface NSDKCouponType : NSDKKotlinEnum<NSDKCouponType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKCouponTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKCouponType *constant __attribute__((swift_name("constant")));
@property (class, readonly) NSDKCouponType *variable __attribute__((swift_name("variable")));
+ (NSDKKotlinArray<NSDKCouponType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CouponType.Companion")))
@interface NSDKCouponTypeCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCouponTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency")))
@interface NSDKCurrency : NSDKKotlinEnum<NSDKCurrency *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKCurrencyCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKCurrency *rub __attribute__((swift_name("rub")));
@property (class, readonly) NSDKCurrency *usd __attribute__((swift_name("usd")));
@property (class, readonly) NSDKCurrency *eur __attribute__((swift_name("eur")));
@property (class, readonly) NSDKCurrency *gbp __attribute__((swift_name("gbp")));
@property (class, readonly) NSDKCurrency *cny __attribute__((swift_name("cny")));
@property (class, readonly) NSDKCurrency *chf __attribute__((swift_name("chf")));
@property (class, readonly) NSDKCurrency *cad __attribute__((swift_name("cad")));
@property (class, readonly) NSDKCurrency *ils __attribute__((swift_name("ils")));
@property (class, readonly) NSDKCurrency *zar __attribute__((swift_name("zar")));
@property (class, readonly) NSDKCurrency *kzt __attribute__((swift_name("kzt")));
@property (class, readonly) NSDKCurrency *hkd __attribute__((swift_name("hkd")));
+ (NSDKKotlinArray<NSDKCurrency *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency.Companion")))
@interface NSDKCurrencyCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCurrencyCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyValue")))
@interface NSDKCurrencyValue : NSDKBase
- (instancetype)initWithCurrency:(NSDKCurrency *)currency value:(double)value __attribute__((swift_name("init(currency:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKCurrencyValueCompanion *companion __attribute__((swift_name("companion")));
- (NSDKCurrency *)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (NSDKCurrencyValue *)doCopyCurrency:(NSDKCurrency *)currency value:(double)value __attribute__((swift_name("doCopy(currency:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKCurrency *currency __attribute__((swift_name("currency")));
@property (readonly) double value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyValue.Companion")))
@interface NSDKCurrencyValueCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKCurrencyValueCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstrumentType")))
@interface NSDKInstrumentType : NSDKKotlinEnum<NSDKInstrumentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKInstrumentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKInstrumentType *commonStock __attribute__((swift_name("commonStock")));
@property (class, readonly) NSDKInstrumentType *prefStock __attribute__((swift_name("prefStock")));
@property (class, readonly) NSDKInstrumentType *eurBond __attribute__((swift_name("eurBond")));
@property (class, readonly) NSDKInstrumentType *govBond __attribute__((swift_name("govBond")));
@property (class, readonly) NSDKInstrumentType *regBond __attribute__((swift_name("regBond")));
@property (class, readonly) NSDKInstrumentType *corpBond __attribute__((swift_name("corpBond")));
@property (class, readonly) NSDKInstrumentType *dr __attribute__((swift_name("dr")));
@property (class, readonly) NSDKInstrumentType *etf __attribute__((swift_name("etf")));
@property (class, readonly) NSDKInstrumentType *ppif __attribute__((swift_name("ppif")));
@property (class, readonly) NSDKInstrumentType *currency __attribute__((swift_name("currency")));
@property (class, readonly) NSDKInstrumentType *bondAdditionalPublicOffer __attribute__((swift_name("bondAdditionalPublicOffer")));
@property (class, readonly) NSDKInstrumentType *ipoStock __attribute__((swift_name("ipoStock")));
@property (class, readonly) NSDKInstrumentType *ipoBond __attribute__((swift_name("ipoBond")));
+ (NSDKKotlinArray<NSDKInstrumentType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstrumentType.Companion")))
@interface NSDKInstrumentTypeCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKInstrumentTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationStatus")))
@interface NSDKOperationStatus : NSDKKotlinEnum<NSDKOperationStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKOperationStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKOperationStatus *created __attribute__((swift_name("created")));
@property (class, readonly) NSDKOperationStatus *accepted __attribute__((swift_name("accepted")));
@property (class, readonly) NSDKOperationStatus *executing __attribute__((swift_name("executing")));
@property (class, readonly) NSDKOperationStatus *executed __attribute__((swift_name("executed")));
@property (class, readonly) NSDKOperationStatus *executedPartially __attribute__((swift_name("executedPartially")));
@property (class, readonly) NSDKOperationStatus *cancelling __attribute__((swift_name("cancelling")));
@property (class, readonly) NSDKOperationStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) NSDKOperationStatus *rejected __attribute__((swift_name("rejected")));
@property (class, readonly) NSDKOperationStatus *error __attribute__((swift_name("error")));
+ (NSDKKotlinArray<NSDKOperationStatus *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationStatus.Companion")))
@interface NSDKOperationStatusCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKOperationStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationType")))
@interface NSDKOperationType : NSDKKotlinEnum<NSDKOperationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKOperationTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKOperationType *buy __attribute__((swift_name("buy")));
@property (class, readonly) NSDKOperationType *sell __attribute__((swift_name("sell")));
@property (class, readonly) NSDKOperationType *refill __attribute__((swift_name("refill")));
@property (class, readonly) NSDKOperationType *withdrawal __attribute__((swift_name("withdrawal")));
+ (NSDKKotlinArray<NSDKOperationType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationType.Companion")))
@interface NSDKOperationTypeCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKOperationTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrderType")))
@interface NSDKOrderType : NSDKKotlinEnum<NSDKOrderType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKOrderTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKOrderType *limit __attribute__((swift_name("limit")));
@property (class, readonly) NSDKOrderType *market __attribute__((swift_name("market")));
@property (class, readonly) NSDKOrderType *direct __attribute__((swift_name("direct")));
+ (NSDKKotlinArray<NSDKOrderType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrderType.Companion")))
@interface NSDKOrderTypeCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKOrderTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewtonApiClientKt")))
@interface NSDKNewtonApiClientKt : NSDKBase
+ (NSDKNewtonApiClient *)NewtonApiClientApiUrl:(NSString *)apiUrl block:(void (^)(NSDKNewtonApiClientConfig *))block __attribute__((swift_name("NewtonApiClient(apiUrl:block:)")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface NSDKKotlinRuntimeException : NSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface NSDKKotlinIllegalStateException : NSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface NSDKKotlinCancellationException : NSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol NSDKKotlinx_serialization_coreEncoder
@required
- (id<NSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<NSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<NSDKKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<NSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<NSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) NSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol NSDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<NSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<NSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<NSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) NSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol NSDKKotlinx_serialization_coreDecoder
@required
- (id<NSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<NSDKKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (NSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<NSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<NSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) NSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface NSDKKotlinEnumCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface NSDKKotlinArray<T> : NSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(NSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<NSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol NSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<NSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol NSDKKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface NSDKKtor_client_coreHttpClient : NSDKBase <NSDKKotlinx_coroutines_coreCoroutineScope, NSDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<NSDKKtor_client_coreHttpClientEngine>)engine userConfig:(NSDKKtor_client_coreHttpClientConfig<NSDKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (NSDKKtor_client_coreHttpClient *)configBlock:(void (^)(NSDKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(NSDKKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(NSDKKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<NSDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<NSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) NSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<NSDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) NSDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) NSDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) NSDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) NSDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) NSDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol NSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<NSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<NSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<NSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) NSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface NSDKKotlinx_serialization_coreSerializersModule : NSDKBase
- (void)dumpToCollector:(id<NSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<NSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<NSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<NSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<NSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<NSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<NSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<NSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol NSDKKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface NSDKKotlinx_serialization_coreSerialKind : NSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol NSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<NSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<NSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<NSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<NSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) NSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface NSDKKotlinNothing : NSDKBase
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol NSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol NSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<NSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<NSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<NSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<NSDKKotlinCoroutineContext>)minusKeyKey:(id<NSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<NSDKKotlinCoroutineContext>)plusContext:(id<NSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol NSDKKtor_client_coreHttpClientEngine <NSDKKotlinx_coroutines_coreCoroutineScope, NSDKKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(NSDKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(NSDKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(NSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) NSDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) NSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<NSDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface NSDKKtor_client_coreHttpClientEngineConfig : NSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property NSDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) NSDKKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface NSDKKtor_client_coreHttpClientConfig<T> : NSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(NSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<NSDKKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(NSDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(NSDKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol NSDKKtor_httpHttpMessageBuilder
@required
@property (readonly) NSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface NSDKKtor_client_coreHttpRequestBuilder : NSDKBase <NSDKKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NSDKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (NSDKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<NSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<NSDKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<NSDKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (NSDKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(NSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (NSDKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(NSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(NSDKKtor_httpURLBuilder *, NSDKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<NSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<NSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property NSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSDKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface NSDKKtor_client_coreHttpClientCall : NSDKBase <NSDKKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) NSDKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<NSDKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(NSDKKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(id<NSDKKtor_utilsTypeInfo>)info completionHandler_:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<NSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) NSDKKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<NSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<NSDKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) NSDKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol NSDKKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol NSDKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(NSDKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(NSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(NSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(NSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(NSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(NSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(NSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(NSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<NSDKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol NSDKKotlinCoroutineContextElement <NSDKKotlinCoroutineContext>
@required
@property (readonly) id<NSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface NSDKKotlinAbstractCoroutineContextElement : NSDKBase <NSDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<NSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<NSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol NSDKKotlinContinuationInterceptor <NSDKKotlinCoroutineContextElement>
@required
- (id<NSDKKotlinContinuation>)interceptContinuationContinuation:(id<NSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<NSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface NSDKKotlinx_coroutines_coreCoroutineDispatcher : NSDKKotlinAbstractCoroutineContextElement <NSDKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<NSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<NSDKKotlinCoroutineContext>)context block:(id<NSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<NSDKKotlinCoroutineContext>)context block:(id<NSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<NSDKKotlinContinuation>)interceptContinuationContinuation:(id<NSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<NSDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (NSDKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (NSDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(NSDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<NSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface NSDKKtor_utilsPipeline<TSubject, TContext> : NSDKBase
- (instancetype)initWithPhase:(NSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(NSDKKotlinArray<NSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(NSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(NSDKKtor_utilsPipelinePhase *)reference phase:(NSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(NSDKKtor_utilsPipelinePhase *)reference phase:(NSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(NSDKKtor_utilsPipelinePhase *)phase block:(id<NSDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(NSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<NSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<NSDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface NSDKKtor_client_coreHttpReceivePipeline : NSDKKtor_utilsPipeline<NSDKKtor_client_coreHttpResponse *, NSDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NSDKKotlinArray<NSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface NSDKKtor_client_coreHttpRequestPipeline : NSDKKtor_utilsPipeline<id, NSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NSDKKotlinArray<NSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface NSDKKtor_client_coreHttpResponsePipeline : NSDKKtor_utilsPipeline<NSDKKtor_client_coreHttpResponseContainer *, NSDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NSDKKotlinArray<NSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface NSDKKtor_client_coreHttpSendPipeline : NSDKKtor_utilsPipeline<id, NSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NSDKKotlinArray<NSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol NSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<NSDKKotlinKClass>)kClass provider:(id<NSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<NSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<NSDKKotlinKClass>)kClass serializer:(id<NSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<NSDKKotlinKClass>)baseClass actualClass:(id<NSDKKotlinKClass>)actualClass actualSerializer:(id<NSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<NSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<NSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol NSDKKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol NSDKKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol NSDKKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol NSDKKotlinKClass <NSDKKotlinKDeclarationContainer, NSDKKotlinKAnnotatedElement, NSDKKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol NSDKKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface NSDKKtor_client_coreHttpRequestData : NSDKBase
- (instancetype)initWithUrl:(NSDKKtor_httpUrl *)url method:(NSDKKtor_httpHttpMethod *)method headers:(id<NSDKKtor_httpHeaders>)headers body:(NSDKKtor_httpOutgoingContent *)body executionContext:(id<NSDKKotlinx_coroutines_coreJob>)executionContext attributes:(id<NSDKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<NSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) NSDKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<NSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<NSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface NSDKKtor_client_coreHttpResponseData : NSDKBase
- (instancetype)initWithStatusCode:(NSDKKtor_httpHttpStatusCode *)statusCode requestTime:(NSDKKtor_utilsGMTDate *)requestTime headers:(id<NSDKKtor_httpHeaders>)headers version:(NSDKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<NSDKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<NSDKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<NSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) NSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) NSDKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) NSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface NSDKKtor_client_coreProxyConfig : NSDKBase
- (instancetype)initWithUrl:(NSDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol NSDKKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(NSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) NSDKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface NSDKKtor_utilsStringValuesBuilder : NSDKBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<NSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<NSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<NSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<NSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) NSDKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface NSDKKtor_httpHeadersBuilder : NSDKKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NSDKKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface NSDKKtor_client_coreHttpRequestBuilderCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface NSDKKtor_httpURLBuilder : NSDKBase
- (instancetype)initWithProtocol:(NSDKKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(NSDKKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (NSDKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSDKKtor_httpURLBuilder *)pathComponents:(NSDKKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (NSDKKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) NSDKKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property NSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol NSDKKotlinx_coroutines_coreJob <NSDKKotlinCoroutineContextElement>
@required
- (id<NSDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<NSDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(NSDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (NSDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<NSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(NSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<NSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(NSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSDKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<NSDKKotlinx_coroutines_coreJob>)plusOther_:(id<NSDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<NSDKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<NSDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface NSDKKtor_httpHttpMethod : NSDKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSDKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface NSDKKtor_client_coreHttpClientCallCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((deprecated("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol NSDKKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(NSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(NSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(NSDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(NSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(NSDKKtor_ioIoBuffer *)dst completionHandler:(void (^)(NSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(NSDKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(NSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(NSDKByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(NSDKDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(NSDKFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(NSDKKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSDKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(NSDKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSDKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSDKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSDKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(NSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(NSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(NSDKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(NSDKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<NSDKKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(NSDKShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<NSDKKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSDKKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<NSDKKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(NSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) NSDKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property NSDKKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsTypeInfo")))
@protocol NSDKKtor_utilsTypeInfo
@required
@property (readonly) id<NSDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<NSDKKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<NSDKKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface NSDKKtor_client_coreTypeInfo : NSDKBase <NSDKKtor_utilsTypeInfo>
- (instancetype)initWithType:(id<NSDKKotlinKClass>)type reifiedType:(id<NSDKKotlinKType>)reifiedType kotlinType:(id<NSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This was moved to another package.")));
- (id<NSDKKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<NSDKKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<NSDKKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSDKKtor_client_coreTypeInfo *)doCopyType:(id<NSDKKotlinKClass>)type reifiedType:(id<NSDKKotlinKType>)reifiedType kotlinType:(id<NSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NSDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<NSDKKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<NSDKKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol NSDKKtor_httpHttpMessage
@required
@property (readonly) id<NSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol NSDKKtor_client_coreHttpRequest <NSDKKtor_httpHttpMessage, NSDKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<NSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) NSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) NSDKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) NSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface NSDKKtor_client_coreHttpResponse : NSDKBase <NSDKKtor_httpHttpMessage, NSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<NSDKKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) NSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) NSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) NSDKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) NSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface NSDKKtor_utilsAttributeKey<T> : NSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol NSDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<NSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface NSDKKotlinAbstractCoroutineContextKey<B, E> : NSDKBase <NSDKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<NSDKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<NSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface NSDKKotlinx_coroutines_coreCoroutineDispatcherKey : NSDKKotlinAbstractCoroutineContextKey<id<NSDKKotlinContinuationInterceptor>, NSDKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<NSDKKotlinCoroutineContextKey>)baseKey safeCast:(id<NSDKKotlinCoroutineContextElement> _Nullable (^)(id<NSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol NSDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface NSDKKtor_utilsPipelinePhase : NSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol NSDKKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol NSDKKotlinSuspendFunction2 <NSDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface NSDKKtor_client_coreHttpReceivePipelinePhases : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) NSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface NSDKKtor_client_coreHttpRequestPipelinePhases : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) NSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface NSDKKtor_client_coreHttpResponsePipelinePhases : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) NSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface NSDKKtor_client_coreHttpResponseContainer : NSDKBase
- (instancetype)initWithExpectedType:(id<NSDKKtor_utilsTypeInfo>)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExpectedType:(NSDKKtor_client_coreTypeInfo *)expectedType response_:(id)response __attribute__((swift_name("init(expectedType:response_:)"))) __attribute__((objc_designated_initializer));
- (NSDKKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (NSDKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(NSDKKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface NSDKKtor_client_coreHttpSendPipelinePhases : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) NSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) NSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface NSDKKtor_httpUrl : NSDKBase
- (instancetype)initWithProtocol:(NSDKKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<NSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (NSDKKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<NSDKKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (NSDKKtor_httpUrl *)doCopyProtocol:(NSDKKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<NSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<NSDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) NSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol NSDKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<NSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol NSDKKtor_httpHeaders <NSDKKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface NSDKKtor_httpOutgoingContent : NSDKBase
- (id _Nullable)getPropertyKey:(NSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(NSDKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) NSDKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSDKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<NSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NSDKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface NSDKKtor_httpHttpStatusCode : NSDKBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (NSDKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface NSDKKtor_utilsGMTDate : NSDKBase <NSDKKotlinComparable>
@property (class, readonly, getter=companion) NSDKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(NSDKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSDKKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (NSDKKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (NSDKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(NSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(NSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) NSDKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) NSDKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface NSDKKtor_httpHttpProtocolVersion : NSDKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSDKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol NSDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface NSDKKtor_httpURLProtocol : NSDKBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface NSDKKtor_httpParametersBuilder : NSDKKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size urlEncodingOption:(NSDKKtor_httpUrlEncodingOption *)urlEncodingOption __attribute__((swift_name("init(size:urlEncodingOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NSDKKtor_httpParameters>)build __attribute__((swift_name("build()")));
@property NSDKKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface NSDKKtor_httpURLBuilderCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol NSDKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol NSDKKotlinx_coroutines_coreChildHandle <NSDKKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(NSDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<NSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol NSDKKotlinx_coroutines_coreChildJob <NSDKKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<NSDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface NSDKKotlinUnit : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol NSDKKotlinSequence
@required
- (id<NSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol NSDKKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<NSDKKotlinx_coroutines_coreSelectInstance>)select block:(id<NSDKKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface NSDKKtor_httpHttpMethodCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (NSDKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<NSDKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) NSDKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) NSDKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) NSDKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) NSDKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) NSDKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) NSDKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) NSDKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface NSDKKtor_ioMemory : NSDKBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(NSDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(NSDKKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (NSDKKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (NSDKKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface NSDKKtor_ioBuffer : NSDKBase
- (instancetype)initWithMemory:(NSDKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (NSDKKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(NSDKKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) NSDKKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface NSDKKtor_ioChunkBuffer : NSDKKtor_ioBuffer
- (instancetype)initWithMemory:(NSDKKtor_ioMemory *)memory origin:(NSDKKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<NSDKKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(NSDKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (NSDKKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (NSDKKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<NSDKKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) NSDKKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) NSDKKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol NSDKKtor_ioInput <NSDKKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(NSDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property NSDKKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol NSDKKotlinAppendable
@required
- (id<NSDKKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<NSDKKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<NSDKKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol NSDKKtor_ioOutput <NSDKKotlinAppendable, NSDKKtor_ioCloseable>
@required
- (id<NSDKKotlinAppendable>)appendCsq:(NSDKKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property NSDKKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface NSDKKtor_ioIoBuffer : NSDKKtor_ioChunkBuffer <NSDKKtor_ioInput, NSDKKtor_ioOutput>
- (instancetype)initWithMemory:(NSDKKtor_ioMemory *)memory origin:(NSDKKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(NSDKKtor_ioMemory *)memory origin:(NSDKKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<NSDKKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_ioIoBufferCompanion *companion __attribute__((swift_name("companion")));
- (id<NSDKKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<NSDKKotlinAppendable>)appendCsq:(NSDKKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<NSDKKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<NSDKKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(NSDKKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (NSDKKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (NSDKKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(NSDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(NSDKInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<NSDKKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(NSDKInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property NSDKKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface NSDKKotlinByteArray : NSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(NSDKByte *(^)(NSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface NSDKKtor_ioAbstractInput : NSDKBase <NSDKKtor_ioInput>
- (instancetype)initWithHead:(NSDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<NSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("AbstractInput is deprecated and will be merged with Input in 2.0.0")));
@property (class, readonly, getter=companion) NSDKKtor_ioAbstractInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (NSDKKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(NSDKKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (NSDKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(NSDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(NSDKKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(NSDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (NSDKKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<NSDKKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<NSDKKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property NSDKKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<NSDKKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface NSDKKtor_ioByteReadPacketBase : NSDKKtor_ioAbstractInput
- (instancetype)initWithHead:(NSDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<NSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@property (class, readonly, getter=companion) NSDKKtor_ioByteReadPacketBaseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface NSDKKtor_ioByteReadPacketPlatformBase : NSDKKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(NSDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<NSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface NSDKKtor_ioByteReadPacket : NSDKKtor_ioByteReadPacketPlatformBase <NSDKKtor_ioInput>
- (instancetype)initWithHead:(NSDKKtor_ioChunkBuffer *)head pool:(id<NSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(NSDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<NSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (NSDKKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (NSDKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(NSDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol NSDKKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (NSDKKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol NSDKKotlinSuspendFunction1 <NSDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface NSDKKtor_ioByteOrder : NSDKKotlinEnum<NSDKKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_ioByteOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) NSDKKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (NSDKKotlinArray<NSDKKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol NSDKKotlinKType
@required
@property (readonly) NSArray<NSDKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<NSDKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol NSDKKtor_httpParameters <NSDKKtor_utilsStringValues>
@required
@property (readonly) NSDKKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface NSDKKtor_httpUrlCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface NSDKKtor_httpHeaderValueWithParameters : NSDKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<NSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<NSDKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface NSDKKtor_httpContentType : NSDKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<NSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<NSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(NSDKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (NSDKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (NSDKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface NSDKKtor_httpHttpStatusCodeCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (NSDKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) NSDKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) NSDKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) NSDKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) NSDKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) NSDKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) NSDKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) NSDKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) NSDKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) NSDKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) NSDKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) NSDKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) NSDKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) NSDKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) NSDKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) NSDKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) NSDKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) NSDKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) NSDKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) NSDKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) NSDKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) NSDKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) NSDKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) NSDKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) NSDKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) NSDKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) NSDKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) NSDKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) NSDKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) NSDKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) NSDKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) NSDKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) NSDKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) NSDKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) NSDKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) NSDKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) NSDKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) NSDKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) NSDKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) NSDKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) NSDKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) NSDKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) NSDKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) NSDKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<NSDKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface NSDKKtor_utilsGMTDateCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface NSDKKtor_utilsWeekDay : NSDKKotlinEnum<NSDKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) NSDKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) NSDKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) NSDKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) NSDKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) NSDKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) NSDKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (NSDKKotlinArray<NSDKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface NSDKKtor_utilsMonth : NSDKKotlinEnum<NSDKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NSDKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NSDKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) NSDKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) NSDKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) NSDKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) NSDKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) NSDKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) NSDKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) NSDKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) NSDKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) NSDKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) NSDKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) NSDKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (NSDKKotlinArray<NSDKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface NSDKKtor_httpHttpProtocolVersionCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (NSDKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (NSDKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) NSDKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) NSDKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) NSDKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) NSDKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) NSDKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface NSDKKtor_httpURLProtocolCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (NSDKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) NSDKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) NSDKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) NSDKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) NSDKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) NSDKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, NSDKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrlEncodingOption")))
@interface NSDKKtor_httpUrlEncodingOption : NSDKKotlinEnum<NSDKKtor_httpUrlEncodingOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NSDKKtor_httpUrlEncodingOption *default_ __attribute__((swift_name("default_")));
@property (class, readonly) NSDKKtor_httpUrlEncodingOption *keyOnly __attribute__((swift_name("keyOnly")));
@property (class, readonly) NSDKKtor_httpUrlEncodingOption *valueOnly __attribute__((swift_name("valueOnly")));
@property (class, readonly) NSDKKtor_httpUrlEncodingOption *noEncoding __attribute__((swift_name("noEncoding")));
+ (NSDKKotlinArray<NSDKKtor_httpUrlEncodingOption *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol NSDKKotlinx_coroutines_coreParentJob <NSDKKotlinx_coroutines_coreJob>
@required
- (NSDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol NSDKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<NSDKKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(NSDKKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(NSDKKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<NSDKKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol NSDKKotlinSuspendFunction0 <NSDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface NSDKKtor_ioMemoryCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface NSDKKtor_ioBufferCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol NSDKKtor_ioObjectPool <NSDKKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface NSDKKtor_ioChunkBufferCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<NSDKKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<NSDKKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface NSDKKotlinCharArray : NSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(NSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSDKKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer.Companion")))
@interface NSDKKtor_ioIoBufferCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_ioIoBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_ioIoBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<NSDKKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<NSDKKtor_ioObjectPool> NoPool __attribute__((swift_name("NoPool")));
@property (readonly) id<NSDKKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface NSDKKotlinByteIterator : NSDKBase <NSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioAbstractInput.Companion")))
@interface NSDKKtor_ioAbstractInputCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_ioAbstractInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacketBase.Companion")))
@interface NSDKKtor_ioByteReadPacketBaseCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_ioByteReadPacketBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty"))) __attribute__((unavailable("Use ByteReadPacket.Empty instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface NSDKKtor_ioByteReadPacketCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSDKKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder.Companion")))
@interface NSDKKtor_ioByteOrderCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_ioByteOrderCompanion *shared __attribute__((swift_name("shared")));
- (NSDKKtor_ioByteOrder *)nativeOrder __attribute__((swift_name("nativeOrder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface NSDKKotlinKTypeProjection : NSDKBase
- (instancetype)initWithVariance:(NSDKKotlinKVariance * _Nullable)variance type:(id<NSDKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NSDKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (NSDKKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<NSDKKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDKKotlinKTypeProjection *)doCopyVariance:(NSDKKotlinKVariance * _Nullable)variance type:(id<NSDKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NSDKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSDKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface NSDKKtor_httpHeaderValueParam : NSDKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface NSDKKtor_httpHeaderValueWithParametersCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<NSDKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface NSDKKtor_httpContentTypeCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (NSDKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) NSDKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface NSDKKtor_utilsWeekDayCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (NSDKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (NSDKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface NSDKKtor_utilsMonthCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (NSDKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (NSDKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface NSDKKotlinx_coroutines_coreAtomicDesc : NSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(NSDKKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(NSDKKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property NSDKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface NSDKKotlinx_coroutines_coreOpDescriptor : NSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(NSDKKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface NSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : NSDKKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) NSDKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface NSDKKotlinCharIterator : NSDKBase <NSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface NSDKKotlinKVariance : NSDKKotlinEnum<NSDKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NSDKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) NSDKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) NSDKKotlinKVariance *out __attribute__((swift_name("out")));
+ (NSDKKotlinArray<NSDKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface NSDKKotlinKTypeProjectionCompanion : NSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NSDKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (NSDKKotlinKTypeProjection *)contravariantType:(id<NSDKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (NSDKKotlinKTypeProjection *)covariantType:(id<NSDKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (NSDKKotlinKTypeProjection *)invariantType:(id<NSDKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) NSDKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface NSDKKotlinx_coroutines_coreAtomicOp<__contravariant T> : NSDKKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) NSDKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface NSDKKotlinx_coroutines_coreLockFreeLinkedListNode : NSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(NSDKBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(NSDKBoolean *(^)(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(NSDKBoolean *(^)(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(NSDKBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(NSDKBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : NSDKKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(NSDKKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(NSDKKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(NSDKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(NSDKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : NSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(NSDKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) NSDKKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END

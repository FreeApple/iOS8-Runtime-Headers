/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString, NSMutableArray;

@interface AWDMMCSPutRequestInfo : PBCodable <NSCopying> {
    long long _duration;
    long long _startTime;
    long long _timestamp;
    NSMutableArray *_authHttpInfos;
    NSMutableArray *_cancelErrors;
    int _cancelledErrorCode;
    NSString *_cancelledErrorDomain;
    NSMutableArray *_chunkingInfos;
    int _chunksUploaded;
    NSString *_clientId;
    NSMutableArray *_completeHttpInfos;
    NSMutableArray *_containerHttpInfos;
    NSMutableArray *_errors;
    int _itemCount;
    int _itemsAlreadyPresentCount;
    int _itemsNotPresentCount;
    int _itemsPartiallyPresentCount;
    int _requestErrorCode;
    NSString *_requestErrorDomain;
    struct { 
        unsigned int duration : 1; 
        unsigned int startTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int cancelledErrorCode : 1; 
        unsigned int chunksUploaded : 1; 
        unsigned int itemCount : 1; 
        unsigned int itemsAlreadyPresentCount : 1; 
        unsigned int itemsNotPresentCount : 1; 
        unsigned int itemsPartiallyPresentCount : 1; 
        unsigned int requestErrorCode : 1; 
    } _has;
}

@property bool hasTimestamp;
@property long long timestamp;
@property(readonly) bool hasClientId;
@property(retain) NSString * clientId;
@property bool hasStartTime;
@property long long startTime;
@property bool hasDuration;
@property long long duration;
@property(readonly) bool hasCancelledErrorDomain;
@property(retain) NSString * cancelledErrorDomain;
@property bool hasCancelledErrorCode;
@property int cancelledErrorCode;
@property(readonly) bool hasRequestErrorDomain;
@property(retain) NSString * requestErrorDomain;
@property bool hasRequestErrorCode;
@property int requestErrorCode;
@property bool hasItemCount;
@property int itemCount;
@property bool hasItemsAlreadyPresentCount;
@property int itemsAlreadyPresentCount;
@property bool hasItemsPartiallyPresentCount;
@property int itemsPartiallyPresentCount;
@property bool hasItemsNotPresentCount;
@property int itemsNotPresentCount;
@property bool hasChunksUploaded;
@property int chunksUploaded;
@property(retain) NSMutableArray * chunkingInfos;
@property(retain) NSMutableArray * authHttpInfos;
@property(retain) NSMutableArray * containerHttpInfos;
@property(retain) NSMutableArray * completeHttpInfos;
@property(retain) NSMutableArray * cancelErrors;
@property(retain) NSMutableArray * errors;


- (id)errors;
- (bool)hasDuration;
- (id)cancelErrors;
- (id)completeHttpInfos;
- (id)containerHttpInfos;
- (id)authHttpInfos;
- (id)chunkingInfos;
- (int)chunksUploaded;
- (int)itemsNotPresentCount;
- (int)itemsPartiallyPresentCount;
- (int)itemsAlreadyPresentCount;
- (int)requestErrorCode;
- (id)requestErrorDomain;
- (int)cancelledErrorCode;
- (id)cancelledErrorDomain;
- (bool)hasChunksUploaded;
- (void)setHasChunksUploaded:(bool)arg1;
- (void)setChunksUploaded:(int)arg1;
- (bool)hasItemsNotPresentCount;
- (void)setHasItemsNotPresentCount:(bool)arg1;
- (void)setItemsNotPresentCount:(int)arg1;
- (bool)hasItemsPartiallyPresentCount;
- (void)setHasItemsPartiallyPresentCount:(bool)arg1;
- (void)setItemsPartiallyPresentCount:(int)arg1;
- (bool)hasItemsAlreadyPresentCount;
- (void)setHasItemsAlreadyPresentCount:(bool)arg1;
- (void)setItemsAlreadyPresentCount:(int)arg1;
- (bool)hasItemCount;
- (void)setHasItemCount:(bool)arg1;
- (void)setItemCount:(int)arg1;
- (bool)hasRequestErrorCode;
- (void)setHasRequestErrorCode:(bool)arg1;
- (void)setRequestErrorCode:(int)arg1;
- (bool)hasRequestErrorDomain;
- (bool)hasCancelledErrorCode;
- (void)setHasCancelledErrorCode:(bool)arg1;
- (void)setCancelledErrorCode:(int)arg1;
- (bool)hasCancelledErrorDomain;
- (id)errorAtIndex:(unsigned long long)arg1;
- (void)clearErrors;
- (unsigned long long)errorsCount;
- (id)cancelErrorAtIndex:(unsigned long long)arg1;
- (void)clearCancelErrors;
- (unsigned long long)cancelErrorsCount;
- (id)completeHttpInfosAtIndex:(unsigned long long)arg1;
- (void)clearCompleteHttpInfos;
- (unsigned long long)completeHttpInfosCount;
- (id)containerHttpInfosAtIndex:(unsigned long long)arg1;
- (void)clearContainerHttpInfos;
- (unsigned long long)containerHttpInfosCount;
- (id)authHttpInfosAtIndex:(unsigned long long)arg1;
- (void)clearAuthHttpInfos;
- (unsigned long long)authHttpInfosCount;
- (id)chunkingInfosAtIndex:(unsigned long long)arg1;
- (void)clearChunkingInfos;
- (unsigned long long)chunkingInfosCount;
- (void)addError:(id)arg1;
- (void)addCancelError:(id)arg1;
- (void)addCompleteHttpInfos:(id)arg1;
- (void)addContainerHttpInfos:(id)arg1;
- (void)addAuthHttpInfos:(id)arg1;
- (void)addChunkingInfos:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)setCancelErrors:(id)arg1;
- (void)setCompleteHttpInfos:(id)arg1;
- (void)setContainerHttpInfos:(id)arg1;
- (void)setAuthHttpInfos:(id)arg1;
- (void)setChunkingInfos:(id)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setCancelledErrorDomain:(id)arg1;
- (id)clientId;
- (bool)hasClientId;
- (void)setClientId:(id)arg1;
- (bool)hasStartTime;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)itemCount;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (void)setDuration:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStartTime:(long long)arg1;
- (long long)startTime;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)duration;
- (id)dictionaryRepresentation;

@end

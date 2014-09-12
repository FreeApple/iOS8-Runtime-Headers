/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFInvocationQueue, NSString, NSArray, <MFIMAPMailboxListFilter>, NSMutableSet, MFWeakReferenceHolder, NSMutableData;

@interface MFIMAPConnection : MFConnection  {
    <MFIMAPMailboxListFilter> *_mailboxListFilter;
    unsigned int _capabilityFlags : 19;
    bool_gotBadResponse;
    int _tag;
    double _connectTime;
    unsigned int _connectionState : 3;
    NSString *_separatorChar;
    NSString *_selectedMailbox;
    NSMutableSet *_capabilities;
    NSArray *_lastRequiredHeadersArray;
    NSString *_lastRequiredHeaders;
    unsigned int _commandNumber;
    NSMutableData *_data;
    unsigned int _readBufferSize;
    double _expirationTime;
    MFInvocationQueue *_streamEventQueue;
    struct { 
        MFWeakReferenceHolder *holder; 
        id delegate; 
        unsigned int shouldHandleUntaggedResponse : 1; 
        unsigned int didReceiveResponse : 1; 
        unsigned int didFinishSelect : 1; 
        unsigned int didDisconnect : 1; 
        unsigned int didBeginBodyLoad : 1; 
        unsigned int didReceiveMoreBodyData : 1; 
        unsigned int didFinishBodyDataLoad : 1; 
        unsigned int bodyDataReadSize : 1; 
        unsigned int setServerMessageCount : 1; 
        unsigned int setHighestModSequence : 1; 
        unsigned int willRemoveDelegation : 1; 
    } _delegateState;
    NSArray *_additionalHeadersForFetch;
    unsigned int _noModSequence : 1;
}

@property int tag;
@property(readonly) double connectTime;
@property(readonly) bool gotBadResponse;
@property(copy) NSArray * additionalHeadersForFetch;

+ (void)setReadSizeParameters;
+ (void)initialize;

- (id)uidsReferencedBy:(id)arg1;
- (id)_getFirstLevelMessageIDsForReference:(id)arg1;
- (id)_getReferencesForMessageSet:(id)arg1;
- (id)_messageIDsFromFetchResultData:(id)arg1;
- (void)parseSearchReturn:(id)arg1;
- (id)parseIndexSetFromSequenceSet:(id)arg1;
- (id)_uidsForMessageIDs:(id)arg1;
- (void)parseESearchResponseWithContext:(id)arg1;
- (bool)gotBadResponse;
- (double)connectTime;
- (id)searchUIDs:(id)arg1 withFlagRequests:(id)arg2;
- (bool)sendUidResponsesForSearchArguments:(id)arg1 toQueue:(id)arg2;
- (bool)sendUidAndFlagResponsesForUIDs:(id)arg1 sequenceIdentifierProvider:(id)arg2 flagSearchResults:(id)arg3 toQueue:(id)arg4;
- (bool)sendSkeletonResponsesForUIDs:(id)arg1 includeTo:(bool)arg2 toQueue:(id)arg3;
- (id)_readDataOfLength:(long long)arg1;
- (unsigned int)literalChunkSize;
- (void)notifyDelegateOfBodyLoadCompletion:(id)arg1 section:(id)arg2;
- (void)notifyDelegateOfBodyLoadAppendage:(id)arg1 section:(id)arg2;
- (void)notifyDelegateOfBodyLoadStart:(id)arg1 section:(id)arg2;
- (id)serverPathPrefix;
- (id)messageSetForRange:(struct { unsigned int x1; unsigned int x2; })arg1 butNotNumbers:(id)arg2;
- (bool)performCustomCommand:(id)arg1 withArguments:(id)arg2;
- (id)fetchUniqueRemoteIDsForUids:(id)arg1;
- (id)fetchHeadersForUid:(unsigned int)arg1;
- (void)fetchTotalSize:(unsigned long long*)arg1 andMessageCount:(unsigned int*)arg2;
- (void)setAdditionalHeadersForFetch:(id)arg1;
- (id)additionalHeadersForFetch;
- (bool)appendData:(id)arg1 toMailboxNamed:(id)arg2 flags:(id)arg3 dateReceived:(id)arg4 newMessageInfo:(id*)arg5;
- (bool)copyUids:(id)arg1 toMailboxNamed:(id)arg2 newMessageInfo:(id*)arg3;
- (bool)deleteMessagesOlderThanNumberOfDays:(int)arg1;
- (bool)storeFlags:(id)arg1 state:(bool)arg2 forRange:(struct { unsigned int x1; unsigned int x2; })arg3;
- (id)searchUidSet:(id)arg1 forNewMessageIDs:(id)arg2;
- (unsigned int)getMailboxIDForUID:(unsigned int)arg1;
- (id)quotaPercentagesForMailbox:(id)arg1;
- (bool)getQuotaForRootName:(id)arg1;
- (void)fetchQuotaRootNamesForMailboxes:(id)arg1;
- (bool)unsubscribeMailbox:(id)arg1;
- (bool)subscribeMailbox:(id)arg1;
- (bool)renameMailbox:(id)arg1 toMailbox:(id)arg2;
- (id)selectedMailbox;
- (bool)selectMailbox:(id)arg1;
- (bool)examineMailbox:(id)arg1;
- (void)fetchStatusForMailboxes:(id)arg1 args:(id)arg2;
- (bool)expungeUids:(id)arg1;
- (bool)expunge;
- (bool)closeAndLogout;
- (id)extendedListingForMailbox:(id)arg1 options:(int)arg2;
- (id)subscribedListingForMailbox:(id)arg1 options:(int)arg2;
- (id)listingForMailbox:(id)arg1 options:(int)arg2;
- (bool)logout;
- (void)setMailboxListFilter:(id)arg1;
- (id)mailboxListFilter;
- (id)eSearchIDSet:(id)arg1 areMessageSequenceNumbers:(bool)arg2 arguments:(id)arg3 success:(bool*)arg4 returning:(int)arg5;
- (bool)sendResponsesForUIDs:(id)arg1 fields:(id)arg2 flagSearchResults:(id)arg3 toQueue:(id)arg4;
- (bool)sendResponsesForCondStoreFlagFetchForUIDs:(id)arg1 withSequenceIdentifier:(id*)arg2 toQueue:(id)arg3;
- (bool)sendResponsesForUIDFetchForUIDs:(id)arg1 fields:(id)arg2 toQueue:(id)arg3;
- (id)fetchArgumentForMessageSkeletonsWithTo:(bool)arg1;
- (bool)sendResponsesForCommand:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg1 toQueue:(id)arg2;
- (void)handleStreamEvent:(unsigned long long)arg1;
- (id)messageSetForNumbers:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 maxTokens:(unsigned long long)arg3 indexOfLastNumber:(unsigned long long*)arg4;
- (void)setReadBufferSize:(unsigned int)arg1;
- (unsigned int)readBufferSize;
- (bool)_doUidFetchWithRange:(struct { unsigned int x1; unsigned int x2; })arg1 arguments:(id)arg2 validateMessage:(bool)arg3 responses:(id)arg4;
- (id)_headersToFetchIncludingThoseRequiredForRouting:(bool)arg1 withRecipients:(bool)arg2;
- (id)_responseFromSendingCommand:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg1 andPossiblyCreateMailbox:(id)arg2;
- (bool)createMailbox:(id)arg1;
- (bool)storeFlags:(id)arg1 state:(bool)arg2 forUids:(id)arg3;
- (id)searchUidSet:(id)arg1 forTerms:(id)arg2 success:(bool*)arg3;
- (id)messageSetForRange:(struct { unsigned int x1; unsigned int x2; })arg1;
- (bool)storeFlags:(id)arg1 state:(bool)arg2 forMessageSet:(id)arg3;
- (id)copyArgumentForSearchTerm:(id)arg1;
- (unsigned long long)countForSearchOfIDSet:(id)arg1 forTerms:(id)arg2 success:(bool*)arg3;
- (id)searchIDSet:(id)arg1 forTerms:(id)arg2 success:(bool*)arg3;
- (id)eSearchIDSet:(id)arg1 areMessageSequenceNumbers:(bool)arg2 forTerms:(id)arg3 success:(bool*)arg4 returning:(int)arg5;
- (bool)_sendMailboxCommand:(int)arg1 withArguments:(id)arg2;
- (void)updateSearchCapability;
- (id)messageSetForNumbers:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_errorForResponse:(id)arg1 commandParams:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg2;
- (void)handleBytesAvailable;
- (id)_listingForMailbox:(id)arg1 options:(int)arg2 withCommand:(int)arg3;
- (id)separatorChar;
- (id)_doListCommand:(int)arg1 withReference:(id)arg2 mailboxName:(id)arg3 options:(int)arg4;
- (unsigned long long)_sendCommands:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg1 count:(unsigned long long)arg2 response:(id*)arg3;
- (int)_doIMAPLoginForAccount:(id)arg1 quotedUsername:(id)arg2 password:(id)arg3;
- (id)_serverErrorForAccount:(id)arg1 response:(id)arg2 command:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg3;
- (void)_enableCompressionIfSupported;
- (void)_sendClientInfoIfSupported;
- (void)_sendApplePushForAccountIfSupported:(id)arg1;
- (bool)loginWithAccount:(id)arg1 password:(id)arg2;
- (void)_fetchCapabilities;
- (id)_copyNextTaggedOrContinuationResponseForCommand:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg1;
- (bool)_tryConnectionUsingAccount:(id)arg1;
- (void)_updateCapabilitiesForAccount:(id)arg1 withAuthenticationResponse:(id)arg2;
- (bool)startTLSForAccount:(id)arg1;
- (bool)_doBasicConnectionUsingAccount:(id)arg1;
- (void)_clearCapabilities;
- (id)_copyNextServerResponseForCommand:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg1;
- (void)disconnectAndNotifyDelegate:(bool)arg1;
- (id)parenthesizedStringWithObjects:(id)arg1;
- (bool)supportsCapability:(int)arg1;
- (void)_addCapabilities:(id)arg1;
- (void)_setDelegate:(id)arg1 delegateIsDeallocated:(bool)arg2;
- (void)didFinishCommands:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg1 count:(unsigned long long)arg2;
- (void)setReadBufferSizeFromElapsedTime:(double)arg1 bytesRead:(unsigned long long)arg2;
- (id)_responseFromSendingCommands:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg1 count:(unsigned long long)arg2;
- (bool)_isFetchResponseValid:(id)arg1;
- (id)_fetchArgumentForMessageUidsAndFlags;
- (id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)arg1;
- (bool)loginDisabled;
- (void)noop;
- (bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (bool)connectUsingAccount:(id)arg1;
- (bool)deleteMailbox:(id)arg1;
- (bool)authenticateUsingAccount:(id)arg1;
- (id)capabilities;
- (int)connectionState;
- (int)tag;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)close;
- (bool)isValid;
- (void)lock;
- (id)delegate;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)disconnect;
- (void)unselect;
- (void)setTag:(int)arg1;

@end

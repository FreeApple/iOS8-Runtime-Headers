/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, m_tableSize;

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider> {
    struct RetainPtr<WebGeolocationCoreLocationProvider> { 
        void *m_ptr; 
    } _coreLocationProvider;
    struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> { 
        void *m_ptr; 
    } _coreLocationUpdateListenerProxy;
    bool_enableHighAccuracy;
    bool_isSuspended;
    bool_shouldResetOnResume;
    struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > > { 
        struct HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView> > > { 
            struct KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } _webViewsWaitingForCoreLocationAuthorization;

  /* Error parsing encoded ivar type info: {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} */
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    } _pendingInitialPositionWebView;


  /* Error parsing encoded ivar type info: {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} */
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    } _registeredWebViews;


  /* Error parsing encoded ivar type info: {HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >="m_impl"{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}} */
    struct HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> > { 
        /* Warning: unhandled struct encoding: '{HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> >="m_table"^@"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}' */ struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *> > { 
            m_tableSize **m_table; 
        } m_impl; 
    } _trackedWebViews;

    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    } _sendLastPositionAsynchronouslyTimer;
    struct RetainPtr<WebGeolocationPosition> { 
        void *m_ptr; 
    } _lastPosition;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedGeolocationProvider;

- (void)resume;
- (void)errorOccurred:(id)arg1;
- (void)positionChanged:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)stopTrackingWebView:(id)arg1;
- (void)_handlePendingInitialPosition:(id)arg1;
- (void)resetGeolocation;
- (id)lastPosition;
- (void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
- (void)setEnableHighAccuracy:(bool)arg1;
- (void)unregisterWebView:(id)arg1;
- (void)registerWebView:(id)arg1;
- (void)suspend;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

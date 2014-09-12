/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface _GEOPlaceDataPhoneNumberWithMUIDCache : NSObject <_GEOPlaceDataCacheProxy> {
    struct _GEOGenericContainer<_GEOTileKey, GEOPDPlace *, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> { 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } _lock; 
        struct list<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr> > > { 
            struct __list_node_base<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> { 
                struct __list_node<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> {} *__prev_; 
                struct __list_node<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> {} *__next_; 
            } __end_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> > > { 
                unsigned long long __first_; 
            } __size_alloc_; 
        } _list; 
        struct unordered_map<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *>, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> > > > { 
            struct __hash_table<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, std::__1::hash<GEOTileKey>, true>, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, std::__1::equal_to<GEOTileKey>, true>, std::__1::allocator<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> > > > { 
                struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> *> > > { 
                        struct __hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> {} **__first_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> *> > { 
                                unsigned long long __first_; 
                            } __data_; 
                        } __second_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> *> { 
                        struct __hash_node<std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, void *> {} *__next_; 
                    } __first_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, std::__1::hash<GEOTileKey>, true> > { 
                    unsigned long long __first_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, std::__1::__list_iterator<geo::detail::_CacheItem<_GEOTileKey, GEOPDPlace *, _value_ptr>, void *> >, std::__1::equal_to<GEOTileKey>, true> > { 
                    float __first_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned long long _maxCapacity; 
        unsigned long long _maxCost; 
        unsigned long long _currentCost; 
        unsigned long long _currentCount; 
    } _cache;
    struct unordered_map<unsigned long long, _GEOTileKey, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, _GEOTileKey> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, _GEOTileKey> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, std::__1::hash<unsigned long long>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, _GEOTileKey>, std::__1::equal_to<unsigned long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _phoneNumberCache;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)_retrieveDBKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forPhoneNumber:(unsigned long long)arg2;
- (void)evictAllEntries;
- (void)evictPlaceDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (id)placeDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (id)allCacheEntries;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (void)evictPlaceDataForMUID:(unsigned long long)arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)deletePhoneNumberMapping;
- (void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2;
- (void)setPlaceData:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg2;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

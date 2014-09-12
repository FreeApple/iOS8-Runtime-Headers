/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

@class NSString;

@interface ADDataStore : NSObject  {
    NSString *_path;
    struct Database { struct sqlite3 {} *x1; struct unordered_map<unsigned long, sqlite3_stmt *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, sqlite3_stmt *> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::hash<unsigned long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, sqlite3_stmt *>, std::__1::equal_to<unsigned long>, true> > { float x_4_3_1; } x_1_2_4; } x_2_1_1; } x2; } *_database;
}

@property(readonly) NSString * path;


- (bool)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 withConsumer:(id)arg4;
- (bool)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 withConsumer:(id)arg4;
- (id)initWithDefaultPath;
- (bool)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id)arg4;
- (bool)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(id)arg4;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

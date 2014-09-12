/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSMutableArray, MIPSmartPlaylistInfo;

@interface MIPPlaylist : PBCodable <NSCopying> {
    long long _storeId;
    NSMutableArray *_childPlaylists;
    NSMutableArray *_items;
    NSString *_name;
    MIPSmartPlaylistInfo *_smartPlaylistInfo;
    int _type;
    bool_hidden;
    struct { 
        unsigned int storeId : 1; 
        unsigned int type : 1; 
        unsigned int hidden : 1; 
    } _has;
}

@property(readonly) bool hasName;
@property(retain) NSString * name;
@property bool hasStoreId;
@property long long storeId;
@property bool hasType;
@property int type;
@property bool hasHidden;
@property bool hidden;
@property(readonly) bool hasSmartPlaylistInfo;
@property(retain) MIPSmartPlaylistInfo * smartPlaylistInfo;
@property(retain) NSMutableArray * childPlaylists;
@property(retain) NSMutableArray * items;


- (bool)hasName;
- (void)copyTo:(id)arg1;
- (void)setChildPlaylists:(id)arg1;
- (id)childPlaylists;
- (id)smartPlaylistInfo;
- (bool)hasSmartPlaylistInfo;
- (bool)hasHidden;
- (void)setHasHidden:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (void)clearItems;
- (id)childPlaylistsAtIndex:(unsigned long long)arg1;
- (void)clearChildPlaylists;
- (unsigned long long)childPlaylistsCount;
- (void)setSmartPlaylistInfo:(id)arg1;
- (void)addChildPlaylists:(id)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setStoreId:(long long)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (long long)storeId;
- (bool)hasStoreId;
- (bool)hasType;
- (void)setHidden:(bool)arg1;
- (id)items;
- (void)setName:(id)arg1;
- (void)setItems:(id)arg1;
- (void)addItems:(id)arg1;
- (bool)hidden;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void)setType:(int)arg1;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)itemsCount;

@end

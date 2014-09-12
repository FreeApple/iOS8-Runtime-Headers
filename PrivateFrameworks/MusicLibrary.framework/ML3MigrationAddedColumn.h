/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3MigrationAddedColumn : NSObject  {
    NSString *_columnName;
    NSString *_foreignTableName;
    NSString *_foreignColumnName;
    NSString *_joinColumnName;
}

@property(readonly) NSString * columnName;
@property(readonly) NSString * foreignTableName;
@property(readonly) NSString * foreignColumnName;
@property(readonly) NSString * joinColumnName;
@property(readonly) bool shouldImportFromForeignTable;


- (id)foreignColumnName;
- (id)foreignTableName;
- (id)joinColumnName;
- (bool)shouldImportFromForeignTable;
- (id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4;
- (id)columnName;
- (void).cxx_destruct;

@end

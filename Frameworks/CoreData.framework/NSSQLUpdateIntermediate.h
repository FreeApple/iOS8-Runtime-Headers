/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate  {
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}


- (id)updateColumnsIntermediate;
- (id)initWithEntity:(id)arg1 inScope:(id)arg2;
- (void)setUpdateColumnsIntermediate:(id)arg1;
- (bool)isUpdateScoped;
- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;

@end

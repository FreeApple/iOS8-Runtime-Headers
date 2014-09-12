/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString;

@interface EDComment : NSObject  {
    bool_visible;
    int _rowIndex;
    int _columnIndex;
    EDString *_author;
}

@property int rowIndex;
@property int columnIndex;
@property(retain) EDString * author;
@property bool visible;


- (int)columnIndex;
- (void)setColumnIndex:(int)arg1;
- (void)setAuthor:(id)arg1;
- (id)author;
- (bool)visible;
- (void)setVisible:(bool)arg1;
- (void)dealloc;
- (void)setRowIndex:(int)arg1;
- (int)rowIndex;

@end

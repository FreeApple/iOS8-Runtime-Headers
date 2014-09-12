/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PMState, CMArchiveManager, PMPresentationMapper;

@interface PMTop : CMTop <OIProgressiveReaderDelegate> {
    CMArchiveManager *_archiver;
    PMState *_state;
    PMPresentationMapper *_mapper;
    bool_xml;
}

+ (void)fillHTMLArchiveForPowerPointData:(id)arg1 fileName:(id)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;
+ (void)fillHTMLArchiveForPowerPointFile:(id)arg1 xmlFlag:(bool)arg2 archiver:(id)arg3;
+ (void)fillHTMLArchiveForPowerPointFrom:(id)arg1 inMemory:(bool)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;

- (void)readFrom:(id)arg1 inMemory:(bool)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(bool)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
- (void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;
- (void)readFile:(id)arg1 xmlFlag:(bool)arg2 archiver:(id)arg3;
- (bool)isCancelled;
- (void)dealloc;

@end

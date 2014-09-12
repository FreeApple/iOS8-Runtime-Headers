/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface PDPresentation : OCDDocument  {
    NSMutableArray *mSlideMasters;
    NSMutableArray *mNotesMasters;
    NSMutableArray *mSlides;
    NSMutableArray *mBulletBlips;
    struct CGSize { 
        double width; 
        double height; 
    } mSlideSize;
    struct CGSize { 
        double width; 
        double height; 
    } mNotesSize;
    boolmIsAutoPlay;
    boolmIsCommentsVisible;
    boolmIsLooping;
    boolmIsKiosk;
    NSMutableArray *mCommentAuthors;
}


- (void)cacheGraphicStylesForSlideBase:(id)arg1;
- (void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2;
- (void)ensureDefaultLayoutsForMasters;
- (void)flushUnusedMastersAndLayouts;
- (void)addCommentAuthor:(id)arg1;
- (id)commentAuthorAtIndex:(unsigned long long)arg1;
- (unsigned long long)commentAuthorCount;
- (void)setIsKiosk:(bool)arg1;
- (bool)isKiosk;
- (void)setIsLooping:(bool)arg1;
- (void)setIsCommentsVisible:(bool)arg1;
- (bool)isCommentsVisible;
- (void)setIsAutoPlay:(bool)arg1;
- (bool)isAutoPlay;
- (void)setNotesSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })notesSize;
- (void)setSlideSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned int)bulletBlipCount;
- (unsigned int)addBulletBlip:(id)arg1;
- (id)bulletBlipAtIndex:(int)arg1;
- (unsigned long long)indexOfSlide:(id)arg1;
- (void)addSlide:(id)arg1;
- (void)addNotesMaster:(id)arg1;
- (id)notesMasterAtIndex:(unsigned long long)arg1;
- (unsigned long long)notesMasterCount;
- (void)addSlideMaster:(id)arg1;
- (id)slideMasterAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideMasterCount;
- (id)slideAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideCount;
- (id)bulletBlips;
- (struct CGSize { double x1; double x2; })slideSize;
- (bool)isLooping;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end

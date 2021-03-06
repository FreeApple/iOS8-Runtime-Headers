/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
}

@property(copy,readonly) NSArray * sections;
@property(copy) NSArray * sectionIndexTitles;
@property(readonly) unsigned long long count;

+ (bool)supportsSecureCoding;

- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1;
- (void)setSectionIndexTitles:(id)arg1;
- (id)sectionIndexTitles;
- (id)sections;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

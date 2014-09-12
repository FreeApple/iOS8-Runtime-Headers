/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSSet;

@interface EKDirectorySearchQuery : NSObject  {
    bool_findGroups;
    bool_findLocations;
    bool_findResources;
    bool_findUsers;
    NSSet *_terms;
    unsigned long long _resultLimit;
}

@property(retain) NSSet * terms;
@property bool findGroups;
@property bool findLocations;
@property bool findResources;
@property bool findUsers;
@property unsigned long long resultLimit;


- (void)setFindLocations:(bool)arg1;
- (void)setFindUsers:(bool)arg1;
- (bool)findUsers;
- (void)setFindResources:(bool)arg1;
- (bool)findResources;
- (bool)findLocations;
- (void)setFindGroups:(bool)arg1;
- (bool)findGroups;
- (void)setTerms:(id)arg1;
- (id)terms;
- (unsigned long long)resultLimit;
- (void)setResultLimit:(unsigned long long)arg1;

@end

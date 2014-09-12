/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSDate, NSNumber, PLManagedAsset;

@interface _PLSidecarFile : PLManagedObject  {
}

@property(retain) NSString * originalFilename;
@property(retain) NSNumber * index;
@property short indexValue;
@property(retain) NSDate * captureDate;
@property(retain) NSDate * modificationDate;
@property(retain) NSString * filename;
@property(retain) NSString * uniformTypeIdentifier;
@property(retain) NSNumber * compressedSize;
@property int compressedSizeValue;
@property(retain) PLManagedAsset * asset;

+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void)setPrimitiveCompressedSizeValue:(int)arg1;
- (int)primitiveCompressedSizeValue;
- (void)setCompressedSizeValue:(int)arg1;
- (int)compressedSizeValue;
- (void)setPrimitiveIndexValue:(short)arg1;
- (short)primitiveIndexValue;
- (short)indexValue;
- (void)setIndexValue:(short)arg1;

@end

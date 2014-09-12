/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {
    int _cpuType;
    int _cpuSubtype;
}

+ (id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2;
+ (id)armArchitecture;
+ (id)x86_64Architecture;
+ (id)x86_32Architecture;
+ (id)i386Architecture;
+ (id)ppc64Architecture;
+ (id)ppc32Architecture;
+ (id)ppcArchitecture;
+ (id)anyArchitecture;
+ (id)currentArchitecture;
+ (void)initialize;

- (bool)matchesArchitecture:(id)arg1;
- (bool)isBigEndian;
- (bool)is32Bit;
- (bool)isEqualToArchitecture:(id)arg1;
- (int)cpuSubtype;
- (int)cpuType;
- (bool)is64Bit;
- (bool)isLittleEndian;
- (id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

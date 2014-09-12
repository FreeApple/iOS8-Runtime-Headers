/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying> {
    MPPMediaPredicate *_conditionalPredicate;
    MPPMediaPredicate *_elsePredicate;
    MPPMediaPredicate *_thenPredicate;
}

@property(readonly) bool hasConditionalPredicate;
@property(retain) MPPMediaPredicate * conditionalPredicate;
@property(readonly) bool hasThenPredicate;
@property(retain) MPPMediaPredicate * thenPredicate;
@property(readonly) bool hasElsePredicate;
@property(retain) MPPMediaPredicate * elsePredicate;


- (void)copyTo:(id)arg1;
- (id)elsePredicate;
- (id)thenPredicate;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setElsePredicate:(id)arg1;
- (void)setThenPredicate:(id)arg1;
- (void)setConditionalPredicate:(id)arg1;
- (bool)hasElsePredicate;
- (bool)hasThenPredicate;
- (bool)hasConditionalPredicate;
- (id)conditionalPredicate;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end

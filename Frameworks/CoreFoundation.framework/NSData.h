/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSData;

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, CKRecordValue, PQLBindable, PQLResultSetInitializer> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned int br_qtnFlags;
@property(readonly) bool brc_signatureIsPackage;
@property(readonly) bool brc_signatureIsValid;
@property(readonly) bool brc_signatureIsPendingPlaceHolder;
@property(readonly) NSString * brc_hexadecimalString;
@property(readonly) NSData * brc_signature;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSData * SHA1Data;
@property(readonly) NSString * SHA1HexString;
@property(readonly) unsigned long long length;
@property(readonly) const void* bytes;

+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (id)data;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithData:(id)arg1;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)__imDataWithRandomBytes:(unsigned long long)arg1;
+ (id)__imDataWithHexString:(id)arg1;
+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)MCDataWithHexString:(id)arg1;
+ (id)mappedDataWithContentsOfTemporaryFile:(id)arg1 error:(id*)arg2;
+ (id)CKDataWithHexString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;
+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(id)arg3;
+ (id)dataWithHexString:(id)arg1;
+ (id)dataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;
+ (id)pl_dataWithMappedContentsOfFileHandle:(id)arg1;
+ (id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1;
+ (id)makeArchive:(const void*)arg1 length:(unsigned long long)arg2 level:(float)arg3;
+ (id)brc_pendingPlaceholderForPackage:(bool)arg1;
+ (id)nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; boolx7; struct SsrwOOStream {} *x8; }*)arg1;

- (bool)_isSafeResumeDataForBackgroundDownload:(int)arg1;
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithBase64Encoding:(id)arg1;
- (id)base64Encoding;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id)arg3;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 freeWhenDone:(bool)arg4 bytesAreVM:(bool)arg5;
- (unsigned long long)length;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)_cfTypeID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (const void*)bytes;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)getBytes:(void*)arg1;
- (bool)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(bool)arg1 withOptions:(unsigned long long)arg2;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;
- (bool)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(struct { boolx1; boolx2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg6;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_copyWillRetain;
- (bool)_isCompact;
- (void)enumerateByteRangesUsingBlock:(id)arg1;
- (bool)_canReplaceWithDispatchDataForXPCCoder;
- (bool)isEqualToData:(id)arg1;
- (bool)_isDispatchData;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id)arg4;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (Class)classForCoder;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;
- (bool)isNSData__;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_parseRFC822HeaderFields;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForXML;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)_CUTCopyGzippedData;
- (id)_CUTOptionallyDecompressData;
- (id)_CUTStringFromBaseData;
- (id)_CUTDecompressData;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;
- (id)SHA1HexString;
- (id)SHA1Data;
- (id)abDecodeVCardBase64;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned long long)arg1;
- (bool)abIsUTF16EntourageVCard;
- (id)abStringAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inEncoding:(unsigned long long)arg2;
- (id)abDecodedUTF7;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (long long)_web_locationAfterFirstBlankLine;
- (bool)_web_startsWithBlankLine;
- (id)_webkit_parseRFC822HeaderFields;
- (bool)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (id)base64Encoded;
- (id)sha1Digest;
- (id)base64Decoded;
- (id)hexStringValue;
- (id)md5Digest;
- (id)MCSHA1Hash;
- (id)MCInitWithBase64String:(id)arg1;
- (id)MCBase64String;
- (id)MCHexString;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;
- (id)decompressedGzipDataUsingTemporaryFile;
- (id)decompressedGzipData;
- (id)_geo_uppercaseMD5HashString;
- (id)_geo_newXPCData;
- (id)CKBase64URLSafeString;
- (id)CKUppercaseHexStringWithoutSpaces;
- (id)CKHexString;
- (id)CKLowercaseHexStringWithoutSpaces;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)cr_md5DigestHexString;
- (bool)mf_immutable;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)mf_decodeModifiedBase64;
- (id)mf_encodeModifiedBase64;
- (id)mf_encodeBase64;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_encodeBase64HeaderData;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)mf_decodeBase64;
- (id)mf_decodeUuencoded;
- (id)mf_decodeQuotedPrintableForText:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_copyHexString;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfByteFromSet:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)mf_subdataFromIndex:(unsigned long long)arg1;
- (id)mf_subdataToIndex:(unsigned long long)arg1;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)mf_MD5Digest;
- (id)_FTCopyGzippedData;
- (id)_FTOptionallyDecompressData;
- (id)_FTDecompressData;
- (id)_FTStringFromBaseData;
- (id)aa_hexString;
- (id)hexString;
- (bool)CDXTicketIsRelatedToTicket:(id)arg1;
- (bool)CDXTicketWellFormed;
- (id)CDXTicketTrimmed;
- (bool)CDXTicketIsStub;
- (unsigned long long)CDXTicketSID;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (id)CDXTicketExpirationDate;
- (long long)CDXTicketPCNT;
- (long long)CDXTicketPID;
- (unsigned long long)CDXTicketRevision;
- (bool)CDXTicketIsHolePunch;
- (bool)CDXTicketIsReflected;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sockAddr;
- (id)_gkMD5HashData;
- (id)_gkSHA1HashData;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashString;
- (id)initWithBase64EncodedString_gk:(id)arg1;
- (id)_gkBase64EncodedString;
- (id)hexString;
- (id)uppercaseHexStringWithoutSpaces;
- (id)lowercaseHexStringWithoutSpaces;
- (id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4;
- (id)MSHexString;
- (id)MSBase64Encoding;
- (id)MSInitWithBase64Encoding:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)cplSyncAnchorSimpleDescription;
- (id)cplSyncAnchorDescription;
- (void)pl_adviceDoNotNeed;
- (void)pl_adviceWillNeed;
- (unsigned long long)pl_advisoryLength;
- (id)gzipDeflate:(float)arg1;
- (id)gzipInflate;
- (id)brc_signature;
- (bool)brc_signatureIsValid;
- (bool)brc_signatureIsPackage;
- (bool)brc_signatureIsPendingPlaceHolder;
- (id)brc_hexadecimalString;
- (unsigned int)br_qtnFlags;
- (id)brc_SHA256WithSalt:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)SHA256Hash;
- (id)fileSafeBase64Encoding;
- (id)hexEncoding;
- (id)SHA1Hash;

@end

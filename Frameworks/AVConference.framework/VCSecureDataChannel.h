/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class <VCSecureDataChannelDelegate>;

@interface VCSecureDataChannel : NSObject  {
    struct tagCONNRESULT { 
        unsigned int dwCallID; 
        int iResultCount; 
        int iRole; 
        unsigned int dwRemoteCallID; 
        int proto; 
        int bIfRelay; 
        unsigned short wRelayServType; 
        unsigned short wChannelNumber; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbLocal; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemote; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbDst; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemoteSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRelayExt; 
        unsigned int dwRTT; 
        int bIfLocalCellularQoS; 
        int bIfRemoteCellularQoS; 
        int iLocalCellTech; 
        int iRemoteCellTech; 
        unsigned int dwCellularUniqueTag; 
        unsigned short wCellularMTU; 
        int bIfUpgrade; 
        int bIfPrimary; 
        int bIfReplaceOnly; 
        struct tagCONNRESULT {} *next; 
    } connectionResult;
    struct _tls_record_s { } *tlsRecord;
    <VCSecureDataChannelDelegate> *_delegate;
}

@property <VCSecureDataChannelDelegate> * delegate;
@property(readonly) long long maxEncryptedDataSize;
@property(readonly) long long maxUnencryptedDataSize;


- (long long)maxUnencryptedDataSize;
- (long long)maxEncryptedDataSize;
- (int)verifyAndDecryptData:(id)arg1 decryptedData:(id*)arg2;
- (int)setupWithSharedSecret:(id)arg1 error:(id*)arg2;
- (id)initWithConnectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; int x23; int x24; struct tagCONNRESULT {} *x25; }*)arg1 sharedSecret:(id)arg2 error:(id*)arg3;
- (int)sendData:(id)arg1 encrypted:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end

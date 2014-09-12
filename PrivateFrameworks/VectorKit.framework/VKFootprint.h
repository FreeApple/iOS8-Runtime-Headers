/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface VKFootprint : NSObject  {
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    } _boundingRect;
    struct VKFootprintConvexHull_struct { 
        int edgeCount; 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } edgeOrigin[6]; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } edgeNormal[6]; 
    } _convexHull;
    double _maxDistance;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _furthestGroundPoint;
    double _minDistance;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _nearestGroundPoint;
    double _minDepth;
    double _maxDepth;
    double _centerDepth;
    int _cornerGroundPointsCount;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _cornerGroundPoints[12];
}

@property(readonly) struct { double x1; double x2; double x3; double x4; } boundingRect;
@property(readonly) struct VKFootprintConvexHull_struct { int x1; struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2[6]; /* Warning: unhandled struct encoding: '{Matrix<double' */ struct x3[6]; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; oneway void*x37; void*x38; out out void*x39; void*x40; const int x41; in void*x42; unsigned char x43; out in void x44; void*x45; void*x46; void*x47; void*x48; long x49; long x50; void*x51; short x52; void*x53; const void*x54; BOOL x55; void*x56; void*x57; int x58; struct VKPoint { double x_59_1_1; double x_59_1_2; double x_59_1_3; } x59[6]; struct x60[6]; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; oneway void*x79; void*x80; out out void*x81; void*x82; const int x83; in void*x84; unsigned char x85; out in void x86; void*x87; void*x88; void*x89; void*x90; long x91; long x92; void*x93; short x94; void*x95; const void*x96; BOOL x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void* x199[ /* ? */ ]; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; oneway void*x355; void*x356; out int x357; in void*x358; void*x359; double x360; double x361; double x362; } convexHull; /* unknown property attribute:  1>=[3d]}]} */
@property(readonly) double minDepth;
@property(readonly) double maxDepth;
@property(readonly) double centerDepth;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } furthestGroundPoint;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } nearestGroundPoint;
@property(readonly) struct VKPoint { double x1; double x2; double x3; }* cornerGroundPoints;
@property(readonly) int cornerGroundPointsCount;


- (int)cornerGroundPointsCount;
- (struct VKPoint { double x1; double x2; double x3; })furthestGroundPoint;
- (double)centerDepth;
- (double)maxDepth;
- (double)minDepth;
- (struct VKFootprintConvexHull_struct { int x1; struct VKPoint { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2[6]; struct Matrix<double, 3, 1> { double x_3_1_1[3]; } x3[6]; })convexHull;
- (bool)containsGroundPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg1;
- (bool)rejectsRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (struct VKPoint { double x1; double x2; double x3; }*)cornerGroundPoints;
- (struct { double x1; double x2; double x3; double x4; })_expandedBoundingRect;
- (void)computeFromCamera:(id)arg1;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (struct VKPoint { double x1; double x2; double x3; })nearestGroundPoint;
- (id).cxx_construct;
- (struct { double x1; double x2; double x3; double x4; })boundingRect;

@end

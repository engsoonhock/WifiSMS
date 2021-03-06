/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface PBOfficeArtClient : NSObject <OABClient>
{
}

+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (BOOL)escherIsFullySupported;
+ (BOOL)tablesAreAllowed;
+ (void)readClientAnchorFromContainer:(id)arg1 toDrawable:(id)arg2;
+ (void)readRecolorInfoFromClientDataHolder:(id)arg1 toClientData:(id)arg2;
+ (void)addRecolorSpec:(const struct PptRecolorSpec { int (**x1)(); struct EshColor { struct Data { NSInteger x_1_2_1; union Value { struct RGB { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned char x_1_4_3; } x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; struct AdjustedColor { unsigned char x_4_4_1; unsigned char x_4_4_2; unsigned int x_4_4_3 : 4; unsigned int x_4_4_4 : 1; unsigned int x_4_4_5 : 1; unsigned int x_4_4_6 : 1; } x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; struct EshColor { struct Data { NSInteger x_1_2_1; union Value { struct RGB { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned char x_1_4_3; } x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; struct AdjustedColor { unsigned char x_4_4_1; unsigned char x_4_4_2; unsigned int x_4_4_3 : 4; unsigned int x_4_4_4 : 1; unsigned int x_4_4_5 : 1; unsigned int x_4_4_6 : 1; } x_2_3_4; } x_1_2_2; } x_3_1_1; } x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1 toDictionary:(id)arg2;
     /* Encoded args for previous method: v16@0:4r^{PptRecolorSpec=^^?{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}BB}8@12 */

+ (void)readOleFromClientDataHolder:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readPlaceholderInfo:(id)arg1 clientData:(id)arg2;


@end

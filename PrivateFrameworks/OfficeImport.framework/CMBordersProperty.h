/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSColorStub;



@interface CMBordersProperty : CMProperty 
{
    NSColorStub *mBorderColor;
    NSColorStub *mBorderTopColor;
    NSColorStub *mBorderLeftColor;
    NSColorStub *mBorderBottomColor;
    NSColorStub *mBorderRightColor;
    NSInteger mBorderStyle[5];
    NSInteger mBorderWidth[5];
    NSInteger mCustomWidth;
}

+ (BOOL)isStroked:(id)arg1;

- (id)init;
- (id)initWithOADStroke:(id)arg1;
- (BOOL)isNoneAtLocation:(NSInteger)arg1;
- (void)setNoneAtLocation:(NSInteger)arg1;
- (void)setFromOadStroke:(id)arg1 atLocation:(NSInteger)arg2 state:(id)arg3;
- (void)adjustValues;
- (id)cssStringForName:(id)arg1;
- (id)cssString;
- (id)stringFromStyleEnum:(NSInteger)arg1;
- (id)stringFromWidthEnum:(NSInteger)arg1;
- (id)stringFromColor:(id)arg1;
- (id)styleString;
- (id)widthString;
- (id)colorString;

@end

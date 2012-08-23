/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;



@interface OADStyleMatrixReference : NSObject <NSCopying>
{
    NSUInteger mMatrixIndex;
    OADColor *mColor;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)arg1 color:(id)arg2;

- (id)initWithMatrixIndex:(unsigned long)arg1 color:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long)matrixIndex;
- (void)setMatrixIndex:(unsigned long)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)applyToStrokeInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToFillInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToEffectsInProperties:(id)arg1 styleMatrix:(id)arg2;

@end

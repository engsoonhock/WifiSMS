/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDColorReference, EDString, NSMutableArray, ESDContainer, EDWorkbook, EDHeaderFooter, NSMapTable, EDPageSetup;



@interface EDSheet : NSObject 
{
    EDWorkbook *mWorkbook;
    EDString *mName;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mHidden;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDisplayFormulas;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDisplayGridlines;

    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    ESDContainer *mEscherDrawing;
    NSMapTable *mTextBoxMap;
    NSMapTable *mCommentMap;
}


- (id)initWithWorkbook:(id)arg1;
- (void)dealloc;
- (id)workbook;
- (id)name;
- (void)setName:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isHidden;
     /* Encoded args for previous method: B8@0:4 */

- (void)setHidden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDisplayFormulas;
     /* Encoded args for previous method: B8@0:4 */

- (void)setDisplayFormulas:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDisplayGridlines;
     /* Encoded args for previous method: B8@0:4 */

- (void)setDisplayGridlines:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)defaultGridlineColor;
- (void)setDefaultGridlineColor:(id)arg1;
- (id)headerFooter;
- (void)setHeaderFooter:(id)arg1;
- (id)pageSetup;
- (void)setPageSetup:(id)arg1;
- (NSUInteger)drawableCount;
- (id)drawableAtIndex:(NSUInteger)arg1;
- (void)addDrawable:(id)arg1;
- (id)edTextBoxForESDObject:(id)arg1;
- (void)setEDTextBox:(id)arg1 forESDObject:(id)arg2;
- (id)edCommentForESDObject:(id)arg1;
- (void)setEDComment:(id)arg1 forESDObject:(id)arg2;
- (id)defaultGridlineColorReference;
- (void)setDefaultGridlineColorReference:(id)arg1;
- (id)existingEscherDrawing;

@end

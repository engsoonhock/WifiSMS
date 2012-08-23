/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, EDReference, EDCollection, EDResources;



@interface EDTable : NSObject 
{
    EDResources *mResources;
    NSUInteger mStyleIndex;
    NSUInteger mHeaderRowDxfIndex;
    NSUInteger mTotalsRowDxfIndex;
    NSUInteger mDataAreaDxfIndex;
    NSUInteger mHeaderRowBorderDxfIndex;
    NSUInteger mTotalsRowBorderDxfIndex;
    NSUInteger mDataAreaBorderDxfIndex;
    NSUInteger mTableBorderDxfIndex;
    NSString *mName;
    NSString *mDisplayName;
    EDReference *mTableRange;
    NSString *mStyleName;
    NSUInteger mHeaderRowCount;
    NSUInteger mTotalsRowCount;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowFirstColumn;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowLastColumn;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowRowStripes;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowColumnStripes;

    EDCollection *mTableColumns;
}

+ (id)tableWithResources:(id)arg1;

- (id)initWithResources:(id)arg1;
- (void)dealloc;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)headerRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setDataAreaDxf:(id)arg1;
- (id)headerRowBorderDxf;
- (void)setHeaderRowBorderDxf:(id)arg1;
- (id)totalsRowBorderDxf;
- (void)setTotalsRowBorderDxf:(id)arg1;
- (id)dataAreaBorderDxf;
- (void)setDataAreaBorderDxf:(id)arg1;
- (id)tableBorderDxf;
- (void)setTableBorderDxf:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)styleName;
- (void)setStyleName:(id)arg1;
- (id)tableRange;
- (NSUInteger)headerRowCount;
- (void)setHeaderRowCount:(NSUInteger)arg1;
- (NSUInteger)totalsRowCount;
- (void)setTotalsRowCount:(NSUInteger)arg1;
- (id)tableColumns;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)showFirstColumn;
     /* Encoded args for previous method: B8@0:4 */

- (void)setShowFirstColumn:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)showLastColumn;
     /* Encoded args for previous method: B8@0:4 */

- (void)setShowLastColumn:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)showRowStripes;
     /* Encoded args for previous method: B8@0:4 */

- (void)setShowRowStripes:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)showColumnStripes;
     /* Encoded args for previous method: B8@0:4 */

- (void)setShowColumnStripes:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setTableRange:(id)arg1;
- (NSUInteger)styleIndex;
- (void)setStyleIndex:(NSUInteger)arg1;
- (NSUInteger)headerRowDxfIndex;
- (void)setHeaderRowDxfIndex:(NSUInteger)arg1;
- (NSUInteger)totalsRowDxfIndex;
- (void)setTotalsRowDxfIndex:(NSUInteger)arg1;
- (NSUInteger)dataAreaDxfIndex;
- (void)setDataAreaDxfIndex:(NSUInteger)arg1;
- (NSUInteger)headerRowBorderDxfIndex;
- (void)setHeaderRowBorderDxfIndex:(NSUInteger)arg1;
- (NSUInteger)totalsRowBorderDxfIndex;
- (void)setTotalsRowBorderDxfIndex:(NSUInteger)arg1;
- (NSUInteger)dataAreaBorderDxfIndex;
- (void)setDataAreaBorderDxfIndex:(NSUInteger)arg1;
- (NSUInteger)tableBorderDxfIndex;
- (void)setTableBorderDxfIndex:(NSUInteger)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDParagraphProperties, WDDocument, WDStyle;



@interface WDTableStyleOverride : NSObject <NSCopying>
{
    WDDocument *mDocument;
    WDStyle *mStyle;
    NSInteger mPart;
    WDParagraphProperties *mParagraphProperties;
    BOOL mParagraphPropertiesOverridden;
    WDCharacterProperties *mCharacterProperties;
    BOOL mCharacterPropertiesOverridden;
    WDTableRowProperties *mTableRowProperties;
    BOOL mTableRowPropertiesOverridden;
    WDTableCellProperties *mTableCellStyleProperties;
    BOOL mTableCellStylePropertiesOverridden;
}


- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (id)style;
- (void)setStyle:(id)arg1;
- (NSInteger)part;
- (void)setPart:(NSInteger)arg1;
- (id)paragraphProperties;
- (id)mutableParagraphProperties;
- (BOOL)isParagraphPropertiesOverridden;
- (void)setParagraphPropertiesOverridden:(BOOL)arg1;
- (id)characterProperties;
- (id)mutableCharacterProperties;
- (BOOL)isCharacterPropertiesOverridden;
- (void)setCharacterPropertiesOverridden:(BOOL)arg1;
- (id)tableProperties;
- (BOOL)isTablePropertiesOverridden;
- (id)tableRowProperties;
- (id)mutableTableRowProperties;
- (BOOL)isTableRowPropertiesOverridden;
- (void)setTableRowPropertiesOverridden:(BOOL)arg1;
- (id)tableCellStyleProperties;
- (id)mutableTableCellStyleProperties;
- (BOOL)isTableCellStylePropertiesOverridden;
- (void)setTableCellStylePropertiesOverridden:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSCHMutableNumberFormat : TSCHNumberFormat <TSCHCustomFormatUpdateSupport> {
}

@property unsigned int base;
@property unsigned int basePlaces;
@property BOOL baseUseMinusSign;
@property(copy) NSString * currencyCode;
@property unsigned int decimalPlaces;
@property int formatType;
@property int fractionAccuracy;
@property int negativeStyle;
@property(copy) NSString * prefixString;
@property BOOL showThousandsSeparator;
@property(copy) NSString * suffixString;
@property BOOL useAccountingStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)p_formatTypeAffectedPropertyKeys;
- (void)p_setFractionAccuracy:(int)arg1;
- (void)setBase:(unsigned int)arg1;
- (void)setBasePlaces:(unsigned int)arg1;
- (void)setBaseUseMinusSign:(BOOL)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDecimalPlaces:(unsigned int)arg1;
- (void)setFormatType:(int)arg1;
- (void)setFractionAccuracy:(int)arg1;
- (void)setNegativeStyle:(int)arg1;
- (void)setPrefixString:(id)arg1;
- (void)setShowThousandsSeparator:(BOOL)arg1;
- (void)setSuffixString:(id)arg1;
- (void)setUseAccountingStyle:(BOOL)arg1;
- (void)setValueType:(int)arg1;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;

@end

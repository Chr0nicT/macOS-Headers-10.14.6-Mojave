//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSUCustomFormatTokenizerAdditions)
+ (id)tsu_customNumberFormatDecimalFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2 includeDecimalSeparator:(BOOL)arg3;
+ (id)tsu_customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(BOOL)arg2 digitString:(id)arg3;
+ (id)tsu_customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned long long)arg1 separator:(BOOL)arg2 digitString:(id)arg3 locale:(id)arg4;
+ (id)tsu_customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
- (unsigned short)tsu_spaceCharacterInCustomNumberFormatSpaceToken;
- (unsigned short)tsu_scaleCharacterInCustomNumberFormatScaleToken;
- (id)tsu_formatStringFromCustomNumberFormatScaleToken;
- (int)tsu_fractionAccuracyFromCustomNumberFormatFractionToken;
- (id)tsu_currencyCodeFromCustomNumberFormatCurrencyToken;
- (id)tsu_digitPlaceholderStringInDigitToken;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatDecimalToken;
- (id)tsu_stringByInsertingFormatGroupingSeparators:(id)arg1;
- (BOOL)tsu_customFormatIntegerTokenUsesSeparator;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatIntegerToken;
- (BOOL)tsu_isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (BOOL)tsu_isSpecialCustomNumberFormatToken;
@end

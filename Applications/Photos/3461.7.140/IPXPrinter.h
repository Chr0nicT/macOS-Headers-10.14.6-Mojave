//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPXPrinter : NSObject
{
    struct OpaquePMPrinter *mPrinter;
    struct CGSize mMaxPaperSize;
    struct CGRect mMaxPaperImageRect;
    struct ppd_file_s *mPpd;
}

+ (id)ppdNameForPaper:(struct OpaquePMPaper *)arg1;
+ (id)idForPaper:(struct OpaquePMPaper *)arg1;
+ (struct OpaquePMPageFormat *)pageFormatWithPMPaper:(struct OpaquePMPaper *)arg1;
+ (struct OpaquePMPaper *)paperWithName:(id)arg1 forPrinter:(struct OpaquePMPrinter *)arg2;
+ (id)printerWithName:(id)arg1;
+ (id)printerWithPMPrinter:(struct OpaquePMPrinter *)arg1;
+ (id)serverPrinterList;
+ (id)userPrinterList;
+ (id)userDefaultPrinter;
+ (id)genericPrinter;
+ (id)userDefaultPaper;
- (id)userDefaultPaperForPrinter;
- (id)description;
- (struct CGRect)imageableAreaForPaperOfSize:(struct CGSize)arg1;
- (id)icon;
- (struct CGSize)maxPaperSize;
- (id)papers;
- (struct ppd_file_s *)ppd;
- (id)presetForID:(id)arg1 fromArray:(id)arg2;
- (id)printerPresets;
- (BOOL)isDefault;
- (BOOL)isFavorite;
- (id)name;
- (void)setPrinter:(struct OpaquePMPrinter *)arg1;
- (struct OpaquePMPrinter *)printer;
- (void)dealloc;
- (id)initWithPrinter:(struct OpaquePMPrinter *)arg1;

@end

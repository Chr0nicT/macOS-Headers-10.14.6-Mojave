//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBParagraphProperties : NSObject
{
}

+ (void)readParagraphProperties:(id)arg1 paragraphProperty:(struct PptParaProperty *)arg2 bulletStyle:(struct PptParaProperty9 *)arg3 isMaster:(BOOL)arg4 state:(id)arg5;
+ (void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(struct PptParaRun *)arg2 bulletStyle:(struct PptParaProperty9 *)arg3 state:(id)arg4;
+ (int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg1;
+ (int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg1;
+ (short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2;
+ (void)readAlign:(id)arg1 pptAlignmentType:(int)arg2;

@end

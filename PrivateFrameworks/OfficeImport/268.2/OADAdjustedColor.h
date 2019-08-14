//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADColor.h>

@interface OADAdjustedColor : OADColor
{
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    BOOL mInvert;
    BOOL mInvert128;
    BOOL mGray;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)gray;
- (BOOL)invert128;
- (BOOL)invert;
- (unsigned char)adjustmentParam;
- (int)adjustmentType;
- (id)baseColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(BOOL)arg4 invert128:(BOOL)arg5 gray:(BOOL)arg6;

@end

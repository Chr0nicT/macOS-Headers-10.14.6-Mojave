//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSColor;

@interface IPXPhotoDecoration : NSObject <NSCopying>
{
    NSColor *_borderColor;
    double _borderWidth;
    NSColor *_foregroundColor;
}

@property(copy, nonatomic) NSColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (id)photoDecorationVariantsWithIncreasingBorderBrightness:(long long)arg1;
- (id)photoDecorationVariantsWithIncreasingAlpha:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

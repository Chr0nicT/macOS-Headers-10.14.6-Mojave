//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIGraphicsRendererFormat.h>

@interface UIGraphicsImageRendererFormat : UIGraphicsRendererFormat
{
    struct CGColorSpace *_overrideColorSpace;
    BOOL _opaque;
    long long _overrideBitsPerComponent;
    double _scale;
    long long _preferredRange;
}

+ (id)formatForTraitCollection:(id)arg1;
+ (id)preferredFormat;
+ (id)defaultFormat;
@property(nonatomic) long long preferredRange; // @synthesize preferredRange=_preferredRange;
@property(nonatomic) BOOL opaque; // @synthesize opaque=_opaque;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic, getter=_overrideBitsPerComponent, setter=_setOverrideBitsPerComponent:) long long _overrideBitsPerComponent; // @synthesize _overrideBitsPerComponent;
@property(nonatomic, getter=_grayscale, setter=_setGrayscale:) BOOL _grayscale;
@property(nonatomic, getter=_wantsAlphaMask, setter=_setWantsAlphaMask:) BOOL _wantsAlphaMask;
@property(readonly, nonatomic, getter=_contextScale) double _contextScale;
@property(nonatomic) BOOL prefersExtendedRange;
@property(nonatomic, getter=_overrideColorSpace, setter=_setOverrideColorSpace:) struct CGColorSpace *_overrideColorSpace;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


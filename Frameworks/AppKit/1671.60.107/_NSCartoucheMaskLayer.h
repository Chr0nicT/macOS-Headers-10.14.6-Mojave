//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface _NSCartoucheMaskLayer : CALayer
{
    CALayer *_roundRectLayer;
    CALayer *_cartoucheLayer;
    CALayer *_hackLinePreventionLayer;
}

- (void)layout:(double)arg1 side:(unsigned long long)arg2 cartoucheSize:(struct CGSize)arg3 radius:(double)arg4;
- (id)initWithRadius:(float)arg1 image:(id)arg2 scaleFactor:(float)arg3;

@end

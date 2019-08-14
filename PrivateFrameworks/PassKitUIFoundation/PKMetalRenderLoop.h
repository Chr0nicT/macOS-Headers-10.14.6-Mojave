//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitUIFoundation/PKRenderLoop.h>

@class CALayer, CAMetalLayer;
@protocol CAMetalDrawable, MTLDevice, PKMetalRenderLoopDelegate;

@interface PKMetalRenderLoop : PKRenderLoop
{
    CAMetalLayer *_layer;
    _Bool _drawableSizeDirty;
    id <CAMetalDrawable> _currentDrawable;
    unsigned long long _pixelFormat;
    id <MTLDevice> _device;
    struct CGSize _drawableSize;
}

@property(nonatomic) struct CGSize drawableSize; // @synthesize drawableSize=_drawableSize;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (void).cxx_destruct;
@property(nonatomic) _Bool framebufferOnly;
@property(readonly, nonatomic) CALayer *layer; // @dynamic layer;
- (void)_didDraw;
- (void)_willDraw;
- (_Bool)_subclassPreferredPauseState;
- (id)currentDrawable;
- (_Bool)isDrawableAvailable;
- (void)invalidate;
- (id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <PKMetalRenderLoopDelegate> delegate; // @dynamic delegate;

@end

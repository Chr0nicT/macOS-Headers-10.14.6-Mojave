//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/QTSurfaceRendererTile.h>

@class CIContext, QTOpenGLContext, QTOpenGLTexture;

__attribute__((visibility("hidden")))
@interface QTSurfaceRendererAcceleratedTile : QTSurfaceRendererTile
{
    QTOpenGLContext *_glContext;
    QTOpenGLTexture *_glTexture;
    CIContext *_filterContext;
    BOOL _canUseCoreImage;
    struct {
        struct __CVBuffer *imageBuffer;
        struct CGColor *contentBackgroundColor;
        struct CGColorSpace *colorSpace;
        struct CGColorSpace *forcedContentColorSpace;
        struct CGSize contentSize;
        struct CGSize surfaceSize;
        struct CGSize offset;
    } _config;
}

- (id)pixelBufferAttributes;
- (id)diagnosticString;
- (void)render;
- (int)syncConfig;
- (void)unbindSurface;
- (void)updateBinding;
- (void)bindSurface;
- (id)graphicsDevice;
- (id)openGLContext;
- (void)finalize;
- (void)dealloc;
- (void)_clearConfig;
- (id)initWithGraphicsDevice:(id)arg1;

@end


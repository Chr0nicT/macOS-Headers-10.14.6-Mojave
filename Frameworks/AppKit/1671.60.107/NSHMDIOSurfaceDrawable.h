//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSurface, NSHMDIOSurfaceSession, NSSLSHMDDrawable;

@interface NSHMDIOSurfaceDrawable : NSObject
{
    NSHMDIOSurfaceSession *_session;
    NSSLSHMDDrawable *_drawable;
    double _inputTimestamp;
}

- (void)presentAtTimestamp:(double)arg1;
@property unsigned long long debugSignpost;
@property double inputTimeStamp;
@property(readonly) IOSurface *IOSurface;
@property(readonly) NSHMDIOSurfaceSession *session;
- (void)dealloc;
- (id)initWithSession:(id)arg1 SLSHMDDrawable:(id)arg2;

@end

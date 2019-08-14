//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCGSWindow;

__attribute__((visibility("hidden")))
@interface NSCGSWindowSurface : NSObject
{
}

+ (void)synchronize;
- (void)orderOut;
- (void)orderBelowWindow;
- (void)orderAboveWindow;
- (void)orderBelowSurface:(id)arg1;
- (void)orderAboveSurface:(id)arg1;
- (void)orderIn;

// Remaining properties
@property struct CGRect frame; // @dynamic frame;
@property(readonly) unsigned int surfaceID; // @dynamic surfaceID;
@property(readonly, retain) NSCGSWindow *window; // @dynamic window;

@end

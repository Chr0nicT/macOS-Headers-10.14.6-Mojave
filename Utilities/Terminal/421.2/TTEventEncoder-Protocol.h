//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSEvent, TTTabController;

@protocol TTEventEncoder
@property(readonly, getter=isEncodingMouseEvents) BOOL encodingMouseEvents;
- (BOOL)applicationCursorKeyMode;
- (BOOL)applicationKeypadMode;
- (void)didResignKey;
- (void)didBecomeKey;
- (NSEvent *)encodeEvent:(NSEvent *)arg1 displayLocation:(CDStruct_4bcfbbae)arg2 didIgnoreEvent:(char *)arg3;
- (NSEvent *)encodeEvent:(NSEvent *)arg1 displayLocation:(CDStruct_4bcfbbae)arg2;
- (NSEvent *)encodeEvent:(NSEvent *)arg1;
- (id)initWithController:(TTTabController *)arg1;
@end

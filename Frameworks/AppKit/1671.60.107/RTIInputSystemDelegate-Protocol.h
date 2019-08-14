//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSString, RTIInputSystemService, RTIInputSystemServiceSession;

@protocol RTIInputSystemDelegate <NSObject>
- (void)inputSystemService:(RTIInputSystemService *)arg1 didCreateInputSession:(RTIInputSystemServiceSession *)arg2;

@optional
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidUnpause:(RTIInputSystemServiceSession *)arg2 withReason:(NSString *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidPause:(RTIInputSystemServiceSession *)arg2 withReason:(NSString *)arg3;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDocumentDidChange:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidDie:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidEnd:(RTIInputSystemServiceSession *)arg2;
- (void)inputSystemService:(RTIInputSystemService *)arg1 inputSessionDidBegin:(RTIInputSystemServiceSession *)arg2;
@end

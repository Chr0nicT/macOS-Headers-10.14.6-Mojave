//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSOpenPanel, NSURL, NSWindow, SandboxExtensionPresentationController;

@protocol SandboxExtensionPresentationDelegate <NSObject>

@optional
- (NSWindow *)sandboxExtensionPresentationController:(SandboxExtensionPresentationController *)arg1 windowForURL:(NSURL *)arg2;
- (void)sandboxExtensionPresentationController:(SandboxExtensionPresentationController *)arg1 configureOpenPanel:(NSOpenPanel *)arg2 forURL:(NSURL *)arg3;
@end

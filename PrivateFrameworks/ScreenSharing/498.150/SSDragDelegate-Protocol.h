//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenSharing/NSObject-Protocol.h>

@class NSArray, NSImage, NSOperationQueue, NSPasteboard;

@protocol SSDragDelegate <NSObject>

@optional
- (NSOperationQueue *)ssDragOperationQueue;
- (void)ssDragRemotePasteboardTransferred:(NSPasteboard *)arg1 withDragImage:(NSImage *)arg2 withRemoteFilePaths:(NSArray *)arg3;
@end

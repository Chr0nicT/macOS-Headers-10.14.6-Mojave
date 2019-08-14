//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSWindow;

@interface NSRemotePanelOrderingContext : NSObject
{
    NSWindow *_parentWindow;
    CDUnknownBlockType _panelSetupDidCompleteHandler;
    CDUnknownBlockType _panelOrderingDidCompleteHandler;
    CDUnknownBlockType _panelDidReturnHandler;
    CDUnknownBlockType _completionHandler;
    id _didOrderOnScreenNotificationToken;
}

@property id didOrderOnScreenNotificationToken; // @synthesize didOrderOnScreenNotificationToken=_didOrderOnScreenNotificationToken;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType panelDidReturnHandler; // @synthesize panelDidReturnHandler=_panelDidReturnHandler;
@property(copy) CDUnknownBlockType panelOrderingDidCompleteHandler; // @synthesize panelOrderingDidCompleteHandler=_panelOrderingDidCompleteHandler;
@property(copy) CDUnknownBlockType panelSetupDidCompleteHandler; // @synthesize panelSetupDidCompleteHandler=_panelSetupDidCompleteHandler;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void)cleanup;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <SafariServices/SFSafariExtensionHostProtocol-Protocol.h>

@class NSString, NSUUID;
@protocol SFSafariExtensionHostDelegate;

__attribute__((visibility("hidden")))
@interface SFSafariExtensionHostContext : NSExtensionContext <SFSafariExtensionHostProtocol>
{
    id <SFSafariExtensionHostDelegate> _delegate;
    NSUUID *_extensionUUID;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(retain, nonatomic) NSUUID *extensionUUID; // @synthesize extensionUUID=_extensionUUID;
@property(retain) id <SFSafariExtensionHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)getBaseURIWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showPopoverFromToolbarItem:(id)arg1;
- (void)setToolbarItem:(id)arg1 label:(id)arg2;
- (void)setToolbarItem:(id)arg1 imageData:(id)arg2;
- (void)setToolbarItem:(id)arg1 badgeText:(id)arg2;
- (void)setToolbarItem:(id)arg1 isEnabled:(BOOL)arg2;
- (void)setToolbarItem:(id)arg1 isEnabled:(BOOL)arg2 withBadgeText:(id)arg3;
- (void)setToolbarItemsNeedUpdate;
- (void)openWindowWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAllWindowsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getActiveWindowWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeTab:(id)arg1;
- (void)navigateTab:(id)arg1 toURL:(id)arg2;
- (void)activateTab:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getWindowForTab:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPagesInTab:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getActivePageInTab:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closeWindow:(id)arg1;
- (void)getToolbarItemInWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openTabInWindow:(id)arg1 withURL:(id)arg2 makeActiveIfPossible:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getAllTabsInWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getActiveTabInWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getScreenshotOfVisibleAreaForPage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTabForPage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPropertiesOfPage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadPage:(id)arg1;
- (void)dispatchMessageWithName:(id)arg1 fromPage:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

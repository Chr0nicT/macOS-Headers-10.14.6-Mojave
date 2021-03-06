//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PreferencePanes/NSPreferencePane.h>

#import <PreferencePanes/NSRemoteViewDelegate-Protocol.h>
#import <PreferencePanes/PreferencePaneHostProtocol-Protocol.h>

@class NSRemoteView, NSString, NSXPCConnection;

@interface NSProxyPreferencePane : NSPreferencePane <PreferencePaneHostProtocol, NSRemoteViewDelegate>
{
    NSString *_remoteViewClass;
    NSString *_path;
    NSString *_bundleIdentifier;
    NSXPCConnection *_connection;
    NSRemoteView *_remoteView;
}

@property(retain) NSRemoteView *remoteView; // @synthesize remoteView=_remoteView;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) NSString *remoteViewClass; // @synthesize remoteViewClass=_remoteViewClass;
- (void).cxx_destruct;
- (void)toggleTouchBarControlStripCustomizationPalette;
- (void)switchToPanel:(id)arg1 anchor:(id)arg2;
- (void)switchToPanel:(id)arg1;
- (void)setSuddenTerminationEnabled:(BOOL)arg1;
- (void)handleOpenParameter:(const struct AEDesc *)arg1;
@property(retain) NSXPCConnection *connection; // @dynamic connection;
- (void)authorize;
- (void)openDocumentAtPath:(id)arg1;
- (void)revealElementForKey:(id)arg1;
- (BOOL)hasElementForKey:(id)arg1;
- (id)helpMenuItems;
- (unsigned long long)shouldUnselect;
- (void)didResignActive;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)didUnhide;
- (void)willUnhide;
- (void)didHide;
- (void)willHide;
- (void)didUnselect;
- (void)willUnselect;
- (void)didSelect;
- (void)willSelect;
- (void)willSelectWithReply:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)assignMainView;
- (id)mainNibName;
- (id)loadMainView;
- (void)loadMainViewWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithPrefPaneBundle:(id)arg1;

// Remaining properties
@property(readonly) BOOL shouldRetainExportedObject;

@end


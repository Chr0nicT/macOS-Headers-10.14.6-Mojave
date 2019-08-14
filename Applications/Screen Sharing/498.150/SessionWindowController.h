//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSToolbarDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "SSSessionViewDelegate-Protocol.h"

@class NSMenuItem, NSMutableDictionary, NSNumber, NSObjectController, NSPopUpButton, NSSegmentedControl, NSString, NSTouchBar, NSWindow, SSAddress, SSDisplaySegmentedControl, SSSessionView;
@protocol SessionWindowControllerDelegate;

@interface SessionWindowController : NSWindowController <NSToolbarDelegate, SSSessionViewDelegate, NSTouchBarDelegate>
{
    NSPopUpButton *mMultiDisplayPopUpButton;
    NSMenuItem *mControlModeMenuRepresentation;
    NSMenuItem *mScalingMenuRepresentation;
    NSMenuItem *mClipboardMenuRepresentation;
    NSMenuItem *mCursorMenuRepresentation;
    NSMenuItem *mCaptureMenuRepresentation;
    id <SessionWindowControllerDelegate> mDelegate;
    NSString *mSavedProxyIconPath;
    SSAddress *mSavedSessionAddress;
    NSMutableDictionary *mSavedWindowRestorationState;
    BOOL didInitialAutoCursorHiding;
    NSString *mDisplayName;
    BOOL mPaused;
    unsigned int mAppVersionMajor;
    unsigned int mAppVersionMinor;
    unsigned int mAppVersionBugFix;
    BOOL isReady;
    BOOL tabbed;
    BOOL _fullScreenToolbarAutohidingEnabled;
    SSSessionView *sessionView;
    NSString *toggleControlCommandKey;
    NSNumber *toggleControlCommandKeyModifier;
    NSWindow *keyWindowAtTabTime;
    NSTouchBar *dfrBar;
    NSSegmentedControl *controlObserveDFRButton;
    NSSegmentedControl *scalingDFRButton;
    SSDisplaySegmentedControl *multiDisplaySegmentedDFRButton;
    NSObjectController *_sessionViewObjectController;
    struct CGSize _displaysButtonSize;
}

+ (void)initialize;
@property struct CGSize displaysButtonSize; // @synthesize displaysButtonSize=_displaysButtonSize;
@property(nonatomic) BOOL fullScreenToolbarAutohidingEnabled; // @synthesize fullScreenToolbarAutohidingEnabled=_fullScreenToolbarAutohidingEnabled;
@property NSObjectController *sessionViewObjectController; // @synthesize sessionViewObjectController=_sessionViewObjectController;
@property(retain) SSDisplaySegmentedControl *multiDisplaySegmentedDFRButton; // @synthesize multiDisplaySegmentedDFRButton;
@property(retain) NSSegmentedControl *scalingDFRButton; // @synthesize scalingDFRButton;
@property(retain) NSSegmentedControl *controlObserveDFRButton; // @synthesize controlObserveDFRButton;
@property(retain) NSTouchBar *dfrBar; // @synthesize dfrBar;
@property(retain) NSWindow *keyWindowAtTabTime; // @synthesize keyWindowAtTabTime;
@property BOOL tabbed; // @synthesize tabbed;
@property BOOL isReady; // @synthesize isReady;
@property(retain) NSNumber *toggleControlCommandKeyModifier; // @synthesize toggleControlCommandKeyModifier;
@property(retain) NSString *toggleControlCommandKey; // @synthesize toggleControlCommandKey;
@property SSSessionView *sessionView; // @synthesize sessionView;
@property(retain) id <SessionWindowControllerDelegate> delegate; // @synthesize delegate=mDelegate;
- (void)loadAppVersion;
- (void)connect;
- (void)connectWithURL:(id)arg1 andConnectionOptions:(id)arg2;
- (void)connectWithURL:(id)arg1;
- (void)showConnectionAddressWindowWithURLString:(id)arg1;
- (void)hideNewConnection;
- (void)focus;
@property(readonly) BOOL isBlankSession;
- (void)removeDisplayMenuItems;
- (void)updateDisplayControls:(BOOL)arg1;
- (void)updateDisplayControls;
- (id)toolbarItemWithIdentifier:(id)arg1;
- (void)updateDisplayMenuKeyEquivalents;
- (void)scalingSet:(BOOL)arg1;
- (void)controlModeSet:(long long)arg1;
- (BOOL)isFullScreenToolbarAutohidingEnabled;
- (void)doToggleToolbarShown:(id)arg1;
- (void)handleWindowWillEnterFullScreen:(id)arg1;
- (void)sessionClosed;
- (void)sessionWillClose;
- (void)IDSSessionDidEndWithInfo:(id)arg1;
- (void)IDSServiceMessageReceived:(id)arg1 context:(id)arg2;
- (void)sessionRequestToAddTextToPasteboard:(int)arg1;
- (void)sessionRequestToOpenURL:(int)arg1;
- (void)sessionRequestToResumeResult:(int)arg1;
- (void)sessionResumed;
- (void)sessionPaused;
- (void)sessionDidFinishConnecting;
- (void)sessionDidReceiveEntireScreen;
- (void)sessionIsReady;
- (void)restoreSavedSessionStateOptions;
- (BOOL)shouldConnectWithAddresses:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)setDisplayFromDFR:(id)arg1;
- (void)selectDisplayFromMenu:(id)arg1;
- (void)fullQualityClicked:(id)arg1;
- (void)adaptiveQualityClicked:(id)arg1;
- (void)getClipboardClicked:(id)arg1;
- (void)sendClipboardClicked:(id)arg1;
- (void)toggleIsAutoPasteboardEnabledClicked:(id)arg1;
- (void)toggleAudioChat:(id)arg1;
- (void)captureClicked:(id)arg1;
- (void)setUnscaled:(id)arg1;
- (void)setScaled:(id)arg1;
- (void)toggleScaled:(id)arg1;
- (void)setScaledUnscaled:(id)arg1;
- (void)setObserveMode:(id)arg1;
- (void)setSharedControlMode:(id)arg1;
- (void)setControlObserve:(id)arg1;
- (void)toggleControlObserve:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (void)doRunCustomizationPalette:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)updateMenuBarKeyEquivalents;
- (void)windowDidBecomeMain:(id)arg1;
- (void)menuDidSendAction:(id)arg1;
- (void)handleWindowFrameChange:(id)arg1;
- (void)updateRestoreStateFile;
- (id)proxyIconFilepath;
- (void)setProxyIconFilepath:(id)arg1;
- (void)writeVNCFileToPath:(id)arg1;
- (BOOL)writeDictionary:(id)arg1 toFileWithHiddenExtension:(id)arg2;
- (void)saveConnectionAs:(id)arg1;
- (BOOL)handleSSInputEvent:(id)arg1;
- (BOOL)handleControlModeMenuKey:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)windowIsFullScreen;
- (void)cascadeWindow;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"

@class ChatViewController, NSString, NSUndoManager, NSViewController, NSVisualEffectView, QLPreviewPanel, SOChatDisplayController;
@protocol QLPreviewPanelDelegate><QLPreviewPanelDataSource;

@interface ChatWindowController : NSWindowController <QLPreviewPanelDataSource, QLPreviewPanelDelegate>
{
    QLPreviewPanel *_previewPanel;
    id <QLPreviewPanelDelegate><QLPreviewPanelDataSource> _previewPanelDataSource;
    ChatViewController *_chatViewController;
    NSVisualEffectView *_chatViewContainer;
    NSViewController *_currentViewController;
    id _TALCompletionBlock;
    NSUndoManager *_windowUndoManager;
    ChatViewController *_nextChatViewController;
}

+ (id)_chatWindowControllerRegistry;
+ (void)displayChat:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)bestChatWindowControllerForChat:(id)arg1;
+ (id)chatWindowControllerForChatDisplayController:(id)arg1;
+ (id)allChatWindowControllers;
@property(retain, nonatomic) ChatViewController *nextChatViewController; // @synthesize nextChatViewController=_nextChatViewController;
@property(retain, nonatomic) NSUndoManager *windowUndoManager; // @synthesize windowUndoManager=_windowUndoManager;
@property(copy, nonatomic) id TALCompletionBlock; // @synthesize TALCompletionBlock=_TALCompletionBlock;
@property(retain, nonatomic) NSViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSVisualEffectView *chatViewContainer; // @synthesize chatViewContainer=_chatViewContainer;
@property(retain, nonatomic) ChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
- (void).cxx_destruct;
- (void)printDocument:(id)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (void)_updateQuickLookPreviewPanel;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)quickLook:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidLoad;
- (void)restoreContentStateWithCoder:(id)arg1;
- (void)updateUserActivityWithCurrentChat;
- (void)tryToDeleteChat:(id)arg1;
- (void)deleteChat:(id)arg1;
- (void)archiveChat:(id)arg1;
- (void)tryToArchiveChat:(id)arg1;
- (void)tryToCloseChat:(id)arg1;
- (void)closeChat:(id)arg1;
- (void)_closeChat:(id)arg1 andDelete:(BOOL)arg2;
- (void)closeChatDisplayController:(id)arg1;
- (void)tryToCloseChatDisplayController:(id)arg1;
- (void)displayChatDisplayController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)existingChatDisplayControllerForChat:(id)arg1;
- (BOOL)containsChat:(id)arg1;
- (id)windowTitle;
- (void)updateWindowTitle;
- (void)chatDisplayControllerDidChange;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (void)setChatDisplayController:(id)arg1 animated:(BOOL)arg2;
- (void)preloadChatDisplayController:(id)arg1;
- (id)informativeTextForUnsentMessageCount:(unsigned long long)arg1;
- (void)_presentStopReceivingMessagesAlertWithChat:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)presentUnsentMessagesAlert;
- (id)alertTextForWindowClosingSheet;
- (void)cancelOperation:(id)arg1;
- (BOOL)canceledRecordingAudioMessage:(id)arg1;
- (void)dealloc;
- (void)sendInputLineContents:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)retrieveRelayCallMenuItems:(id)arg1;
- (void)composeEMail:(id)arg1;
- (void)performRelayPhoneCall:(id)arg1;
- (void)performFaceTimeAudioCall:(id)arg1;
- (void)performFaceTimeVideoCall:(id)arg1;
- (void)askToShareRecipientScreen:(id)arg1;
- (void)inviteToShareMyScreen:(id)arg1;
- (void)forwardSelectedMessages:(id)arg1;
- (void)archiveSelectedConversation:(id)arg1;
- (void)deleteSelectedConversation:(id)arg1;
- (void)exportConversation:(id)arg1;
@property(readonly) SOChatDisplayController *actionableChatDisplayController; // @dynamic actionableChatDisplayController;
@property(readonly, nonatomic) unsigned long long unsentMessageCount; // @dynamic unsentMessageCount;
@property(readonly, nonatomic) unsigned long long unreadMessageCount; // @dynamic unreadMessageCount;
@property(retain, nonatomic) SOChatDisplayController *chatDisplayController; // @dynamic chatDisplayController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

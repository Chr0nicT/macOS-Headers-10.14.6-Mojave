//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConversationKit/_TtC15ConversationKit22PlatformViewController.h>

@class NSTimer, TUCall;
@protocol CNKFaceTimeMultiwayConversationViewControllerDelegate;

@interface CNKFaceTimeMultiwayConversationViewController : _TtC15ConversationKit22PlatformViewController
{
    // Error parsing type: , name: conversationController
    // Error parsing type: , name: mostActiveParticipantsController
    // Error parsing type: , name: isHandlingMouseEnteredEvent
    // Error parsing type: , name: viewContent
    // Error parsing type: , name: inCallControlsDismissTimer
    // Error parsing type: , name: hideInactiveParticipantsTimer
    // Error parsing type: , name: effectsLayoutController
    // Error parsing type: , name: deviceOrientation
    // Error parsing type: , name: delegate
    // Error parsing type: , name: shouldInitializeEffects
    // Error parsing type: , name: effectsEnabled
    // Error parsing type: , name: isPipped
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)accessibilityConstraintController;
- (void)setControllerIsPipped:(BOOL)arg1;
- (void)openMessagesConversation;
- (void)muteVideo;
- (void)toggleVideoMute;
- (void)toggleAudioMute;
- (void)restartAutoHideInCallControlsDrawerTimer;
- (void)updateViewConstraints;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithActiveCall:(id)arg1 stagingAreaViewController:(id)arg2;
@property(nonatomic, readonly) _TtC15ConversationKit22PlatformViewController *pipViewController;
@property(nonatomic) BOOL effectsEnabled; // @synthesize effectsEnabled;
@property(nonatomic) __weak id <CNKFaceTimeMultiwayConversationViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation;
@property(nonatomic, readonly) BOOL wantsApplicationDismissalStyle;
@property(nonatomic, readonly) TUCall *call;
@property(nonatomic, retain) NSTimer *inCallControlsDismissTimer; // @synthesize inCallControlsDismissTimer;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <PassKitUI/LAUIUserPasswordFieldRemoteProtocol-Protocol.h>

@class LAUIUserPasswordViewController, NSButton, NSString, NSTextField, NSView;
@protocol PKPaymentAuthorizationPasswordEntryViewControllerDelegate;

@interface PKPaymentAuthorizationPasswordEntryViewController : NSViewController <LAUIUserPasswordFieldRemoteProtocol>
{
    BOOL _didReceiveViewDidAppear;
    id <PKPaymentAuthorizationPasswordEntryViewControllerDelegate> _delegate;
    LAUIUserPasswordViewController *_passwordViewController;
    NSTextField *_promptTextField;
    NSView *_passwordFieldPlaceholderView;
    NSButton *_payButton;
}

@property(nonatomic) BOOL didReceiveViewDidAppear; // @synthesize didReceiveViewDidAppear=_didReceiveViewDidAppear;
@property(retain, nonatomic) NSButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) NSView *passwordFieldPlaceholderView; // @synthesize passwordFieldPlaceholderView=_passwordFieldPlaceholderView;
@property(retain, nonatomic) NSTextField *promptTextField; // @synthesize promptTextField=_promptTextField;
@property(retain, nonatomic) LAUIUserPasswordViewController *passwordViewController; // @synthesize passwordViewController=_passwordViewController;
@property(nonatomic) __weak id <PKPaymentAuthorizationPasswordEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestCancelAuthentication;
- (void)passwordFieldDidResignFirstResponder;
- (void)didSubmitWrongPassword:(BOOL)arg1;
- (void)didVerifyPassword;
- (void)externalizedContextInReply:(CDUnknownBlockType)arg1;
- (void)payButtonClicked:(id)arg1;
- (id)nibBundle;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

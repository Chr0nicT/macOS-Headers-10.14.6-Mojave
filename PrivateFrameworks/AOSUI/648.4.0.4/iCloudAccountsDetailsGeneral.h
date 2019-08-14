//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSUI/CNAvatarViewDelegate-Protocol.h>
#import <AOSUI/MMWebKitViewControllerDelegate-Protocol.h>

@class CNAvatarViewController, MMWebKitViewController, MM_Account, NSButton, NSString, NSTextField, NSView, iCloudNameFormatter;
@protocol iCloudWebViewDelegate;

@interface iCloudAccountsDetailsGeneral : NSObject <CNAvatarViewDelegate, MMWebKitViewControllerDelegate>
{
    id <iCloudWebViewDelegate> _delegate;
    NSView *_generalView;
    MM_Account *_account;
    NSTextField *_appleIDLabel;
    NSTextField *_firstNameLabel;
    NSTextField *_lastNameLabel;
    NSTextField *_passwordLabel;
    NSTextField *_appleIDTF;
    NSTextField *_firstNameTF;
    NSTextField *_lastNameTF;
    NSButton *_changePasswordButton;
    NSButton *_signOutButton;
    NSButton *_OKButton;
    NSButton *_cancelButton;
    NSView *_imageWell;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    MMWebKitViewController *_webKitViewController;
    iCloudNameFormatter *_nameFormatter;
    BOOL nameDidModify;
    CNAvatarViewController *avatarViewController;
    CNAvatarViewController *_avatarViewController;
}

@property id <iCloudWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy) NSString *firstName; // @synthesize firstName=_firstName;
@property MM_Account *account; // @synthesize account=_account;
- (void)avatarViewController:(id)arg1 contactAvatarDidChange:(id)arg2;
@property(readonly, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
- (void)_closeWebViewWindow;
- (void)mmWebKitViewControllerDidDismiss:(id)arg1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitViewControllerDidSucceed:(id)arg1;
- (void)mmWebKitViewControllerDidCancel:(id)arg1;
- (void)textChangeDidChange:(id)arg1;
- (void)updateName:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)OKPressed:(id)arg1;
- (void)changePassword:(id)arg1;
- (id)signedInGeneralTabView;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

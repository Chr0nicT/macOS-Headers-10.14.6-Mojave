//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CALOperationPanelController.h"

@class CalNewNodeInspectorController, CalSubscriptionOperation, NSButton, NSButtonCell, NSString, NSTextField, NSView;
@protocol CalSubscriptionOperationUIHandler;

@interface CALSubscribePanelController : CALOperationPanelController
{
    NSView *URLView;
    NSTextField *URLTextField;
    NSButton *URLOKButton;
    id authPanel;
    NSButton *authPanelGuestButton;
    NSTextField *authPanelLogin;
    NSTextField *authPanelPassword;
    NSButtonCell *authPanelOKButton;
    NSString *_subscribeString;
    CalSubscriptionOperation *_subscriptionOperation;
    id <CalSubscriptionOperationUIHandler> _operationUIHandler;
    NSString *_password;
    NSString *_username;
    CalNewNodeInspectorController *_nodeInspector;
}

+ (id)UIHandlerForOperation:(id)arg1;
+ (void)registerSubscribeUIHandler:(id)arg1;
+ (void)initialize;
@property(retain) CalNewNodeInspectorController *nodeInspector; // @synthesize nodeInspector=_nodeInspector;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (void)abortOperation;
- (void)subscription:(id)arg1 didFailWithError:(id)arg2;
- (void)subscriptionDidFinishLoading:(id)arg1;
- (void)subscription:(id)arg1 progressedTo:(long long)arg2 totalUnits:(long long)arg3;
- (void)subscription:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)subscription:(id)arg1 didReceiveCertificateError:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)_checkAuthPanelOKButtonEnabling;
- (BOOL)authenticateForURL:(id)arg1 withRealm:(id)arg2 username:(id *)arg3 password:(id *)arg4 authType:(long long *)arg5;
- (void)_presentAuthPanelInMainThread:(id)arg1;
- (void)authenticate:(id)arg1;
- (void)guest:(id)arg1;
- (void)cancelAuth:(id)arg1;
- (void)startSubscribe:(id)arg1;
- (void)cancel:(id)arg1;
- (void)handleSubscribeCreationErrorForOperation:(id)arg1;
- (BOOL)_changeURLOfSource:(id)arg1 to:(id)arg2;
- (void)changeURLOfNode:(id)arg1;
- (BOOL)_subscribeToURLString:(id)arg1 operation:(id *)arg2;
- (void)subscribeToURLString:(id)arg1;
- (BOOL)load;
- (BOOL)_bootstrapUI;
- (id)init;
- (id)initWithMainController:(id)arg1;

@end

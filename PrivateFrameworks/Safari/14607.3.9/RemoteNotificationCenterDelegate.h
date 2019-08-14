//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/_NSUserNotificationCenterDelegatePrivate-Protocol.h>

@class NSArray, NSDate, NSMutableSet, NSString, NSURL, NSUserNotificationCenter, SafariNotificationAgentDelegate;

__attribute__((visibility("hidden")))
@interface RemoteNotificationCenterDelegate : NSObject <_NSUserNotificationCenterDelegatePrivate>
{
    NSMutableSet *_requests;
    NSUserNotificationCenter *_center;
    NSString *_websiteIdentifier;
    struct RetainPtr<RemoteNotificationCenterRequest> _pendingCenterRequest;
    BOOL _websitePackageDataLoaded;
    SafariNotificationAgentDelegate *_agentDelegate;
    NSString *_deviceToken;
    NSDate *_dateAdded;
    NSString *_name;
    NSString *_urlFormatString;
    NSArray *_allowedDomains;
    NSString *_authorizationToken;
    NSURL *_apiURL;
}

@property(retain, nonatomic) NSURL *apiURL; // @synthesize apiURL=_apiURL;
@property(retain, nonatomic) NSString *authorizationToken; // @synthesize authorizationToken=_authorizationToken;
@property(retain, nonatomic) NSArray *allowedDomains; // @synthesize allowedDomains=_allowedDomains;
@property(retain, nonatomic) NSString *urlFormatString; // @synthesize urlFormatString=_urlFormatString;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSUserNotificationCenter *center; // @synthesize center=_center;
@property(retain, nonatomic) NSString *websiteIdentifier; // @synthesize websiteIdentifier=_websiteIdentifier;
@property(retain, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_completePendingRequest;
- (void)userNotificationCenter:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (id)_safariLaunchAgentConnection;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (void)_deliverNotificationWithTitle:(id)arg1 informativeText:(id)arg2 buttonTitle:(id)arg3 activationURLArguments:(id)arg4;
- (void)_updateWebsiteData:(id)arg1;
- (void)forgetRemoteNotificationPermission;
- (void)unregisterForRemoteNotifications:(id)arg1;
- (void)_sendUnregisterRequestIfNecessary:(CDUnknownBlockType)arg1;
- (void)registerForRemoteNotifications:(id)arg1;
- (void)_sendAsynchronousRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithWebsiteIdentifier:(id)arg1 agentDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

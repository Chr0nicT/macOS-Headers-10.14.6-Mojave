//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HFApplicationURLHandling-Protocol.h"
#import "HFUserNotificationPresentationHandling-Protocol.h"

@class HOAppNavigator, NSString;

@interface HOAppNavigationURLHandler : NSObject <HFApplicationURLHandling, HFUserNotificationPresentationHandling>
{
    HOAppNavigator *_navigator;
}

@property(readonly, nonatomic) __weak HOAppNavigator *navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
- (void)notificationCenter:(id)arg1 presentCustomSettingsForNotificationWithObjectURL:(id)arg2;
- (id)notificationCenter:(id)arg1 presentNotificationWithObjectURL:(id)arg2;
- (id)openApplicationURL:(id)arg1;
- (id)_openURLComponents:(id)arg1;
- (id)openURL:(id)arg1;
- (id)init;
- (id)initWithNavigator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

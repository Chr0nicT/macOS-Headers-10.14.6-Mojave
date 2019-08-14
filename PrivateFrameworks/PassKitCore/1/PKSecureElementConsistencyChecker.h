//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPaymentWebService;
@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate, PKSecureElementConsistencyCheckerDelegate;

@interface PKSecureElementConsistencyChecker : NSObject
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    id <PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;
    id <PKSecureElementConsistencyCheckerDelegate> _delegate;
    PKPaymentWebService *_paymentWebService;
}

+ (BOOL)isCheckingConsistencyForSecureElementID:(id)arg1;
@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(nonatomic) id <PKSecureElementConsistencyCheckerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_rescheduleWithBackoff;
- (BOOL)_downloadPasses;
- (void)queue_checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 registeredRegions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkConsistencyWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queue_startWithCompletion:(CDUnknownBlockType)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3;
- (id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2;

@end

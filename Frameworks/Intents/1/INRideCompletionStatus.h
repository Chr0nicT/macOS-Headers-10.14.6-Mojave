//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INRideCompletionStatusExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCurrencyAmount, NSSet, NSString, NSUserActivity;

@interface INRideCompletionStatus : NSObject <INCacheableContainer, INRideCompletionStatusExport, NSCopying, NSSecureCoding>
{
    BOOL _completed;
    BOOL _missedPickup;
    BOOL _outstanding;
    BOOL _canceledByService;
    NSUserActivity *_completionUserActivity;
    INCurrencyAmount *_paymentAmount;
    unsigned long long _feedbackType;
    NSSet *_defaultTippingOptions;
}

+ (BOOL)supportsSecureCoding;
+ (id)canceledMissedPickup;
+ (id)canceledByService;
+ (id)canceledByUser;
+ (id)completedWithOutstandingFeedbackType:(unsigned long long)arg1;
+ (id)completedWithOutstandingPaymentAmount:(id)arg1;
+ (id)completedWithSettledPaymentAmount:(id)arg1;
+ (id)completed;
@property(readonly, nonatomic, getter=isCanceledByService) BOOL canceledByService; // @synthesize canceledByService=_canceledByService;
@property(retain) NSSet *defaultTippingOptions; // @synthesize defaultTippingOptions=_defaultTippingOptions;
@property(readonly, getter=isOutstanding) BOOL outstanding; // @synthesize outstanding=_outstanding;
@property(readonly) unsigned long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property(readonly) INCurrencyAmount *paymentAmount; // @synthesize paymentAmount=_paymentAmount;
@property(readonly, getter=isMissedPickup) BOOL missedPickup; // @synthesize missedPickup=_missedPickup;
@property(readonly, getter=isCompleted) BOOL completed; // @synthesize completed=_completed;
@property(retain) NSUserActivity *completionUserActivity; // @synthesize completionUserActivity=_completionUserActivity;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_newValue;
- (id)_initWithValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, getter=isCanceled) BOOL canceled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initCompleted:(BOOL)arg1 canceledByService:(BOOL)arg2 missedPickup:(BOOL)arg3 amount:(id)arg4 feedbackType:(unsigned long long)arg5 outstanding:(BOOL)arg6;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

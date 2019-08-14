//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LAClient, NSData, NSNumber, NSString;
@protocol LAPrearmContextXPC, LAUIDelegate;

@interface LAContext : NSObject
{
    LAClient *_client;
    id <LAPrearmContextXPC> _prearmContext;
    BOOL _cancelButtonVisible;
    BOOL _fallbackButtonVisible;
    NSNumber *_maxBiometryFailures;
    NSData *_evaluatedPolicyDomainState;
    long long _biometryType;
    NSData *_externalizedContext;
}

+ (id)currentContext;
@property(nonatomic, getter=isFallbackButtonVisible) BOOL fallbackButtonVisible; // @synthesize fallbackButtonVisible=_fallbackButtonVisible;
@property(nonatomic, getter=isCancelButtonVisible) BOOL cancelButtonVisible; // @synthesize cancelButtonVisible=_cancelButtonVisible;
@property(retain, nonatomic) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property(nonatomic) long long biometryType; // @synthesize biometryType=_biometryType;
@property(retain, nonatomic) NSData *evaluatedPolicyDomainState; // @synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState;
@property(retain, nonatomic) NSNumber *maxBiometryFailures; // @synthesize maxBiometryFailures=_maxBiometryFailures;
- (void).cxx_destruct;
@property(nonatomic) BOOL interactionNotAllowed;
- (void)setOptionPasswordAuthenticationReason:(id)arg1;
- (id)optionPasswordAuthenticationReason;
- (void)setOptionAuthenticationTitle:(id)arg1;
- (id)optionAuthenticationTitle;
- (void)setOptionDFRAuthenticationReason:(id)arg1;
- (id)optionDFRAuthenticationReason;
- (void)setOptionAHPMode:(id)arg1;
- (id)optionAHPMode;
- (void)setOptionTKAuthCallerPID:(id)arg1;
- (id)optionTKAuthCallerPID;
- (void)setOptionUserId:(id)arg1;
- (id)optionUserId;
@property(copy, nonatomic) NSString *localizedReason;
- (void)setOptionPhysicalButtonTitle:(id)arg1;
- (id)optionPhysicalButtonTitle;
- (void)setOptionBiometryLockoutRecovery:(id)arg1;
- (id)optionBiometryLockoutRecovery;
- (void)setOptionUserCancel:(id)arg1;
- (id)optionUserCancel;
- (void)setOptionSharedValidity:(id)arg1;
- (id)optionSharedValidity;
- (void)setOptionPINFirst:(id)arg1;
- (id)optionPINFirst;
- (void)setOptionPINLength:(id)arg1;
- (id)optionPINLength;
- (void)setOptionPINTitle:(id)arg1;
- (id)optionPINTitle;
- (void)setOptionFallbackVisible:(id)arg1;
- (id)optionFallbackVisible;
- (void)setOptionCancelVisible:(id)arg1;
- (id)optionCancelVisible;
- (void)setOptionReturnBiometryDatabaseHash:(id)arg1;
- (id)optionReturnBiometryDatabaseHash;
- (void)setOptionMaxBiometryFailures:(id)arg1;
- (id)optionMaxBiometryFailures;
- (void)setOptionAuthenticationReason:(id)arg1;
- (id)optionAuthenticationReason;
- (void)setOptionUserFallback:(id)arg1;
- (id)optionUserFallback;
- (void)setOptionFingerMustBeOff:(id)arg1;
- (id)optionFingerMustBeOff;
- (void)setOptionCallerPID:(id)arg1;
- (id)optionCallerPID;
- (void)setOptionCallerName:(id)arg1;
- (id)optionCallerName;
- (void)setOptionTimeout:(id)arg1;
- (id)optionTimeout;
- (void)setOptionNotInteractive:(id)arg1;
- (id)optionNotInteractive;
- (void)withCurrentContextExecute:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) __weak id <LAUIDelegate> uiDelegate;
@property(nonatomic) double touchIDAuthenticationAllowableReuseDuration;
@property(retain, nonatomic) NSNumber *touchIDAuthenticationRetryLimit;
@property(copy, nonatomic) NSString *localizedCancelTitle;
@property(copy, nonatomic) NSString *localizedFallbackTitle;
- (void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2;
- (id)_serverPropertyValueForOption:(long long)arg1;
- (void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;
- (void)resetWithReply:(CDUnknownBlockType)arg1;
- (void)prearmTouchIDWithReply:(CDUnknownBlockType)arg1;
- (void)optionsForInternalOperation:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setOptions:(id)arg1 forInternalOperation:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)isCredentialSet:(long long)arg1;
- (void)credentialOfType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)setCredential:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (BOOL)setCredential:(id)arg1 type:(long long)arg2;
- (id)evaluateAccessControl:(struct OpaqueSecAccessControlRef *)arg1 operation:(long long)arg2 options:(id)arg3 error:(id *)arg4;
- (void)evaluateAccessControl:(struct OpaqueSecAccessControlRef *)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_evaluateAccessControl:(struct OpaqueSecAccessControlRef *)arg1 operation:(id)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluateAccessControl:(struct OpaqueSecAccessControlRef *)arg1 aksOperation:(void *)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluateAccessControl:(struct OpaqueSecAccessControlRef *)arg1 operation:(long long)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)enterPassword:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)canEvaluatePolicy:(long long)arg1 error:(id *)arg2;
- (id)evaluationMechanismsForAccessControl:(struct OpaqueSecAccessControlRef *)arg1 operation:(long long)arg2 error:(id *)arg3;
- (id)evaluationMechanismsForPolicy:(long long)arg1 error:(id *)arg2;
- (id)_evaluationMechanismsFromReturnedError:(id)arg1 error:(id *)arg2;
- (void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_publicErrorFromInternalError:(id)arg1 options:(id)arg2;
- (id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_hashWithBundleIdentifier:(id)arg1;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2;
- (id)initWithUIDelegate:(id)arg1;
- (id)initWithExternalizedContext:(id)arg1;
- (id)init;

@end

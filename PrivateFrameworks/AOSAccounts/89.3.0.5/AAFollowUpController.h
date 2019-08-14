//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSAccounts/AAFollowUpProtocol-Protocol.h>

@class FLFollowUpController;

@interface AAFollowUpController : NSObject <AAFollowUpProtocol>
{
    FLFollowUpController *_followUpController;
}

+ (id)sharedController;
@property(retain, nonatomic) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
- (void)isFollowUpPending:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)postFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissFollowUpWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pendingFollowUpWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_followupActionUserInfo:(id)arg1;
- (id)_followUpItemForVerifyTerms:(id)arg1;
- (id)_followUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)_followUpItemForIdentifier:(id)arg1;
- (id)init;

@end

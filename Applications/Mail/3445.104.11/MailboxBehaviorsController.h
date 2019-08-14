//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ACAccount, NSNumber;

@interface MailboxBehaviorsController : NSViewController
{
    BOOL _accountNeedsSaving;
}

+ (id)keyPathsForValuesAffectingAccountDeletesMessagesInPlace;
+ (id)keyPathsForValuesAffectingAccountStoresTrashOnServer;
+ (id)keyPathsForValuesAffectingAccountStoresJunkOnServer;
+ (id)keyPathsForValuesAffectingAccountStoresSentMessagesOnServer;
+ (id)keyPathsForValuesAffectingAccountStoresDraftsOnServer;
+ (id)keyPathsForValuesAffectingAccountNumberOfDaysToKeepTrash;
+ (id)keyPathsForValuesAffectingAccountNumberOfDaysToKeepJunk;
@property(nonatomic) BOOL accountNeedsSaving; // @synthesize accountNeedsSaving=_accountNeedsSaving;
@property(retain, nonatomic) NSNumber *accountDeletesMessagesInPlace;
@property(nonatomic) BOOL accountStoresTrashOnServer;
@property(nonatomic) BOOL accountStoresJunkOnServer;
@property(nonatomic) BOOL accountStoresSentMessagesOnServer;
@property(nonatomic) BOOL accountStoresDraftsOnServer;
@property(nonatomic) long long accountNumberOfDaysToKeepTrash;
@property(nonatomic) long long accountNumberOfDaysToKeepJunk;
@property(retain) ACAccount *representedObject;

@end

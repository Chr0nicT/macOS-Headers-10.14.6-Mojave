//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CNAccountCollection;

__attribute__((visibility("hidden")))
@interface CNPersistentStoreCoordinatorCacheEntry : NSObject
{
    id <CNAccountCollection> _accountCollection;
    NSMutableDictionary *_persistentStoreCoordinators;
}

@property(retain) NSMutableDictionary *persistentStoreCoordinators; // @synthesize persistentStoreCoordinators=_persistentStoreCoordinators;
@property(retain) id <CNAccountCollection> accountCollection; // @synthesize accountCollection=_accountCollection;
- (void)dealloc;
- (id)init;

@end

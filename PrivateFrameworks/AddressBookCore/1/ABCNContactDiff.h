//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ABCNContactDiff : NSObject
{
    NSArray *_updates;
}

@property(readonly, copy) NSArray *updates; // @synthesize updates=_updates;
- (id)description;
- (void)applyToABPerson:(id)arg1 inAddressBook:(id)arg2;
- (void)applyToABCDContact:(id)arg1 inAddressBook:(id)arg2;
- (void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (id)contactByApplyingUpdatesToContact:(id)arg1;
- (void)dealloc;
- (id)initWithUpdates:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class ISDConflictManager, NSMutableArray, NSSet;

@interface ISDConflictChangeEnumerator : NSEnumerator
{
    NSEnumerator *_conflictEnumerator;
    NSMutableArray *_changeQueue;
    unsigned int _generation;
    ISDConflictManager *_conflictManager;
    NSSet *_entityNames;
}

- (id)nextObject;
- (void)_processConflict:(id)arg1;
- (void)dealloc;
- (id)initWithConflictEnumerator:(id)arg1 conflictManager:(id)arg2 entityNames:(id)arg3 generation:(unsigned int)arg4;

@end

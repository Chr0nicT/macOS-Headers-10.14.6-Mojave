//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RUSourceTableItem.h"

@class CRRegistryEntry;

@interface RUSourceTableRegistryEntryItem : RUSourceTableItem
{
    CRRegistryEntry *_rentry;
}

- (double)rowHeight;
- (id)cell;
- (long long)numberOfChildren;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)objectValue;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)dealloc;

@end

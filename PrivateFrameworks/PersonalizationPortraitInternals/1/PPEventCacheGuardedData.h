//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface PPEventCacheGuardedData : NSObject
{
    NSMutableArray *_cachedEvents;
    NSMutableIndexSet *_cachedRanges;
    unsigned long long _extraSecondsToBackfill;
    NSMutableDictionary *_cachedEventHighlights;
}

- (void).cxx_destruct;

@end

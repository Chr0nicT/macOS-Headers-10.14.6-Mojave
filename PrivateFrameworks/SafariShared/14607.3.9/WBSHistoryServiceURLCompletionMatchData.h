//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSURLCompletionMatchData-Protocol.h>

@class NSArray, NSString;

@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData>
{
    unique_ptr_3ff2d08e _streamData;
    NSArray *_autocompleteTriggersAsStringArray;
    NSArray *_entries;
}

@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (BOOL)matchesAutocompleteTrigger:(id)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *originalURLString;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (void)setAutocompleteTriggers:(const void *)arg1 length:(unsigned long long)arg2;
@property(nonatomic) long long visitCount;
@property(nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) BOOL lastVisitWasFailure;
@property(readonly, nonatomic) BOOL containsBookmark;
@property(readonly, nonatomic) struct _HistoryStreamedMatchData *streamData;
- (id)initWithStreamData:(unique_ptr_3ff2d08e *)arg1 entries:(id)arg2;
- (id)initWithLastVisitWasFailure:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

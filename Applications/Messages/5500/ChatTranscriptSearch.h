//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface ChatTranscriptSearch : NSObject
{
    NSMutableArray *_resultChats;
    NSCountedSet *_chatsLoading;
    NSMutableDictionary *_searchDictionary;
    struct __MDQuery *_query;
    BOOL _isRunning;
    BOOL _hasMoreResults;
    BOOL _fetchesAllResults;
    long long _resultCount;
    long long _resultIndex;
    NSOperationQueue *_searchResultOperationQueue;
}

+ (id)transcriptSearchWithDictionary:(id)arg1;
+ (id)transcriptSearchWithString:(id)arg1;
- (void).cxx_destruct;
- (void)_searchCompleted:(id)arg1;
- (void)_postSearchCompleted;
- (id)_searchStringFromDictionary:(id)arg1;
- (id)_handleQueryFrom:(id)arg1 searchField:(id)arg2;
- (struct __MDQuery *)_newQueryFromSearchString:(id)arg1;
- (BOOL)fetchesAllResults;
- (void)setFetchesAllResults:(BOOL)arg1;
- (BOOL)isRunning;
- (id)chats;
- (void)loadChatsUsingRegistry:(BOOL)arg1 loadExistingOnly:(BOOL)arg2 limit:(unsigned long long)arg3;
- (void)loadChat:(id)arg1 resultPath:(id)arg2;
- (void)enumerateResultsWithLimit:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_chatLoaded:(id)arg1;
- (id)allResults;
- (unsigned long long)resultCount;
- (id)nextResult;
- (id)_resultAtIndex:(long long)arg1;
- (void)startSearch:(BOOL)arg1;
- (void)_startSearch:(BOOL)arg1 beforeDate:(id)arg2;
- (void)dealloc;
- (void)_cleanupQuery;
- (id)initWithDictionary:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCOperationCanceling-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;
@protocol FCHeadlineProviding, FCOperationCanceling;

@interface FRArticlePrefetchOperation : NSObject <NSCopying, FCOperationCanceling>
{
    struct os_unfair_lock_s _cancellationLock;
    id <FCOperationCanceling> _childCancelHandler;
    BOOL _cancelled;
    id <FCHeadlineProviding> _headline;
    unsigned long long _component;
    unsigned long long _priority;
}

@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long component; // @synthesize component=_component;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (void)cancel;
- (void)_doWorkIfNotCancelled:(CDUnknownBlockType)arg1;
- (id)executeWithArticleContentPool:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)compareExecutionOrder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeadline:(id)arg1 component:(unsigned long long)arg2 priority:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

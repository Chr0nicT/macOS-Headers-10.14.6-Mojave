//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@protocol MSPReplicaRecord;

__attribute__((visibility("hidden")))
@interface _MSPReplicaTombstoneRecord : NSProxy
{
    id <MSPReplicaRecord> _record;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)contentsTimestamp;
- (id)contents;
- (id)_initWithRecord:(id)arg1;

@end


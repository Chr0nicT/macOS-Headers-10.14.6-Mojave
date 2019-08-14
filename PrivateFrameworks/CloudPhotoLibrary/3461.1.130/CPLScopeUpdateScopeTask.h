//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@class NSData, NSObject;
@protocol CPLEngineTransportFetchTransportScopeTask, CPLEngineTransportGetLibraryInfoTask, OS_dispatch_queue;

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CPLEngineTransportGetLibraryInfoTask> _getLibraryInfo;
    id <CPLEngineTransportFetchTransportScopeTask> _fetchTransportScope;
    NSData *_fetchedTransportScope;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (BOOL)checkScopeIsValidInTransaction:(id)arg1;
- (void)cancel;
- (void)launch;
- (void)_fetchTransportScope;
- (void)_getLibraryInfo;
- (void)_markScopeAsFeatureDisabledWithFlags:(id)arg1;
- (void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4;

@end

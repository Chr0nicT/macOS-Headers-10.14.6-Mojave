//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

@class NSMutableArray, NSObject, PHAAnalysisWorkerJob;
@protocol OS_dispatch_queue;

@interface PHAAutoloopServiceWorker : PHAWorker
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_pendingAssetIdentifiers;
    PHAAnalysisWorkerJob *_currentJob;
}

+ (BOOL)persistsState;
+ (long long)applicationDataFolderIdentifier;
+ (short)workerType;
- (void).cxx_destruct;
- (void)_processNextPendingAssetIdentifier;
- (void)_cleanup;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)cooldown;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

@end

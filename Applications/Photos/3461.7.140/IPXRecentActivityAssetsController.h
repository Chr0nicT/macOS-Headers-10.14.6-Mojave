//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXObjectsController.h"

@class NSArray, PFCoalescer, PFDispatchQueue, RDVersion;
@protocol PFDispatchQueueRunBlock;

@interface IPXRecentActivityAssetsController : IPXObjectsController
{
    PFDispatchQueue<PFDispatchQueueRunBlock> *_processingQueue;
    PFCoalescer *_reloadCoalescer;
    PFDispatchQueue *_modelQueue;
    NSArray *_nonNullVersions;
    RDVersion *_posterVersion;
}

+ (id)defaultUUID;
@property(retain) RDVersion *posterVersion; // @synthesize posterVersion=_posterVersion;
@property(retain) NSArray *nonNullVersions; // @synthesize nonNullVersions=_nonNullVersions;
@property(retain) PFDispatchQueue *modelQueue; // @synthesize modelQueue=_modelQueue;
@property(retain) PFCoalescer *reloadCoalescer; // @synthesize reloadCoalescer=_reloadCoalescer;
- (void).cxx_destruct;
- (id)posterImageWithSize:(struct CGSize)arg1;
- (id)posterImage;
- (id)versions;
- (id)objectsCollectionName;
- (void)uninstallObjectsSourceMonitor;
- (void)installObjectsSourceMonitor;
- (id)specificProcessingQueue;
- (id)init;
- (void)getEarliestDate:(out id *)arg1 latestDate:(out id *)arg2 forContentObjects:(id)arg3 withOriginalEarliestDate:(id)arg4 latestDate:(id)arg5;
- (BOOL)collectionObjectDateRangeIsCalculatedFromArrangedObjects;
- (void)_activityViewEntriesDidChange:(id)arg1;
- (void)_reloadWithEntriesRequest:(id)arg1;
- (void)_reloadWithEntries:(id)arg1;
- (id)_nonNullVersionsFromMediaItems:(id)arg1;

@end

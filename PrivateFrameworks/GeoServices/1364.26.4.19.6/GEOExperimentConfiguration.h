//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentServerProxyDelegate-Protocol.h>

@class GEOABAssignmentResponse, NSDictionary, NSLock, NSMutableArray, NSString;
@protocol GEOExperimentServerProxy;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate>
{
    id <GEOExperimentServerProxy> _serverProxy;
    GEOABAssignmentResponse *_experimentsInfo;
    NSLock *_experimentsInfoLock;
    NSMutableArray *_experimentObservers;
    NSLock *_experimentObserversLock;
    NSDictionary *_debugClientConfig;
}

+ (id)sharedConfiguration;
+ (void)useProxy:(Class)arg1;
- (void).cxx_destruct;
- (void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2;
- (void)removeExperimentObserver:(id)arg1;
- (void)addExperimentObserver:(id)arg1 queue:(id)arg2;
- (id)clientConfigurationValueForKey:(id)arg1;
- (id)_debugClientConfig;
- (void)updateURLComponents:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (id)experimentURLForURL:(id)arg1 type:(long long)arg2 dispatcherRequestType:(int)arg3;
- (id)experimentAssignmentForType:(long long)arg1 dispatcherRequestType:(int)arg2;
- (id)_reportAProblemClientMetadata;
- (id)_siriClientMetadata;
- (id)_parsecClientMetadata;
- (id)_mapsAbClientMetadata;
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
- (id)clientConfig;
- (id)experimentAssignments;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
- (void)dealloc;
- (id)init;
- (void)_fetchAllAvailableExperimentsResponse:(CDUnknownBlockType)arg1;
- (void)_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (id)_debug_datasetId;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (id)_debug_bucketId;
- (void)_debug_setActiveExperimentBranch:(id)arg1;
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;
- (void)_debug_forEachExperimentType:(CDUnknownBlockType)arg1;
- (void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (id)_debug_customQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;
- (id)_debug_defaultQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;
- (id)_debug_configurationDate;
- (void)_debug_forceUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

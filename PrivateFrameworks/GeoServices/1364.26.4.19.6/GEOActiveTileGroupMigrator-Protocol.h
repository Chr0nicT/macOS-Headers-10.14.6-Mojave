//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOActiveTileGroup, GEODataSetDescription, GEOMapLayerDataManager, GEOResourceManifestConfiguration, GEOResources, GEOTileGroup, NSSet;
@protocol GEOActiveTileGroupMigrationTask;

@protocol GEOActiveTileGroupMigrator <NSObject>
- (id <GEOActiveTileGroupMigrationTask>)taskForNewTileGroup:(GEOTileGroup *)arg1 inResourceManifest:(GEOResources *)arg2 oldTileGroup:(GEOActiveTileGroup *)arg3 activeScales:(NSSet *)arg4 activeScenarios:(NSSet *)arg5 dataSet:(GEODataSetDescription *)arg6 updateType:(long long)arg7;
- (id)initWithManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 mapLayerDataManager:(GEOMapLayerDataManager *)arg2;

@optional
- (BOOL)needsMigrationForNewTileGroup:(GEOTileGroup *)arg1 inResourceManifest:(GEOResources *)arg2 oldTileGroup:(GEOActiveTileGroup *)arg3 dataSet:(GEODataSetDescription *)arg4;
- (id <GEOActiveTileGroupMigrationTask>)opportunisticTaskForNewTileGroup:(GEOTileGroup *)arg1 inResourceManifest:(GEOResources *)arg2 oldTileGroup:(GEOActiveTileGroup *)arg3 activeScales:(NSSet *)arg4 activeScenarios:(NSSet *)arg5 dataSet:(GEODataSetDescription *)arg6;
@end

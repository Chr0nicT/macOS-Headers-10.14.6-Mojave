//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class GEOMapRegion, VKViewportInfo;

@protocol VKCameraController <NSObject>
@property(readonly, nonatomic) BOOL isFullyPitched;
@property(readonly, nonatomic) BOOL isRotated;
@property(readonly, nonatomic) BOOL isPitched;
@property(readonly, nonatomic) double maxPitch;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(nonatomic) double pitch;
@property(nonatomic) double heading;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
- (BOOL)restoreViewportFromInfo:(VKViewportInfo *)arg1;
- (VKViewportInfo *)viewportInfo;
- (BOOL)canZoomOutForTileSize:(long long)arg1;
- (BOOL)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
@end

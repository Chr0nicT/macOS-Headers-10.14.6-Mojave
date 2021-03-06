//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKMapView, NSCache, UIImageView, UIVisualEffectView;

@interface MKScaleView : UIView
{
    double _distanceInMeters;
    BOOL _useMetric;
    BOOL _useYardsForShortDistances;
    double _segmentLength;
    NSCache *_cache;
    UIVisualEffectView *_effectView;
    UIImageView *_vibrantImageView;
    UIImageView *_imageView;
    BOOL _useLightText;
    BOOL _drawsOutline;
    MKMapView *_mapView;
    long long _scaleVisibility;
    long long _legendAlignment;
}

+ (double)_chooseUnitForSegment:(id)arg1 mileageContext:(BOOL)arg2 useMetricSystem:(BOOL)arg3 useYardsForShortDistances:(BOOL)arg4;
+ (id)mileageSegmentWithDistance:(double)arg1 useMetricSystem:(BOOL)arg2;
+ (id)niceMileageSegmentWithLowerBound:(double)arg1 useMetricSystem:(BOOL)arg2;
+ (double)niceDistanceFromDistance:(double)arg1;
+ (id)niceSegmentWithLowerBound:(double)arg1 useMetricSystem:(BOOL)arg2 useYardsForShortDistances:(BOOL)arg3;
+ (id)scaleViewWithMapView:(id)arg1;
@property(nonatomic) BOOL drawsOutline; // @synthesize drawsOutline=_drawsOutline;
@property(nonatomic) BOOL useLightText; // @synthesize useLightText=_useLightText;
@property(nonatomic) long long legendAlignment; // @synthesize legendAlignment=_legendAlignment;
@property(nonatomic) long long scaleVisibility; // @synthesize scaleVisibility=_scaleVisibility;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) double distanceInMeters; // @synthesize distanceInMeters=_distanceInMeters;
- (void).cxx_destruct;
- (double)segmentLength;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)trackingRect;
- (struct CGSize)sizeForLegendString:(id)arg1;
- (void)updateImages;
@property(readonly, nonatomic) NSCache *cache;
- (struct CGSize)fittingSize;
- (void)setupLocale;
- (void)dealloc;
- (void)localWasUpdated;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end


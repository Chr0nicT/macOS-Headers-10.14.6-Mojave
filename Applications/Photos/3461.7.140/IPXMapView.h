//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKMapView.h>

@interface IPXMapView : MKMapView
{
}

- (void)deselectAllAnnotationsAnimated:(BOOL)arg1;
- (void)setAnnotations:(id)arg1 hidden:(BOOL)arg2;
- (BOOL)acceptsFirstResponder;
- (void)panMap:(struct CGPoint)arg1;
- (double)mapScaleForRegion:(CDStruct_26e8d939)arg1;
- (double)mapScaleForMapRect:(CDStruct_02837cd9)arg1;
- (double)mapScale;
- (void)restoreViewportFromDictionary:(id)arg1;
- (id)viewportDictionary;
- (void)setMapType:(unsigned long long)arg1;

@end

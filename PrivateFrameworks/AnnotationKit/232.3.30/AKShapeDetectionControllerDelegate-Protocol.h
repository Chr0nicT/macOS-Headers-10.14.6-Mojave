//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AKAnnotation, AKShapeDetectionController, NSView;

@protocol AKShapeDetectionControllerDelegate <NSObject>
- (BOOL)shapeDetectionController:(AKShapeDetectionController *)arg1 shouldSelectCandidateAnnotation:(AKAnnotation *)arg2;
- (BOOL)isWaitingToCoalesceStrokes;
- (BOOL)isIgnoringAnnotationAndSelectionKVO:(AKShapeDetectionController *)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(AKShapeDetectionController *)arg1;
- (void)beginIgnoringAnnotationSelectionObservation:(AKShapeDetectionController *)arg1;
- (NSView *)overlayView:(AKShapeDetectionController *)arg1;

@optional
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(AKShapeDetectionController *)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(AKShapeDetectionController *)arg1 isInk:(BOOL)arg2;
@end

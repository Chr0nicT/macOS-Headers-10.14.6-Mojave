//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <PencilKit/CHVisualizationManagerDelegate-Protocol.h>

@class CHVisualizationManager, NSString;

@interface PKRecognitionOverlayView : NSView <CHVisualizationManagerDelegate>
{
    CHVisualizationManager *_visualizationManager;
    struct CGAffineTransform _drawingTransform;
}

@property(readonly, nonatomic) CHVisualizationManager *visualizationManager; // @synthesize visualizationManager=_visualizationManager;
@property(nonatomic) struct CGAffineTransform drawingTransform; // @synthesize drawingTransform=_drawingTransform;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)visualizationManagerNeedsDisplay:(id)arg1;
- (void)visualizationManager:(id)arg1 needsDisplayInRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 visualizationManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

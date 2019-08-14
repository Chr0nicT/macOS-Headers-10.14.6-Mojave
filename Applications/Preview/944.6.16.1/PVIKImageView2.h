//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Quartz/IKImageView2.h>

#import "PVContentView-Protocol.h"
#import "PVContentViewAKControllerDelegate-Protocol.h"
#import "PVImageViewProtocol-Protocol.h"
#import "PVLoupeMagnifiableView-Protocol.h"

@class CALayer, NSColor, NSCursor, NSMutableArray, NSString, NSTrackingArea, PVFloatingStringPanel, PVIVSelection, PVImageContainer, PVImageElement, Profile;

@interface PVIKImageView2 : IKImageView2 <PVContentView, PVImageViewProtocol, PVLoupeMagnifiableView, PVContentViewAKControllerDelegate>
{
    id _delegate;
    BOOL _updatesAreaOfInterest;
    PVImageElement *_imageElement;
    PVImageContainer *_imageContainer;
    BOOL _ignoreModelRotations;
    BOOL _inRotateGesture;
    BOOL _inZoomGesture;
    NSMutableArray *_editBlockQueue;
    double _lastRequestedZoomFactor;
    long long _toolMode;
    long long _previousToolMode;
    long long _respectDPIForScaleMode;
    struct CGSize _screenResolution;
    Profile *_softProofProfile;
    PVIVSelection *_selection;
    CALayer *_clipviewSelectionHolderLayer;
    int _selectionDraggingMode;
    BOOL _hadSelectedAnnotations;
    long long _pasteboardChangeCount;
    long long _pasteCascadeNumber;
    struct CGPoint _pasteCascadeDelta;
    id _loupeEventMonitor;
    BOOL _periodicEventsEnabled;
    BOOL _loupeWasShowingBeforeAnim;
    double _lastLoupeMagnificationLevel;
    NSTrackingArea *_trackingArea;
    id _altSpaceEventMonitor;
    BOOL _inEyeDropperMode;
    PVFloatingStringPanel *_infoHUD;
    NSCursor *_cursor;
    BOOL _flippedHorizontally;
    BOOL _flippedVertically;
    long long _effectiveEXIFOrientation;
    BOOL _observingAnnotationController;
    NSCursor *_annotationCursor;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain) NSCursor *annotationCursor; // @synthesize annotationCursor=_annotationCursor;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property BOOL updatesAreaOfInterest; // @synthesize updatesAreaOfInterest=_updatesAreaOfInterest;
- (void).cxx_destruct;
- (void)adjustFrameForNewSuperviewFrame;
- (void)setDelegate;
@property(readonly) struct CGSize loupeMagnifiedSizeDefault;
@property(readonly) double loupeMagnificationLevelDefault;
@property(readonly) double loupeMagnificationLevelMax;
@property(readonly) double loupeMagnificationLevelMin;
- (struct CGImage *)newLoupeImageInRect:(struct CGRect)arg1 withScale:(double)arg2;
- (struct CGPoint)imageLowerLeftCornerInView;
- (void)loupeEventPeek:(id)arg1 mouseLocation:(struct CGPoint)arg2;
- (void)_trackSelectMagicWand:(id)arg1;
- (void)_CIDrawImageRect:(struct CGRect)arg1 intoContext:(struct CGContext *)arg2;
- (BOOL)_handleHitAnnotationsOrClearSelection:(id)arg1;
- (void)_trackSelectSmartLasso:(id)arg1;
- (void)_trackSelectLasso:(id)arg1;
- (void)_trackSelectRect:(id)arg1;
- (void)_trackScroll:(id)arg1;
- (struct CGImage *)selectionMask;
- (void)invertSelection;
- (void)setSelection:(id)arg1;
- (void)selectAll:(id)arg1;
- (struct CGRect)_boundsForSelectAll;
- (id)selection;
- (void)resetCursorRects;
- (void)setCursorForContentView:(id)arg1;
- (void)updateCursorForContentView:(id)arg1;
- (id)marqueeCursorForMouseLocation:(struct CGPoint)arg1 andSelectionRect:(struct CGRect)arg2;
- (id)flipCursorIfNeeded:(id)arg1;
- (BOOL)needToFlipAngleResizeCursor;
- (BOOL)needToFlipStraightResizeCursor;
- (struct CGRect)pixelAlignedImageRect:(struct CGRect)arg1;
- (struct CGPoint)pixelAlignedImagePoint:(struct CGPoint)arg1;
- (struct CGPoint)_pixelAlignedViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)_viewPointFromEvent:(id)arg1;
- (struct CGPoint)_imagePointFromEvent:(id)arg1;
- (struct CGPoint)transformedVector:(struct CGPoint)arg1;
- (struct CGPoint)_rotatedPoint:(struct CGPoint)arg1 byDegrees:(double)arg2;
- (struct CGSize)_sizeOfRotatedRectOriginal:(struct CGSize)arg1 byDegrees:(double)arg2;
- (void)cursorUpdate:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)scrollByAmount:(struct CGPoint)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)_enableAutoResizingIfWithinEpsilon;
- (void)_scrollViewEndingMagnification:(id)arg1;
- (void)_scrollViewStartingMagnification:(id)arg1;
- (void)_scrollViewDidScroll:(id)arg1;
- (id)applyFiltersToImage:(id)arg1;
- (void)_loadImage_ImageElementChanged:(BOOL)arg1 updatingGeometry:(BOOL)arg2 withZoomFactor:(double)arg3 andZoomCenter:(struct CGPoint)arg4;
- (void)_changeImageUpdatingGeometry:(BOOL)arg1 withZoomFactor:(double)arg2 andZoomCenter:(struct CGPoint)arg3;
- (void)_refreshImageUpdatingGeometry:(BOOL)arg1 withZoomFactor:(double)arg2 andZoomCenter:(struct CGPoint)arg3;
- (void)imageLoadComplete:(id)arg1;
- (BOOL)_canUseImageSourceForImage:(id)arg1;
- (BOOL)_canUseImageSource;
- (void)_imageChanged:(id)arg1;
- (BOOL)_flippedVertically;
- (BOOL)_flippedHorizontally;
- (void)didCompleteFlipAnimation;
- (void)flipWithDirection:(unsigned long long)arg1;
- (double)rotationAngleIncludingExif;
- (BOOL)isRotated90;
- (void)didCompleteRotationAnimation;
- (void)willCompleteRotationAnimation;
- (void)rotateWithEvent:(id)arg1;
- (void)rotateByAngle:(double)arg1;
- (void)_dequeueNextEditBlock;
- (void)_enqueueEditBlock:(CDUnknownBlockType)arg1;
- (BOOL)_canExecuteEditInstantly;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_pvAnnotationControllerValidateSender:(id)arg1 shouldContinueValidating:(_Bool *)arg2;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (struct CGRect)alignedAnnotationRect:(struct CGRect)arg1 otherAnnotationRects:(struct CGRect *)arg2 count:(unsigned long long)arg3 alignedX:(double *)arg4 alignedY:(double *)arg5 alignAnyEdge:(BOOL)arg6;
- (void)_addImageAnnotation:(struct CGImage *)arg1;
- (double)defaultAnnotationFontSize;
- (void)changeAnnotationsSelectionIndexes:(id)arg1;
- (id)selectedAnnotations;
- (id)annotations;
- (void)commitTextAnnotationEditor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_annotationControllerWillTearDown:(id)arg1;
- (void)_forceAnnotationsToRedraw;
- (void)_uninstallAllOverlaysOfController:(id)arg1;
- (void)_uninstallOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)_installOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)_setupOrTeardownOverlaysBasedOnVisiblityForController:(id)arg1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
@property(retain) Profile *softProofProfile;
- (void)setImage:(id)arg1 withZoomFactor:(double)arg2 andCenter:(struct CGPoint)arg3 orAutoResizes:(BOOL)arg4;
@property(readonly) BOOL isMasking;
@property(readonly) struct CGRect selectionBounds;
- (BOOL)shouldAnimateToAndFromContactSheet;
- (id)layerFromCurrentViewStateInRect:(struct CGRect)arg1;
- (void)reinsertImageContentLayer:(id)arg1;
- (id)layerForWholeImage;
- (id)layerFromCurrentViewState;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (struct CGRect)contentRect;
@property BOOL showsCheckerboardBackground;
- (double)zoomToFitZoomFactorWithContentSize:(struct CGSize)arg1;
- (double)zoomFactorForUIZoomFactor:(double)arg1 withContentResolution:(double)arg2;
- (double)uiZoomFactorForZoomFactor:(double)arg1 withContentResolution:(double)arg2;
- (double)zoomFactorForUIZoomFactor:(double)arg1;
- (double)uiZoomFactorForZoomFactor:(double)arg1;
- (double)clampedZoomFactor:(double)arg1;
- (double)_calculateMaxZoomFactor;
- (double)_calculateMinZoomFactor;
- (void)_updateMinAndMaxZoomFactors;
@property BOOL autoResizes;
@property(readonly) struct CGPoint zoomCenter;
- (void)didCompleteZoomAnimation;
- (void)willCompleteZoomAnimation;
- (void)setZoomFactor:(double)arg1 animate:(BOOL)arg2 stickyFit:(BOOL)arg3;
@property double zoomFactor;
- (void)setZoomFactor:(double)arg1 withCenter:(struct CGPoint)arg2 animate:(BOOL)arg3 stickyFit:(BOOL)arg4;
@property(readonly) double zoomToFitZoomFactor;
- (void)_zoomToRect:(struct CGRect)arg1;
- (void)zoomToSelection;
@property(readonly) BOOL canZoomToSelection;
@property(readonly) BOOL canZoomToFit;
@property(readonly) BOOL canZoomOut;
@property(readonly) BOOL canZoomIn;
- (id)magnificationInflectionPoints;
- (void)respectScreenDPIPrefChanged:(id)arg1;
- (void)scrollViewDidEndMagnify:(id)arg1;
@property(readonly) BOOL hasCroppableSelection;
- (void)_updateInfoHudPosition;
@property BOOL inEyeDropperMode;
- (void)_endEyeDropperMode;
- (void)_startEyeDropperMode;
- (BOOL)supportsEyeDropperMode;
- (BOOL)supportsToolMode:(long long)arg1;
@property(readonly) long long defaultToolMode;
@property long long toolMode;
- (void)clearPreviousToolWithNewTool:(long long)arg1;
- (id)undoManager;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

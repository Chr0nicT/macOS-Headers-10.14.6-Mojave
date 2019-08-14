//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CalUIOccurrenceContainerView.h"

#import "CUIKSingleDayTimelineGeometryDelegate-Protocol.h"
#import "CUIKSingleDayTimelineLayoutScreenUtils-Protocol.h"
#import "CalUIBoxOccurrenceContainer-Protocol.h"

@class CalUIDayCanvasController, CalUIDayLayerController, CalUIDayLayerGridlineView, NSArray, NSColor, NSDate, NSLayoutConstraint, NSMutableDictionary, NSNumber, NSString, NSView;

@interface CalUIDayLayerView : CalUIOccurrenceContainerView <CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils, CalUIBoxOccurrenceContainer>
{
    BOOL _isToday;
    BOOL _needsSortSubviews;
    BOOL _timeIndicatorHidden;
    BOOL _isWeekend;
    BOOL _pendingLayoutAfterNewStartDate;
    int _weekday;
    NSView *_viewPort;
    long long _workDayStartMinute;
    long long _workdayEndMinute;
    CalUIDayCanvasController *_canvasController;
    CalUIDayLayerController *_dayViewController;
    NSArray *_occurrencesAllValuesSorted;
    NSArray *_occurrenceRowsForTop;
    NSArray *_occurrenceRowsForBottom;
    NSMutableDictionary *_topRowsByOccurrence;
    NSMutableDictionary *_bottomRowsByOccurrence;
    long long _firstTopUnpinnedRowIdx;
    long long _firstBottomUnpinnedRowIdx;
    CalUIDayLayerGridlineView *_gridlines;
    NSView *_separator;
    NSView *_timeIndicatorLine;
    NSView *_separatorTimeIndicatorLine;
    NSLayoutConstraint *_timeIndicatorPositionConstraint;
    NSColor *_backgroundColor;
    NSNumber *_minutesBetweenStartAndMidnightNumber;
}

+ (id)gridLineColor;
@property(retain) NSNumber *minutesBetweenStartAndMidnightNumber; // @synthesize minutesBetweenStartAndMidnightNumber=_minutesBetweenStartAndMidnightNumber;
@property BOOL pendingLayoutAfterNewStartDate; // @synthesize pendingLayoutAfterNewStartDate=_pendingLayoutAfterNewStartDate;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL isWeekend; // @synthesize isWeekend=_isWeekend;
@property(nonatomic) BOOL timeIndicatorHidden; // @synthesize timeIndicatorHidden=_timeIndicatorHidden;
@property(retain) NSLayoutConstraint *timeIndicatorPositionConstraint; // @synthesize timeIndicatorPositionConstraint=_timeIndicatorPositionConstraint;
@property(retain) NSView *separatorTimeIndicatorLine; // @synthesize separatorTimeIndicatorLine=_separatorTimeIndicatorLine;
@property(retain) NSView *timeIndicatorLine; // @synthesize timeIndicatorLine=_timeIndicatorLine;
@property(retain) NSView *separator; // @synthesize separator=_separator;
@property(retain) CalUIDayLayerGridlineView *gridlines; // @synthesize gridlines=_gridlines;
@property long long firstBottomUnpinnedRowIdx; // @synthesize firstBottomUnpinnedRowIdx=_firstBottomUnpinnedRowIdx;
@property long long firstTopUnpinnedRowIdx; // @synthesize firstTopUnpinnedRowIdx=_firstTopUnpinnedRowIdx;
@property(retain) NSMutableDictionary *bottomRowsByOccurrence; // @synthesize bottomRowsByOccurrence=_bottomRowsByOccurrence;
@property(retain) NSMutableDictionary *topRowsByOccurrence; // @synthesize topRowsByOccurrence=_topRowsByOccurrence;
@property(retain) NSArray *occurrenceRowsForBottom; // @synthesize occurrenceRowsForBottom=_occurrenceRowsForBottom;
@property(retain) NSArray *occurrenceRowsForTop; // @synthesize occurrenceRowsForTop=_occurrenceRowsForTop;
@property(retain) NSArray *occurrencesAllValuesSorted; // @synthesize occurrencesAllValuesSorted=_occurrencesAllValuesSorted;
@property BOOL needsSortSubviews; // @synthesize needsSortSubviews=_needsSortSubviews;
@property __weak CalUIDayLayerController *dayViewController; // @synthesize dayViewController=_dayViewController;
@property __weak CalUIDayCanvasController *canvasController; // @synthesize canvasController=_canvasController;
@property(nonatomic) long long workdayEndMinute; // @synthesize workdayEndMinute=_workdayEndMinute;
@property(nonatomic) long long workDayStartMinute; // @synthesize workDayStartMinute=_workDayStartMinute;
@property(nonatomic) int weekday; // @synthesize weekday=_weekday;
@property(nonatomic) BOOL isToday; // @synthesize isToday=_isToday;
@property __weak NSView *viewPort; // @synthesize viewPort=_viewPort;
- (void).cxx_destruct;
- (int)backgroundColorOption;
- (void)scrollOccurrenceToVisible:(id)arg1 shouldAnimate:(BOOL)arg2;
- (double)startTimeIncrementForArrowKey:(unsigned short)arg1;
- (double)durationIncrementForArrowKey:(unsigned short)arg1;
- (BOOL)shouldShowTravelTime;
- (void)cleanupEventDrag:(id)arg1;
- (void)updateForDraggedOccurrence:(id)arg1 destinationPoint:(struct CGPoint)arg2 withStartDate:(id)arg3 endDate:(id)arg4;
- (BOOL)shouldBeginDragForOccurrence:(id)arg1 mouseDownPoint:(struct CGPoint)arg2 dragPoint:(struct CGPoint)arg3;
- (BOOL)shouldAutoScrollForDragPoint:(struct CGPoint)arg1;
- (id)dateAtPointInWindow:(struct CGPoint)arg1;
- (double)yValueForDate:(id)arg1;
- (long long)_minutesForYValue:(double)arg1;
- (long long)minutesForYValue:(double)arg1;
- (long long)minutesForOffset:(double)arg1;
- (long long)midnightOffsetMinutes;
- (long long)minutesForPointInWindow:(struct CGPoint)arg1;
- (BOOL)isAllDayContainer;
- (id)filteredEventsToDisplay:(id)arg1;
- (void)setNeedsUpdateOccurrenceConstraints:(BOOL)arg1;
- (BOOL)needsUpdateOccurrenceConstraints;
- (Class)occurrenceClass;
- (void)setStagedFramesOnOccurrences:(id)arg1;
- (void)doPostLayoutInsetsOnOccurrences:(id)arg1;
- (void)layoutOccurrences;
- (void)_resetConstraints;
- (void)hideTravelTimeValueChanged;
- (void)sortSubviews;
- (void)updateOffscreenOccurrences;
- (void)_recalculateOccurrenceRows;
- (struct CGRect)rectForOccurrence:(id)arg1;
- (double)_yValueForHour:(long long)arg1 minute:(long long)arg2;
- (double)RoundToScreenScale:(double)arg1;
- (double)RoundToScreenScaleForFloat:(double)arg1;
- (struct CGRect)RoundRectToScreenScaleForRect:(struct CGRect)arg1;
- (struct CGPoint)pointForDate:(double)arg1;
- (double)dateForPoint:(struct CGPoint)arg1;
- (BOOL)shouldReverseLayoutDirection;
@property(readonly, nonatomic) BOOL originIsUpperLeft;
@property(readonly, nonatomic) struct CGRect displayedRect;
@property(readonly, nonatomic) double timeWidth;
@property(readonly, nonatomic) double topPadding;
@property(readonly, nonatomic) double hourHeight;
- (id)maxNeighborsSortDescriptors;
- (id)heightSortDescriptors;
- (id)occurrenceRelativeToOccurrence:(id)arg1 forKeystroke:(unsigned short)arg2;
- (void)occurrencesRequireRelayout:(id)arg1;
- (void)_buildNeighborsForOccurrence:(id)arg1 withinOccurrences:(id)arg2;
- (void)removeOccurrence:(id)arg1;
- (id)makeOccurrenceWithEvent:(id)arg1 isEphemeral:(BOOL)arg2;
- (void)addOccurrence:(id)arg1;
- (void)clearSortedOccurrencesCache;
- (void)keyDown:(id)arg1;
- (BOOL)tabIntoSection:(BOOL)arg1;
- (void)selectOccurence:(id)arg1;
- (id)nextOccurrenceNotInThisDay:(BOOL)arg1;
- (id)firstOccurrenceForTabInDirectionForward:(BOOL)arg1;
- (BOOL)_isOccurrenceVisibleOnCanvas:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)menuForEvent:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)updateLayer;
- (void)updateAppearance;
@property(retain) NSDate *date;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)_layoutAll;
- (void)_layoutGridLines;
- (void)_updateGridlineColors;
- (void)setTimeIndicatorPosition:(double)arg1;
@property(readonly, copy) NSString *description;
- (void)_setupGridLines;
- (double)occurrenceRightInset;
- (BOOL)isOpaque;
- (void)invalidateAccessibilityRepresentations;
- (id)layerBackgroundColor;
- (void)dealloc;
- (id)init;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

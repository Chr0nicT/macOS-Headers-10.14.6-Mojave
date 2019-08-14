//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <CalendarUI/CalUIAccordionViewControllerDelegate-Protocol.h>

@class CalUIAccordionViewController, NSCalendar, NSDate, NSEvent, NSLayoutConstraint, NSLayoutGuide, NSString, NSTouchBarRangeBackdropView, NSTouchBarRangeView, NSView;
@protocol CalUIEventTimeViewControllerDelegate;

@interface CalUIEventTimeViewController : NSViewController <CalUIAccordionViewControllerDelegate>
{
    BOOL _allDay;
    id <CalUIEventTimeViewControllerDelegate> _delegate;
    NSDate *_startDate;
    NSDate *_endDate;
    CalUIAccordionViewController *_accordionViewController;
    NSView *_leadingScrollHandle;
    NSView *_trailingScrollHandle;
    NSTouchBarRangeView *_rangeView;
    NSTouchBarRangeBackdropView *_rangeBackdropView;
    unsigned long long _currentTouchType;
    NSEvent *_currentTouchEvent;
    double _distanceOfInitialTouchFromStartPosition;
    NSLayoutConstraint *_startIndexConstraint;
    NSLayoutConstraint *_endIndexConstraint;
    NSLayoutGuide *_startIndexOffsetGuide;
    NSLayoutGuide *_endIndexOffsetGuide;
    NSLayoutConstraint *_selectorWidthConstraint;
    NSCalendar *_calendar;
    NSDate *_zeroIndexDate;
}

+ (id)imageWithStripeColor:(id)arg1 secondaryColor:(id)arg2 size:(struct CGSize)arg3;
+ (id)minorTimeMarkStripeColor;
+ (id)majorTimeMarkStripeColor;
+ (id)segmentBackgroundImage;
+ (id)segmentFirstBackgroundImage;
+ (id)handleBackgroundColor;
@property(retain) NSDate *zeroIndexDate; // @synthesize zeroIndexDate=_zeroIndexDate;
@property(retain) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain) NSLayoutConstraint *selectorWidthConstraint; // @synthesize selectorWidthConstraint=_selectorWidthConstraint;
@property(retain) NSLayoutGuide *endIndexOffsetGuide; // @synthesize endIndexOffsetGuide=_endIndexOffsetGuide;
@property(retain) NSLayoutGuide *startIndexOffsetGuide; // @synthesize startIndexOffsetGuide=_startIndexOffsetGuide;
@property(retain) NSLayoutConstraint *endIndexConstraint; // @synthesize endIndexConstraint=_endIndexConstraint;
@property(retain) NSLayoutConstraint *startIndexConstraint; // @synthesize startIndexConstraint=_startIndexConstraint;
@property double distanceOfInitialTouchFromStartPosition; // @synthesize distanceOfInitialTouchFromStartPosition=_distanceOfInitialTouchFromStartPosition;
@property(retain) NSEvent *currentTouchEvent; // @synthesize currentTouchEvent=_currentTouchEvent;
@property unsigned long long currentTouchType; // @synthesize currentTouchType=_currentTouchType;
@property(retain) NSTouchBarRangeBackdropView *rangeBackdropView; // @synthesize rangeBackdropView=_rangeBackdropView;
@property(retain) NSTouchBarRangeView *rangeView; // @synthesize rangeView=_rangeView;
@property(retain) NSView *trailingScrollHandle; // @synthesize trailingScrollHandle=_trailingScrollHandle;
@property(retain) NSView *leadingScrollHandle; // @synthesize leadingScrollHandle=_leadingScrollHandle;
@property(retain) CalUIAccordionViewController *accordionViewController; // @synthesize accordionViewController=_accordionViewController;
@property BOOL allDay; // @synthesize allDay=_allDay;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property __weak id <CalUIEventTimeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)positionMultiplierFromLevel:(long long)arg1 toLevel:(long long)arg2;
- (id)viewOverlayAtIndex:(long long)arg1 level:(long long)arg2;
- (id)viewAtIndex:(long long)arg1 level:(long long)arg2;
- (double)maxViewSizeForLevel:(long long)arg1;
- (double)minViewSizeForLevel:(long long)arg1;
- (long long)maxLevel;
- (long long)minLevel;
- (long long)_segmentsForLevel:(long long)arg1;
- (double)_timeIntervalForLevel:(long long)arg1;
- (long long)_hoursInDay:(id)arg1;
- (BOOL)_shouldDoDSTHackForDate:(id)arg1 level:(long long)arg2;
- (id)_dateAtIndexAndOffset:(double)arg1 level:(long long)arg2;
- (double)_indexAndOffsetAtDate:(id)arg1 level:(long long)arg2;
- (id)_fontAtIndex:(long long)arg1 level:(long long)arg2;
- (id)_colorAtIndex:(long long)arg1 level:(long long)arg2;
- (id)_titleAtIndex:(long long)arg1 level:(long long)arg2;
- (double)_roundedIndexAndOffset:(double)arg1;
- (double)_offsetFromIndexAndOffset:(double)arg1;
- (long long)_indexFromIndexAndOffset:(double)arg1;
@property(nonatomic) double endIndexAndOffset;
@property(nonatomic) double startIndexAndOffset;
- (BOOL)_isSelectorTouchingTrailingHandle;
- (BOOL)_isSelectorTouchingLeadingHandle;
- (double)_indexAndOffsetOfTouch:(id)arg1;
- (BOOL)_isTouch:(id)arg1 inView:(id)arg2;
- (id)_touchForEvent:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)_handleTouchMovedEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (BOOL)_isTouchNearRangeHandle:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)initTouches;
- (void)updateSelector;
- (void)_updateVisibleRange;
- (void)updateView;
- (void)dateTimeFormatChanged;
- (void)viewFrameDidChange:(id)arg1;
- (id)_createScrollHandle;
- (void)initViews;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSMutableArray, NSString, SiriUIAcousticIDSpinner, SiriUIContentLabel;
@protocol SiriUISuggestionsViewDelegate;

__attribute__((visibility("hidden")))
@interface SiriUISuggestionsView : NSView
{
    SiriUIContentLabel *_headerLabel;
    SiriUIContentLabel *_oldHeaderLabel;
    SiriUIContentLabel *_subheaderLabel;
    SiriUIContentLabel *_largeSubheaderLabel;
    BOOL _firstSuggestionPresentation;
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    BOOL _useSmallText;
    NSMutableArray *_allConstraints;
    BOOL _springAnimateIn;
    NSString *_headerText;
    NSString *_subheaderText;
    NSString *_largeSubheaderText;
    NSColor *_textColor;
    id <SiriUISuggestionsViewDelegate> _delegate;
    struct CGPoint _contentOffset;
}

@property(nonatomic) __weak id <SiriUISuggestionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL springAnimateIn; // @synthesize springAnimateIn=_springAnimateIn;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(copy, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *largeSubheaderText; // @synthesize largeSubheaderText=_largeSubheaderText;
@property(copy, nonatomic) NSString *subheaderText; // @synthesize subheaderText=_subheaderText;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
@property(nonatomic) BOOL useSmallText;
- (void)_updateHeaderFontSize;
- (BOOL)isFlipped;
- (void)acousticIDSpinnerDidHide:(id)arg1;
- (double)_headerFontSize;
- (double)_suggestionFontSize;
- (double)_largeSubheaderFontSize;
- (double)_subheaderFontSize;
- (double)_headerToLargeSubheaderOffset;
- (double)_headerToSubheaderOffset;
- (unsigned long long)_numberOfSuggestionsToDisplay;
- (double)_suggestionSpacing;
- (void)hideAcousticIDSpinner;
- (void)_reallyShowAcousticIDSpinner;
- (void)showAcousticIDSpinner;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateHeaderOut;
- (void)_animateHeaderIn;
- (void)updateConstraints;
- (void)_loadLargeSubheaderViewIfNeeded;
- (void)_loadSubheaderViewIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end

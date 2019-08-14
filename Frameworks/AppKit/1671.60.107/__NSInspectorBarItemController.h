//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSComboBoxCellDataSource-Protocol.h>
#import <AppKit/NSInspectorBarItemController-Protocol.h>
#import <AppKit/NSMenuDelegate-Protocol.h>

@class NSColorWell, NSComboBox, NSInspectorBar, NSPopUpButton, NSSegmentedControl, NSString;
@protocol NSInspectorBarClient><NSTextInputClient;

@interface __NSInspectorBarItemController : NSObject <NSInspectorBarItemController, NSMenuDelegate, NSComboBoxCellDataSource>
{
    NSInspectorBar *_inspectorBar;
    id _client;
    NSString *_lastAction;
    id _lastActionConfig;
    NSPopUpButton *stylePopup;
    NSPopUpButton *fontFamilyPopup;
    NSPopUpButton *fontFacePopup;
    NSComboBox *fontSizeComboBox;
    NSColorWell *foregroundColorWell;
    NSColorWell *backgroundColorWell;
    NSSegmentedControl *textStyleSwitches;
    NSSegmentedControl *alignmentSwitches;
    NSPopUpButton *lineSpacingPopup;
    NSPopUpButton *listPopup;
    struct {
        unsigned int _interfaceLoaded:1;
        unsigned int _alignment:1;
        unsigned int _backgroundColor:1;
        unsigned int _multipleRanges:1;
        unsigned int _textStorage:1;
        unsigned int _typingAttributes:1;
        unsigned int _textView:1;
        unsigned int _styleInvalidated:1;
        unsigned int _userFontSectionInvalidated:1;
        unsigned int _mainFontSectionInvalidated:1;
        unsigned int _forceUpdatingTypeface:1;
        unsigned int _lineSpaceSheet:1;
        unsigned int _reserved:20;
    } _flags;
}

+ (id)favoriteFontSizes;
+ (id)recentsFontFamilyNames;
+ (id)loadedNib;
+ (id)nibBundle;
+ (id)nibName;
+ (id)keyForItemIdentifier:(id)arg1;
+ (id)supportedInspectorItemIdentifiers;
@property(retain) NSPopUpButton *listPopup; // @synthesize listPopup;
@property(retain) NSPopUpButton *lineSpacingPopup; // @synthesize lineSpacingPopup;
@property(retain) NSSegmentedControl *alignmentSwitches; // @synthesize alignmentSwitches;
@property(retain) NSSegmentedControl *textStyleSwitches; // @synthesize textStyleSwitches;
@property(retain) NSColorWell *backgroundColorWell; // @synthesize backgroundColorWell;
@property(retain) NSColorWell *foregroundColorWell; // @synthesize foregroundColorWell;
@property(retain) NSComboBox *fontSizeComboBox; // @synthesize fontSizeComboBox;
@property(retain) NSPopUpButton *fontFacePopup; // @synthesize fontFacePopup;
@property(retain) NSPopUpButton *fontFamilyPopup; // @synthesize fontFamilyPopup;
@property(retain) NSPopUpButton *stylePopup; // @synthesize stylePopup;
- (double)defaultLineHeightForFont:(id)arg1;
- (void)_doUserParagraphStyleLineHeightMultiple:(double)arg1 min:(double)arg2 max:(double)arg3 lineSpacing:(double)arg4 paragraphSpacingBefore:(double)arg5 after:(double)arg6 isFinal:(BOOL)arg7;
- (void)updateInspectorItemViewsWithIdentifiers:(id)arg1 fontFamilyName:(id)arg2 fontFaceName:(id)arg3 fontPointSize:(double)arg4 foregroundColor:(id)arg5 backgroundColor:(id)arg6 boldTrait:(BOOL)arg7 italicTrait:(BOOL)arg8 underlineStyle:(id)arg9 strikeThrough:(id)arg10 alignment:(unsigned long long)arg11 lineSpacingStyle:(id)arg12 textList:(id)arg13;
- (void)updateSelectedAttributes;
- (BOOL)inspectorBarItemCanBeDetached:(id)arg1;
- (id)viewForInspectorBarItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)supportedInspectorItemViewsDidLoad;
- (void)_loadNib;
- (void)_colorAction:(id)arg1;
- (void)_listAction:(id)arg1;
- (void)_lineSpacingAction:(id)arg1;
- (void)_alignmentAction:(id)arg1;
- (void)_fontStyleAction:(id)arg1;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)_updateMainFontSection;
- (void)_updateUserFontSection;
- (void)_updateRecentsFontSection;
- (void)fontSizeItemWasClicked:(id)arg1;
- (void)_fontSizeAction:(id)arg1;
- (void)_fontPopupAction:(id)arg1;
- (void)_updateStylePopup;
- (void)_stylePopupAction:(id)arg1;
- (id)convertAttributes:(id)arg1;
- (id)convertFont:(id)arg1;
- (void)_invalidationNotification:(id)arg1;
@property(readonly) id <NSInspectorBarClient><NSTextInputClient> client;
- (void)dealloc;
- (id)initWithInspectorBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

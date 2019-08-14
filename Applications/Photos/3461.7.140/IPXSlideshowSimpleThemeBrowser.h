//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class IPXSlideshowEditorController, IPXSlideshowThemeListView, IPXTextField, NSString, UXView;

@interface IPXSlideshowSimpleThemeBrowser : NSView <NSTableViewDataSource, NSTableViewDelegate>
{
    IPXTextField *_headerTextField;
    IPXSlideshowThemeListView *_themeList;
    UXView *_dividerLine;
    NSView *_centeredView;
    IPXSlideshowEditorController *_editorController;
}

+ (id)mediumTextAttributesOfSize:(double)arg1 color:(id)arg2;
+ (id)lightTextAttributesOfSize:(double)arg1 color:(id)arg2;
@property(nonatomic) __weak IPXSlideshowEditorController *editorController; // @synthesize editorController=_editorController;
- (void).cxx_destruct;
- (id)preferredFirstResponder;
- (void)resync;
- (void)setupParentConstraints;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

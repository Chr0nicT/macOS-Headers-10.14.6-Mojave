//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "LoadBlockedMessageContentBannerViewController.h"

@class NSButton, NSMutableArray, NSTextField;

@interface PassbookBannerViewController : LoadBlockedMessageContentBannerViewController
{
    NSTextField *_messageField;
    NSButton *_viewPassButton;
    NSMutableArray *_passes;
}

@property(retain, nonatomic) NSMutableArray *passes; // @synthesize passes=_passes;
@property(nonatomic) __weak NSButton *viewPassButton; // @synthesize viewPassButton=_viewPassButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
- (void).cxx_destruct;
- (void)showPasses:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)setWantsDisplay:(BOOL)arg1;
- (void)setContainer:(id)arg1;
- (BOOL)shouldDisplayToLoadBlockedContent;
- (void)dealloc;
- (void)_passbookBannerViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

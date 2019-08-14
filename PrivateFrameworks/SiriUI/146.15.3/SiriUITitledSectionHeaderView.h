//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SiriUI/NSCollectionViewElement-Protocol.h>
#import <SiriUI/SiriUIReusableView-Protocol.h>

@class NSString, NSTextField, SiriUISnippetViewController;

@interface SiriUITitledSectionHeaderView : NSView <NSCollectionViewElement, SiriUIReusableView>
{
    NSTextField *_headerTextField;
}

+ (id)elementKind;
+ (id)reuseIdentifier;
+ (double)defaultHeight;
@property __weak NSTextField *headerTextField; // @synthesize headerTextField=_headerTextField;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setStringValue:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (id)declaredLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1 alignment:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController;
@property(readonly) Class superclass;

@end

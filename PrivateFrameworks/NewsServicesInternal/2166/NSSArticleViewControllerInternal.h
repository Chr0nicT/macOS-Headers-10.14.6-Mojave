//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSSArticleInternal, NSSArticleView, UIActivityIndicatorView;

@interface NSSArticleViewControllerInternal : UIViewController
{
    BOOL _articleLoading;
    NSSArticleInternal *_article;
    NSSArticleView *_articleView;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) BOOL articleLoading; // @synthesize articleLoading=_articleLoading;
@property(retain, nonatomic) NSSArticleView *articleView; // @synthesize articleView=_articleView;
@property(retain, nonatomic) NSSArticleInternal *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (void)_tickleArticleView;
- (void)_tickleSpinner;
- (void)presentArticle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSpotlightIdentifier:(id)arg1;
- (id)initWithNotification:(id)arg1;
- (id)initWithArticle:(id)arg1;

@end

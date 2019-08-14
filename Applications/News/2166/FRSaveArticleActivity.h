//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class FRArticleViewHeadlineContext;
@protocol FRActivityTypeSaveDelegate;

@interface FRSaveArticleActivity : UIActivity
{
    BOOL _isSaved;
    FRArticleViewHeadlineContext *_headlineContext;
    long long _location;
    id <FRActivityTypeSaveDelegate> _delegate;
}

@property(retain, nonatomic) id <FRActivityTypeSaveDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isSaved; // @synthesize isSaved=_isSaved;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(retain, nonatomic) FRArticleViewHeadlineContext *headlineContext; // @synthesize headlineContext=_headlineContext;
- (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithHeadlineContext:(id)arg1;

@end

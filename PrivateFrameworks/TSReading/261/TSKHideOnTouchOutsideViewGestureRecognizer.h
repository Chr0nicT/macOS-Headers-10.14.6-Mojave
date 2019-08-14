//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <TSReading/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableSet, NSString, UIView;

@interface TSKHideOnTouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    UIView *mWatchView;
    NSMutableSet *mTargets;
}

+ (BOOL)isInFlight;
@property(nonatomic) UIView *watchView; // @synthesize watchView=mWatchView;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 watchView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, UIKBKeyViewAnimator, UIKBTree, UIView;
@protocol UIKeyboardKeyplaneTransitionDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeyplaneTransition : NSObject
{
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    UIKBTree *_keyboard;
    UIKBTree *_start;
    UIKBTree *_end;
    UIView *_startView;
    UIView *_endView;
    CDUnknownBlockType _completionBlock;
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
    BOOL _initiallyAtEnd;
    NSMutableArray *_transitionViews;
    UIKBKeyViewAnimator *_keyViewAnimator;
}

@property(retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator; // @synthesize keyViewAnimator=_keyViewAnimator;
@property(nonatomic) BOOL initiallyAtEnd; // @synthesize initiallyAtEnd=_initiallyAtEnd;
@property(nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) UIKBTree *keyboard; // @synthesize keyboard=_keyboard;
- (BOOL)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)finishWithProgress:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)transitionToFinalState:(id)arg1;
- (void)finalizeTransition;
- (void)removeAllAnimations;
- (void)updateWithProgress:(double)arg1;
- (void)cancelNonInteractiveAnimation;
- (void)runNonInteractivelyWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double nonInteractiveDuration;
- (void)commitTransitionRebuild;
- (void)addTransitionView:(id)arg1 startFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
@property(readonly, nonatomic) double endHeight;
@property(readonly, nonatomic) double startHeight;
- (void)dealloc;

@end

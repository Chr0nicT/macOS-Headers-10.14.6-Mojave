//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NAFuture, NSString;

@interface HUPreloadedTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    NAFuture *_completionFuture;
}

@property(readonly, nonatomic) NAFuture *completionFuture; // @synthesize completionFuture=_completionFuture;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


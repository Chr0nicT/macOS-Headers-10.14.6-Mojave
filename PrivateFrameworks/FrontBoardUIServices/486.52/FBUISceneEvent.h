//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext;

@interface FBUISceneEvent : NSObject
{
    FBSSceneTransitionContext *_transitionContext;
    CDUnknownBlockType _sender;
    BOOL _sent;
}

@property(readonly, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (void)sendWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)send;
- (void)dealloc;
- (id)initWithTransitionContext:(id)arg1 sender:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIFocusEngineJoystickGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _stickPosition;
    struct CGPoint _previousStickPosition;
}

@property(readonly, nonatomic) struct CGPoint previousStickPosition; // @synthesize previousStickPosition=_previousStickPosition;
@property(readonly, nonatomic) struct CGPoint stickPosition; // @synthesize stickPosition=_stickPosition;
- (void)_calculateStickPositionFromPresses:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldReceivePress:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

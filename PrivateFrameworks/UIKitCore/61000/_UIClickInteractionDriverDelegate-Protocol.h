//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol _UIClickInteractionDriving;

@protocol _UIClickInteractionDriverDelegate <NSObject>
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didPerformStateChange:(unsigned long long)arg2;
- (BOOL)clickDriverShouldBegin:(id <_UIClickInteractionDriving>)arg1;

@optional
- (BOOL)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldDelayGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didUpdateHighlightProgress:(double)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UITextGestureCluster.h>

__attribute__((visibility("hidden")))
@interface UITextGestureClusterLinkInteract : UITextGestureCluster
{
    BOOL _isTryingToHighlightLink;
}

- (BOOL)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelInteractionWithLink;
- (BOOL)tapOnLinkWithGesture:(id)arg1;
- (void)longDelayRecognizer:(id)arg1;
- (void)linkTapRecognizer:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (void)_resetForLink;
- (id)initWithView:(id)arg1;

@end

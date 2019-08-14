//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "TUCardPanScrollViewIgnorable-Protocol.h"

@protocol FRPageViewControllerScrollViewAccessibilityDelegate;

@interface FRPageViewControllerScrollView : UIScrollView <TUCardPanScrollViewIgnorable>
{
    id <FRPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;
}

@property(nonatomic) __weak id <FRPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void).cxx_destruct;
- (BOOL)accessibilityScroll:(long long)arg1;

@end

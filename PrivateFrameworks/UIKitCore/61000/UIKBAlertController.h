//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIAlertController.h>

@protocol UIKBAlertControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAlertController : UIAlertController
{
    id <UIKBAlertControllerDelegate> _kbDelegate;
}

@property(nonatomic) id <UIKBAlertControllerDelegate> kbDelegate; // @synthesize kbDelegate=_kbDelegate;
- (void)viewDidDisappear:(BOOL)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSString, NSView, _TtC21NotificationCenterApp22NotificationActionObjC;
@protocol _TtP21NotificationCenterApp23BannerExtensionDelegate_;

@interface _TtC21NotificationCenterApp29BannerExtensionViewController : NSViewController
{
    // Error parsing type: , name: action
    // Error parsing type: , name: model
    // Error parsing type: , name: response
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)handleCancelButtonPress;
- (id)initWithCoder:(id)arg1;
- (id)initWithBanner:(id)arg1 action:(id)arg2;
@property(nonatomic, readonly) NSString *expandedActionTitle;
@property(nonatomic, readonly) BOOL ready;
@property(nonatomic, readonly) NSView *firstResponder;
@property(nonatomic) __weak id <_TtP21NotificationCenterApp23BannerExtensionDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) _TtC21NotificationCenterApp22NotificationActionObjC *actionObjC;

@end

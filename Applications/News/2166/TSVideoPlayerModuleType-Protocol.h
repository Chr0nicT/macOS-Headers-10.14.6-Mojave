//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, TSAnalyticsReferral, TSNewsReferralItemWidgetVideoPlaylist, UIViewController;

@protocol TSVideoPlayerModuleType
- (UIViewController *)createViewControllerWithWidgetVideoPlaylist:(TSNewsReferralItemWidgetVideoPlaylist *)arg1 referral:(TSAnalyticsReferral *)arg2;
- (UIViewController *)createViewControllerWithArticleIDs:(NSArray *)arg1 referral:(TSAnalyticsReferral *)arg2;
@end

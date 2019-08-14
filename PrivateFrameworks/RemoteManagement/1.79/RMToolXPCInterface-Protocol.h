//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSSet, RMUserNotificationContext;

@protocol RMToolXPCInterface
- (void)removeNotificationWithContext:(RMUserNotificationContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)postNotificationWithContext:(RMUserNotificationContext *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)postWeeklyReportNotificationWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)rollupUsageData:(void (^)(NSError *))arg1;
- (void)fetchFamilyStatus:(void (^)(NSDictionary *))arg1;
- (void)requeryFamilyStatus:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setScreenTimeEnabled:(BOOL)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)gatherDataWithFullDetails:(BOOL)arg1 withCompletion:(void (^)(id, NSError *))arg2;
- (void)setInstalledApps:(NSSet *)arg1 completion:(void (^)(id, NSError *))arg2;
@end

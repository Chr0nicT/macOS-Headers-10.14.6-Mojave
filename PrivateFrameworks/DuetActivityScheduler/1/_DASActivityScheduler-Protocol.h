//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DuetActivityScheduler/NSObject-Protocol.h>

@class NSArray, NSDictionary, _DASActivity;

@protocol _DASActivityScheduler <NSObject>
- (void)updateActivity:(_DASActivity *)arg1 withParameters:(NSDictionary *)arg2;
- (void)activityCanceled:(_DASActivity *)arg1;
- (void)activityCompleted:(_DASActivity *)arg1;
- (void)submitActivities:(NSArray *)arg1;
- (void)submitActivity:(_DASActivity *)arg1;
- (void)handleEligibleActivities:(void (^)(NSArray *))arg1;

@optional
- (void)activityStarted:(_DASActivity *)arg1;
@end

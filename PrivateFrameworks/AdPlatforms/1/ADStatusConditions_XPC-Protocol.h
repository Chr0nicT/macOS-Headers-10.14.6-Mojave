//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString;

@protocol ADStatusConditions_XPC
- (void)isStatusConditionRegistered:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)clearStatusCondition:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setStatusCondition:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

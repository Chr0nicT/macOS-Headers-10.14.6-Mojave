//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXAction, CXCallSource, CXTransactionGroup, CXTransactionManager;

@protocol CXTransactionManagerDelegate <NSObject>
- (void)transactionManager:(CXTransactionManager *)arg1 transactionGroupCompleted:(CXTransactionGroup *)arg2;
- (void)transactionManager:(CXTransactionManager *)arg1 actionTimedOut:(CXAction *)arg2 forCallSource:(CXCallSource *)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssertionServices/NSObject-Protocol.h>

@class BKSProcessClient, BKSProcessExitContext;

@protocol BKSProcessClientDelegate <NSObject>
- (void)processAssertionExpirationImminentForClient:(BKSProcessClient *)arg1;
- (void)client:(BKSProcessClient *)arg1 processDidExitWithContext:(BKSProcessExitContext *)arg2 completion:(void (^)(void))arg3;
- (void)client:(BKSProcessClient *)arg1 processDidChangeDebuggingState:(BOOL)arg2;
- (void)client:(BKSProcessClient *)arg1 processDidChangeTaskState:(long long)arg2;
@end


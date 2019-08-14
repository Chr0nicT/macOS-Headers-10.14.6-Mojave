//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CommerceKit/NSObject-Protocol.h>

@class ISOperation, NSError, SSOperationProgress;

@protocol ISOperationDelegate <NSObject>

@optional
- (void)operationFinished:(ISOperation *)arg1;
- (void)operation:(ISOperation *)arg1 updatedProgress:(SSOperationProgress *)arg2;
- (void)operation:(ISOperation *)arg1 failedWithError:(NSError *)arg2;
@end

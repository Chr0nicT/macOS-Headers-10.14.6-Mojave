//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitHostAppProtocols/ROCKImpersonateable-Protocol.h>

@class NSString;

@protocol UHAAlertInterface <ROCKImpersonateable>
- (void)setMessage:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)dismissAlert;
- (void)beginSheetModalWithCompletion:(void (^)(long long))arg1;
- (void)addButton:(NSString *)arg1 enabled:(BOOL)arg2 identifier:(long long)arg3 destructive:(BOOL)arg4;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSWindow;

@protocol ABApplicationServices <NSObject>
- (void)showMCCConfigForAccountID:(NSString *)arg1;
- (void)showPasswordPanelModalForWindow:(NSWindow *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(NSString *, BOOL))arg3;
- (void)showContactWithUniqueId:(NSString *)arg1 shouldUnify:(BOOL)arg2;
@end

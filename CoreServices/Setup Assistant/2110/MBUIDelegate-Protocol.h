//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol MBUIDelegate <NSObject>
- (void)mbWebkitViewSetRightNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetRightNavigationButtonTitle:(NSString *)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonTitle:(NSString *)arg1;
- (void)mbWebkitViewSetWindowMessage:(NSString *)arg1;
- (void)mbWebkitViewSetWindowTitle:(NSString *)arg1;

@optional
- (void)mbWebkitViewSetAlternateNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetAlternateNavigationButtonTitle:(NSString *)arg1;
- (void)mbWebkitViewSetTermsConfirmDialogTitle:(NSString *)arg1;
- (void)mbWebkitViewTermsAndConditions:(NSArray *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)mbWebkitViewSaveFile:(NSString *)arg1 withLocalizedDisplayName:(NSString *)arg2 content:(NSString *)arg3;
- (void)mbWebkitViewSaveFile:(NSString *)arg1 content:(NSString *)arg2;
@end

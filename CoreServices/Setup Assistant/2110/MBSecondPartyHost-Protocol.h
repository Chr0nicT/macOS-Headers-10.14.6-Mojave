//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MBSecondPartyHost <NSObject>
- (void)setAssistantWindowDescription:(NSString *)arg1;
- (void)setAssistantWindowTitle:(NSString *)arg1;
- (void)setAssistantAlternateButtonAction:(void (^)(void))arg1;
- (void)setAssistantAlternateButtonTitle:(NSString *)arg1;
- (void)setAssistantAlternateButtonHidden:(BOOL)arg1;
- (void)setAssistantNextButtonAction:(void (^)(void))arg1;
- (void)setAssistantNextButtonTitle:(NSString *)arg1;
- (void)setAssistantNextButtonEnabled:(BOOL)arg1;
- (void)setAssistantPreviousButtonAction:(void (^)(void))arg1;
- (void)setAssistantPreviousButtonTitle:(NSString *)arg1;
- (void)setAssistantPreviousButtonEnabled:(BOOL)arg1;

@optional
- (void)secondPartySetupComplete;
- (void)setAssistantControlsEnabled:(BOOL)arg1;
@end

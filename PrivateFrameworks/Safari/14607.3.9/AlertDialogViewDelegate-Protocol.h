//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class AlertDialogView, NSString;

@protocol AlertDialogViewDelegate
- (void)didRejectAlertDialogView:(AlertDialogView *)arg1;
- (void)didAcceptAlertDialogView:(AlertDialogView *)arg1 withPromptResponse:(NSString *)arg2;
- (void)didDismissAlertDialogView:(AlertDialogView *)arg1;
@end

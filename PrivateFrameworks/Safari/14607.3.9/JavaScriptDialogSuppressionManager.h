//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface JavaScriptDialogSuppressionManager : NSObject
{
    BOOL _suppressing;
    NSDate *_dateLastDialogWasDismissed;
    double _monitoredIntervalForOfferingSuppression;
}

- (void).cxx_destruct;
- (void)_test_setMonitoredIntervalForOfferingSuppression:(double)arg1;
- (void)reset;
- (void)suppressDialogs;
- (void)didRunDialog;
- (BOOL)shouldOfferToSuppressDialogs;
- (BOOL)canRunDialog;
- (id)init;

@end

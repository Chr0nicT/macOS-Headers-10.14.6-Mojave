//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKSyncedFeatures : NSObject
{
    BOOL _isDigitalHealthDisabledInitialized;
    BOOL _isDigitalHealthDisabledPreviousResult;
    BOOL _isSingleDevice;
}

+ (id)sharedInstance;
- (id)description;
- (BOOL)isSupergreenDisabledForTransports:(long long)arg1;
- (BOOL)isSiriPortraitDisabled;
- (BOOL)isIDSMessageGatingDisabled;
- (BOOL)isDigitalHealthDisabledWithIsSingleDevice:(BOOL)arg1 forTransports:(long long)arg2;
- (id)init;

@end


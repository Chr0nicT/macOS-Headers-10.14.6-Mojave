//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADOptInStatusClient : NSObject
{
}

+ (id)sharedInstance;
- (id)advertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (void)advertisingIdentifierChanged:(CDUnknownBlockType)arg1;
- (void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshOptInStatus;
- (void)setOptInStatus:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


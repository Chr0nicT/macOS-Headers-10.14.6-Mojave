//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol IMEventListenerResponse <NSObject>
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic, getter=didSucceed) BOOL success;
@end


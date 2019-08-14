//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMCore/IMMessage.h>

@class IMServiceImpl;

@interface IMMessage (SocialAppsCoreAdditions)
@property(readonly, getter=isInvisibleInk) BOOL invisibleInk;
@property(readonly, getter=isAcknowledgment) BOOL acknowledgment;
- (BOOL)isStale;
- (BOOL)isAddressedTo:(id)arg1;
@property(nonatomic) BOOL nameFound;
@property(nonatomic) BOOL hasCheckedForName;
@property(readonly) IMServiceImpl *service;
@end

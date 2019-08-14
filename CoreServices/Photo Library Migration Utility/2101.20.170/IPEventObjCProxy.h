//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "IPAttributeProtocol-Protocol.h"
#import "KHEventInfoProtocol-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface IPEventObjCProxy : NSObject <IPAttributeProtocol, KHEventInfoProtocol>
{
    struct IPRoll *_event;
}

@property(readonly) NSArray *photoUids;
@property(readonly) NSArray *photos;
@property(readonly) NSDate *latestPhotoDate;
@property(readonly) NSDate *earliestPhotoDate;
@property(readonly) unsigned long long photoCount;
@property(readonly) NSString *keyPhotoUid;
@property(readonly) NSString *title;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSString *uid;
- (id)db;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (struct IPRoll *)event;
- (id)initWithEvent:(struct IPRoll *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

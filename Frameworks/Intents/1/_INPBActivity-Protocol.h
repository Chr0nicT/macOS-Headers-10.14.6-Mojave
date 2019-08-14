//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBActivity <NSObject>
+ (Class)activityDescriptorsType;
@property(readonly, nonatomic) BOOL hasActivityType;
@property(retain, nonatomic) _INPBString *activityType;
@property(readonly, nonatomic) unsigned long long activityDescriptorsCount;
@property(copy, nonatomic) NSArray *activityDescriptors;
- (_INPBString *)activityDescriptorsAtIndex:(unsigned long long)arg1;
- (void)addActivityDescriptors:(_INPBString *)arg1;
- (void)clearActivityDescriptors;
@end

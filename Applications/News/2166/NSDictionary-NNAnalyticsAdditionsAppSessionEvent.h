//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (NNAnalyticsAdditionsAppSessionEvent)
+ (id)na_dictionaryWithHeadlineViewEvent:(id)arg1;
+ (id)na_dictionaryWithAppSessionEvent:(id)arg1;
+ (id)_mutableDictionaryWithTimedEvent:(id)arg1;
+ (id)_mutableDictionaryWithEvent:(id)arg1;
- (unsigned long long)na_launchLocation;
- (id)na_sessionEvents;
- (id)na_appSessionUUID;
- (id)na_sourceChannelIdentifier;
- (id)na_headlineIdentifier;
- (BOOL)na_headlineWasScrolled;
- (id)na_endDate;
- (id)na_startDate;
- (id)na_uuid;
- (unsigned long long)na_type;
@end

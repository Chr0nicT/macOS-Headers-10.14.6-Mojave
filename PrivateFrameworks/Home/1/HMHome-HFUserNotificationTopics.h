//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMHome.h>

@class NSArray;

@interface HMHome (HFUserNotificationTopics)
+ (id)_hf_standaloneTopicNameForPrimaryServiceType:(id)arg1;
+ (id)_hf_groupedServiceTypeTopics;
- (id)hf_allObjectsAffectedByServiceTopic:(id)arg1;
- (id)hf_cameraProfilesAffectedByServiceTopic:(id)arg1;
- (id)hf_servicesAffectedByServiceTopic:(id)arg1;
- (id)hf_userNotificationTopicForObject:(id)arg1;
- (id)hf_userNotificationTopicForCameraProfile:(id)arg1;
- (id)hf_userNotificationTopicForService:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *hf_userNotificationServiceTopics;
- (id)_hf_accessoryTopics;
@end

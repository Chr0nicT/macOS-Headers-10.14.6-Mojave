//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICPAgentUserNotificationMatchPredicate : NSObject
{
    NSString *_matchingKeyPrefix;
}

+ (id)predicateWithMatchingKeyPrefix:(id)arg1;
@property(copy) NSString *matchingKeyPrefix; // @synthesize matchingKeyPrefix=_matchingKeyPrefix;
- (void).cxx_destruct;
- (BOOL)matchesUserNotification:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSString, PKCurrencyAmount;

@interface PKAccountServicingEvent : NSObject <NSSecureCoding, PKRecordObject>
{
    NSString *_identifier;
    unsigned long long _status;
    unsigned long long _activityType;
    NSString *_activityIdentifier;
    NSDate *_openDate;
    NSDate *_lastUpdatedDate;
    PKCurrencyAmount *_amount;
    NSString *_reasonCode;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *reasonCode; // @synthesize reasonCode=_reasonCode;
@property(copy, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(copy, nonatomic) NSDate *openDate; // @synthesize openDate=_openDate;
@property(copy, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

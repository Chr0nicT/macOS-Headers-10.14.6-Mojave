//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFObject-Protocol.h>
#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class HMFMACAddress, NSArray, NSString;

@interface HMFWiFiNetworkInfo : HMFObject <HMFObject, NSCopying, NSSecureCoding>
{
    HMFMACAddress *_MACAddress;
    NSString *_SSID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *SSID; // @synthesize SSID=_SSID;
@property(readonly, copy) HMFMACAddress *MACAddress; // @synthesize MACAddress=_MACAddress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToNetworkInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithMACAddress:(id)arg1 SSID:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

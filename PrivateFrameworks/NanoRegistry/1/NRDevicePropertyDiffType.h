//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NRDevicePropertyDiff, NRPBDevicePropertyDiffType;

@interface NRDevicePropertyDiffType : NSObject <NSCopying, NSSecureCoding>
{
    NRDevicePropertyDiff *_diff;
    unsigned long long _changeType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NRDevicePropertyDiff *diff; // @synthesize diff=_diff;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NRPBDevicePropertyDiffType *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2;

@end

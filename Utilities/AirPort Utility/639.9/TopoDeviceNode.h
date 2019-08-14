//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TopoNode_SettingsProtocol.h"

#import "NSSecureCoding-Protocol.h"

@class NSMutableArray;

@interface TopoDeviceNode : TopoNode_SettingsProtocol <NSSecureCoding>
{
    int _configReadStatus;
    int _discoveryStatus;
    unsigned int _ipv4Address;
    unsigned int _ipv4Mask;
    NSMutableArray *_passwordAttemptList;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int discoveryStatus; // @synthesize discoveryStatus=_discoveryStatus;
@property(nonatomic) int configReadStatus; // @synthesize configReadStatus=_configReadStatus;
@property(nonatomic) unsigned int ipv4Mask; // @synthesize ipv4Mask=_ipv4Mask;
@property(nonatomic) unsigned int ipv4Address; // @synthesize ipv4Address=_ipv4Address;
- (unsigned long long)possiblePasswordCount;
- (id)getNextPossiblePassword;
- (void)recordPossiblePasswordIfUnconnected:(id)arg1;
@property(readonly, nonatomic) BOOL isMissing;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

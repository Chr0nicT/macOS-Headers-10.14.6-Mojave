//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WirelessProximity/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface WPCharacteristic : NSObject <NSSecureCoding>
{
    NSUUID *_uuid;
    unsigned long long _properties;
    unsigned long long _permissions;
    NSData *_data;
    long long _writeType;
}

+ (BOOL)supportsSecureCoding;
@property long long writeType; // @synthesize writeType=_writeType;
@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned long long permissions; // @synthesize permissions=_permissions;
@property unsigned long long properties; // @synthesize properties=_properties;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

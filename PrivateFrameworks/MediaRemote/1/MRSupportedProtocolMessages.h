//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding>
{
    unsigned long long _lastSupportedMessageType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long lastSupportedMessageType; // @synthesize lastSupportedMessageType=_lastSupportedMessageType;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isSupported:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastSupportedMessageType:(unsigned long long)arg1;

@end


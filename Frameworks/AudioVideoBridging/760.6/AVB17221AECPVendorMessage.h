//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AECPMessage.h>

@class NSData;

@interface AVB17221AECPVendorMessage : AVB17221AECPMessage
{
    unsigned long long protocolID;
    NSData *protocolSpecificData;
}

@property(copy) NSData *protocolSpecificData; // @synthesize protocolSpecificData;
@property unsigned long long protocolID; // @synthesize protocolID;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

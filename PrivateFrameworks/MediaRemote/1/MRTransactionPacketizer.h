//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject
{
    NSMutableArray *_outgoingPackets;
    NSMutableDictionary *_incomingPackets;
}

- (void).cxx_destruct;
- (void)unpacketize:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isEmpty;

@end


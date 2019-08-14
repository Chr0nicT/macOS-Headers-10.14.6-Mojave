//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPTCPInfo;

@protocol _CPTuscanyConnectionInfo <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSDictionary *tcpInfo;
@property(nonatomic) unsigned int initialBytesLeftOver;
@property(nonatomic) BOOL isTFOProbeSucceeded;
@property(nonatomic) int tunnelConnectionError;
@property(nonatomic) double timeToFirstByte;
@property(nonatomic) double timeIntervalSinceLastUsage;
@property(nonatomic) unsigned int minimumRTT;
@property(nonatomic) int interfaceType;
@property(nonatomic) int IPType;
@property(nonatomic) BOOL TFOsucceeded;
@property(nonatomic) double connectionDelay;
@property(nonatomic) double firstTxByteDelay;
@property(nonatomic) double firstTxByteTimeStamp;
@property(copy, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property(nonatomic) unsigned int multipathPrimarySubflowInterfaceIndex;
@property(nonatomic) unsigned int multipathConnectedSubflowCount;
@property(nonatomic) unsigned int multipathSubflowCount;
@property(nonatomic) BOOL isMultipath;
@property(copy, nonatomic) NSString *edgeAddress;
@property(nonatomic) int edgeType;
@property(nonatomic) double fallbackDelay;
@property(nonatomic) int fallbackReasonCategory;
@property(nonatomic) int fallbackReason;
@property(nonatomic) int pathType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (void)setTcpInfo:(_CPTCPInfo *)arg1 forKey:(NSString *)arg2;
- (BOOL)getTcpInfo:(id *)arg1 forKey:(NSString *)arg2;
- (void)setMultipathSubflowSwitchCounts:(int)arg1 forKey:(NSString *)arg2;
- (BOOL)getMultipathSubflowSwitchCounts:(int *)arg1 forKey:(NSString *)arg2;
@end

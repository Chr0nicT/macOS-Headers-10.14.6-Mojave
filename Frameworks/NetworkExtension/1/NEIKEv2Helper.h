//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NEIKEv2Helper : NSObject
{
}

+ (id)createChildConfigFromProtocol:(id)arg1;
+ (id)createIKEConfigFromProtocol:(id)arg1 ifIndex:(unsigned int)arg2 options:(id)arg3 serverAddress:(id)arg4 enableBlackHoleDetection:(BOOL)arg5;
+ (id)createIPv6SettingsFromTunnelConfig:(id)arg1 childConfig:(id)arg2;
+ (id)createIPv4SettingsFromTunnelConfig:(id)arg1 childConfig:(id)arg2;
+ (id)createRouteArrayFromTunnelConfig:(id)arg1 childConfig:(id)arg2 gatewayAddress:(id)arg3 isIPv4:(BOOL)arg4;
+ (id)createDNSSettingsFromTunnelConfig:(id)arg1;
+ (id)getDNSDomainsFromTunnelConfig:(id)arg1;
+ (BOOL)getBoolFromTunnelConfig:(id)arg1 key:(id)arg2;
+ (id)getAddressFromTunnelConfig:(id)arg1 key:(id)arg2 valueType:(id)arg3 outputArray:(id)arg4;
+ (BOOL)getStatusFromNotification:(unsigned int)arg1 status:(int *)arg2 isConfig:(char *)arg3 isRedirected:(char *)arg4 isSocketError:(char *)arg5 isAdditionalServerAddresses:(char *)arg6;
+ (BOOL)getDPDAttributesForMode:(long long)arg1 isWakeUp:(BOOL)arg2 isNAT:(BOOL)arg3 retry:(unsigned int *)arg4 timeout:(unsigned long long *)arg5 frequency:(unsigned int *)arg6;
+ (id)getIdentifierType:(id)arg1;

@end

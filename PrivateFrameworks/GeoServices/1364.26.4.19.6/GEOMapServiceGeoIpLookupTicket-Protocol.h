//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceGeoIpLookupTicket <NSObject>
- (void)cancel;
- (void)submitWithHandler:(void (^)(GeoIpLookupResult *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(BOOL))arg3 handlerQueue:(NSObject<OS_dispatch_queue> *)arg4;
@end

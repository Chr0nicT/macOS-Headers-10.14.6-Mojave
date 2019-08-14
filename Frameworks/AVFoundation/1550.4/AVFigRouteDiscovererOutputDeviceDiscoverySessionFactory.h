//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVOutputDeviceDiscoverySessionFactory-Protocol.h>

@class NSString;
@protocol AVFigRouteDiscovererFactory;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory>
{
    id <AVFigRouteDiscovererFactory> _routeDiscovererFactory;
}

+ (void)initialize;
@property(readonly, nonatomic) id <AVFigRouteDiscovererFactory> routeDiscovererFactory; // @synthesize routeDiscovererFactory=_routeDiscovererFactory;
- (id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithRouteDiscovererFactory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

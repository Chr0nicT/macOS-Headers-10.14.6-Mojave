//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONavigationTransitStopSummary;

@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying>
{
    unsigned long long _lineID;
    double _scheduledArrival;
    double _scheduledDeparture;
    GEONavigationTransitStopSummary *_stopFrom;
    GEONavigationTransitStopSummary *_stopTo;
    struct {
        unsigned int lineID:1;
        unsigned int scheduledArrival:1;
        unsigned int scheduledDeparture:1;
    } _has;
}

@property(retain, nonatomic) GEONavigationTransitStopSummary *stopTo; // @synthesize stopTo=_stopTo;
@property(retain, nonatomic) GEONavigationTransitStopSummary *stopFrom; // @synthesize stopFrom=_stopFrom;
@property(nonatomic) double scheduledArrival; // @synthesize scheduledArrival=_scheduledArrival;
@property(nonatomic) double scheduledDeparture; // @synthesize scheduledDeparture=_scheduledDeparture;
@property(nonatomic) unsigned long long lineID; // @synthesize lineID=_lineID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasStopTo;
@property(readonly, nonatomic) BOOL hasStopFrom;
@property(nonatomic) BOOL hasScheduledArrival;
@property(nonatomic) BOOL hasScheduledDeparture;
@property(nonatomic) BOOL hasLineID;
- (id)initWithTransitTripRouteStep:(id)arg1 originSummary:(id)arg2 destinationSummary:(id)arg3;

@end

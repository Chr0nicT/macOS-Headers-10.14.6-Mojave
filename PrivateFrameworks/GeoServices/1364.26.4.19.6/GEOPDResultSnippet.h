//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPriceDescription, GEOPDRating, NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultSnippet : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_category;
    NSMutableArray *_childPlaces;
    unsigned int _distanceDisplayThreshold;
    NSString *_locationString;
    NSString *_name;
    GEOPDPriceDescription *_priceDescription;
    GEOPDRating *_priceRange;
    struct {
        unsigned int distanceDisplayThreshold:1;
    } _has;
}

+ (Class)childPlaceType;
+ (id)resultSnippetForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOPDPriceDescription *priceDescription; // @synthesize priceDescription=_priceDescription;
@property(retain, nonatomic) NSMutableArray *childPlaces; // @synthesize childPlaces=_childPlaces;
@property(nonatomic) unsigned int distanceDisplayThreshold; // @synthesize distanceDisplayThreshold=_distanceDisplayThreshold;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(retain, nonatomic) GEOPDRating *priceRange; // @synthesize priceRange=_priceRange;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPriceDescription;
- (id)childPlaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)childPlacesCount;
- (void)addChildPlace:(id)arg1;
- (void)clearChildPlaces;
@property(nonatomic) BOOL hasDistanceDisplayThreshold;
@property(readonly, nonatomic) BOOL hasLocationString;
@property(readonly, nonatomic) BOOL hasPriceRange;
@property(readonly, nonatomic) BOOL hasCategory;
@property(readonly, nonatomic) BOOL hasName;

@end

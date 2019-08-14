//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _retainSearchTime;
    NSMutableArray *_sections;
    NSMutableArray *_sortPriorityMappings;
    BOOL _enableRap;
    BOOL _shouldDisplayNoResults;
    struct {
        unsigned int retainSearchTime:1;
        unsigned int enableRap:1;
        unsigned int shouldDisplayNoResults:1;
    } _has;
}

+ (Class)sortPriorityMappingType;
+ (Class)sectionsType;
@property(retain, nonatomic) NSMutableArray *sortPriorityMappings; // @synthesize sortPriorityMappings=_sortPriorityMappings;
@property(nonatomic) unsigned int retainSearchTime; // @synthesize retainSearchTime=_retainSearchTime;
@property(nonatomic) BOOL shouldDisplayNoResults; // @synthesize shouldDisplayNoResults=_shouldDisplayNoResults;
@property(nonatomic) BOOL enableRap; // @synthesize enableRap=_enableRap;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
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
- (id)sortPriorityMappingAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortPriorityMappingsCount;
- (void)addSortPriorityMapping:(id)arg1;
- (void)clearSortPriorityMappings;
@property(nonatomic) BOOL hasRetainSearchTime;
@property(nonatomic) BOOL hasShouldDisplayNoResults;
@property(nonatomic) BOOL hasEnableRap;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)arg1;
- (void)clearSections;

@end

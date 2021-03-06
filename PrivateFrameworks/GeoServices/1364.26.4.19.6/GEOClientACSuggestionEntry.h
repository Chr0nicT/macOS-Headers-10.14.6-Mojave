//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOClientACSuggestionEntry : PBCodable <NSCopying>
{
    double _contactRelevanceScore;
    double _fractionOfMatch;
    double _mapsSuggestionsContactRevelanceScore;
    double _mapsSuggestionsIsTouristScore;
    double _mapsSuggestionsPoiRevelanceScore;
    int _age;
    int _distanceToSuggestion;
    int _peopleSuggesterRank;
    int _poiOpenState;
    int _serverEntryType;
    int _suggestionType;
    BOOL _isFavorite;
    BOOL _matchedUsingAddress;
    BOOL _matchedUsingEventName;
    BOOL _matchedUsingLabel;
    BOOL _matchedUsingName;
    BOOL _matchedUsingOrganization;
    BOOL _shownToUser;
    struct {
        unsigned int contactRelevanceScore:1;
        unsigned int fractionOfMatch:1;
        unsigned int mapsSuggestionsContactRevelanceScore:1;
        unsigned int mapsSuggestionsIsTouristScore:1;
        unsigned int mapsSuggestionsPoiRevelanceScore:1;
        unsigned int age:1;
        unsigned int distanceToSuggestion:1;
        unsigned int peopleSuggesterRank:1;
        unsigned int poiOpenState:1;
        unsigned int serverEntryType:1;
        unsigned int suggestionType:1;
        unsigned int isFavorite:1;
        unsigned int matchedUsingAddress:1;
        unsigned int matchedUsingEventName:1;
        unsigned int matchedUsingLabel:1;
        unsigned int matchedUsingName:1;
        unsigned int matchedUsingOrganization:1;
        unsigned int shownToUser:1;
    } _has;
}

@property(nonatomic) double mapsSuggestionsIsTouristScore; // @synthesize mapsSuggestionsIsTouristScore=_mapsSuggestionsIsTouristScore;
@property(nonatomic) double mapsSuggestionsPoiRevelanceScore; // @synthesize mapsSuggestionsPoiRevelanceScore=_mapsSuggestionsPoiRevelanceScore;
@property(nonatomic) double mapsSuggestionsContactRevelanceScore; // @synthesize mapsSuggestionsContactRevelanceScore=_mapsSuggestionsContactRevelanceScore;
@property(nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) int peopleSuggesterRank; // @synthesize peopleSuggesterRank=_peopleSuggesterRank;
@property(nonatomic) BOOL matchedUsingEventName; // @synthesize matchedUsingEventName=_matchedUsingEventName;
@property(nonatomic) BOOL matchedUsingLabel; // @synthesize matchedUsingLabel=_matchedUsingLabel;
@property(nonatomic) BOOL matchedUsingAddress; // @synthesize matchedUsingAddress=_matchedUsingAddress;
@property(nonatomic) BOOL matchedUsingOrganization; // @synthesize matchedUsingOrganization=_matchedUsingOrganization;
@property(nonatomic) BOOL matchedUsingName; // @synthesize matchedUsingName=_matchedUsingName;
@property(nonatomic) double contactRelevanceScore; // @synthesize contactRelevanceScore=_contactRelevanceScore;
@property(nonatomic) int distanceToSuggestion; // @synthesize distanceToSuggestion=_distanceToSuggestion;
@property(nonatomic) double fractionOfMatch; // @synthesize fractionOfMatch=_fractionOfMatch;
@property(nonatomic) BOOL shownToUser; // @synthesize shownToUser=_shownToUser;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMapsSuggestionsIsTouristScore;
@property(nonatomic) BOOL hasMapsSuggestionsPoiRevelanceScore;
@property(nonatomic) BOOL hasMapsSuggestionsContactRevelanceScore;
- (int)StringAsPoiOpenState:(id)arg1;
- (id)poiOpenStateAsString:(int)arg1;
@property(nonatomic) BOOL hasPoiOpenState;
@property(nonatomic) int poiOpenState; // @synthesize poiOpenState=_poiOpenState;
@property(nonatomic) BOOL hasIsFavorite;
- (int)StringAsServerEntryType:(id)arg1;
- (id)serverEntryTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasServerEntryType;
@property(nonatomic) int serverEntryType; // @synthesize serverEntryType=_serverEntryType;
@property(nonatomic) BOOL hasAge;
@property(nonatomic) int age; // @synthesize age=_age;
@property(nonatomic) BOOL hasPeopleSuggesterRank;
@property(nonatomic) BOOL hasMatchedUsingEventName;
@property(nonatomic) BOOL hasMatchedUsingLabel;
@property(nonatomic) BOOL hasMatchedUsingAddress;
@property(nonatomic) BOOL hasMatchedUsingOrganization;
@property(nonatomic) BOOL hasMatchedUsingName;
@property(nonatomic) BOOL hasContactRelevanceScore;
@property(nonatomic) BOOL hasDistanceToSuggestion;
@property(nonatomic) BOOL hasFractionOfMatch;
@property(nonatomic) BOOL hasShownToUser;
- (int)StringAsSuggestionType:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSuggestionType;
@property(nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;

@end


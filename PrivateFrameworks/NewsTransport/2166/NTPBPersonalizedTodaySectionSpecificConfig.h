//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable <NSCopying>
{
    unsigned long long _maxArticlesShown;
    NSMutableArray *_mandatoryArticles;
    NSMutableArray *_personalizedArticles;
    CDStruct_df5cdcef _has;
}

+ (Class)personalizedArticlesType;
+ (Class)mandatoryArticlesType;
@property(nonatomic) unsigned long long maxArticlesShown; // @synthesize maxArticlesShown=_maxArticlesShown;
@property(retain, nonatomic) NSMutableArray *personalizedArticles; // @synthesize personalizedArticles=_personalizedArticles;
@property(retain, nonatomic) NSMutableArray *mandatoryArticles; // @synthesize mandatoryArticles=_mandatoryArticles;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMaxArticlesShown;
- (id)personalizedArticlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizedArticlesCount;
- (void)addPersonalizedArticles:(id)arg1;
- (void)clearPersonalizedArticles;
- (id)mandatoryArticlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mandatoryArticlesCount;
- (void)addMandatoryArticles:(id)arg1;
- (void)clearMandatoryArticles;
- (void)dealloc;

@end

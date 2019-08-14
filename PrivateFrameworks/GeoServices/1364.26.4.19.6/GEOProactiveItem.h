//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOProactiveItem : PBCodable <NSCopying>
{
    int _proactiveItemType;
    int _timeSinceStart;
    BOOL _deleted;
    BOOL _edited;
    BOOL _shared;
    BOOL _tapped;
    BOOL _visible;
    struct {
        unsigned int proactiveItemType:1;
        unsigned int timeSinceStart:1;
        unsigned int deleted:1;
        unsigned int edited:1;
        unsigned int shared:1;
        unsigned int tapped:1;
        unsigned int visible:1;
    } _has;
}

@property(nonatomic) BOOL deleted; // @synthesize deleted=_deleted;
@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
@property(nonatomic) BOOL shared; // @synthesize shared=_shared;
@property(nonatomic) BOOL tapped; // @synthesize tapped=_tapped;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDeleted;
@property(nonatomic) BOOL hasEdited;
@property(nonatomic) BOOL hasShared;
@property(nonatomic) BOOL hasTapped;
@property(nonatomic) BOOL hasVisible;
@property(nonatomic) BOOL hasTimeSinceStart;
@property(nonatomic) int timeSinceStart; // @synthesize timeSinceStart=_timeSinceStart;
- (int)StringAsProactiveItemType:(id)arg1;
- (id)proactiveItemTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasProactiveItemType;
@property(nonatomic) int proactiveItemType; // @synthesize proactiveItemType=_proactiveItemType;

@end

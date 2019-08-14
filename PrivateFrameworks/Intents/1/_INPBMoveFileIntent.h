//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMoveFileIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBMoveFileIntent : PBCodable <_INPBMoveFileIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _entityTypes;
    struct {
        unsigned int destinationType:1;
        unsigned int sourceType:1;
    } _has;
    int _destinationType;
    int _sourceType;
    _INPBString *_destinationName;
    NSArray *_entityNames;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_properties;
    _INPBString *_sourceName;
}

+ (Class)propertiesType;
+ (Class)entityNameType;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) _INPBString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *entityNames; // @synthesize entityNames=_entityNames;
@property(nonatomic) int destinationType; // @synthesize destinationType=_destinationType;
@property(retain, nonatomic) _INPBString *destinationName; // @synthesize destinationName=_destinationName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsSourceType:(id)arg1;
- (id)sourceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSourceType;
@property(readonly, nonatomic) BOOL hasSourceName;
- (id)propertiesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long propertiesCount;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (int)StringAsEntityTypes:(id)arg1;
- (id)entityTypesAsString:(int)arg1;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entityTypesCount;
- (void)addEntityType:(int)arg1;
- (void)clearEntityTypes;
@property(readonly, nonatomic) int *entityTypes;
- (void)setEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)entityNameAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entityNamesCount;
- (void)addEntityName:(id)arg1;
- (void)clearEntityNames;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDestinationType;
@property(readonly, nonatomic) BOOL hasDestinationName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

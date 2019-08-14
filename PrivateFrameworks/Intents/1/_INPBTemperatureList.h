//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTemperatureList-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBTemperatureList : PBCodable <_INPBTemperatureList, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBCondition *_condition;
    NSArray *_temperatures;
}

+ (Class)temperatureType;
@property(copy, nonatomic) NSArray *temperatures; // @synthesize temperatures=_temperatures;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)temperatureAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long temperaturesCount;
- (void)addTemperature:(id)arg1;
- (void)clearTemperatures;
@property(readonly, nonatomic) BOOL hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartWorkoutIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBDouble, _INPBIntentMetadata;

@interface _INPBStartWorkoutIntent : PBCodable <_INPBStartWorkoutIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isOpenEnded:1;
        unsigned int workoutGoalUnitType:1;
        unsigned int workoutLocationType:1;
    } _has;
    BOOL _isOpenEnded;
    int _workoutGoalUnitType;
    int _workoutLocationType;
    _INPBDouble *_goalValue;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_workoutName;
}

@property(retain, nonatomic) _INPBDataString *workoutName; // @synthesize workoutName=_workoutName;
@property(nonatomic) int workoutLocationType; // @synthesize workoutLocationType=_workoutLocationType;
@property(nonatomic) int workoutGoalUnitType; // @synthesize workoutGoalUnitType=_workoutGoalUnitType;
@property(nonatomic) BOOL isOpenEnded; // @synthesize isOpenEnded=_isOpenEnded;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDouble *goalValue; // @synthesize goalValue=_goalValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasWorkoutName;
- (int)StringAsWorkoutLocationType:(id)arg1;
- (id)workoutLocationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasWorkoutLocationType;
- (int)StringAsWorkoutGoalUnitType:(id)arg1;
- (id)workoutGoalUnitTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasWorkoutGoalUnitType;
@property(nonatomic) BOOL hasIsOpenEnded;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasGoalValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeContent-Protocol.h>

@class NSArray, NSString, _INPBHomeFilter;

@interface _INPBHomeContent : PBCodable <_INPBHomeContent, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_actions;
    _INPBHomeFilter *_filter;
}

+ (Class)actionsType;
@property(retain, nonatomic) _INPBHomeFilter *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasFilter;
- (id)actionsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long actionsCount;
- (void)addActions:(id)arg1;
- (void)clearActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

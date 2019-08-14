//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSArray;

@interface INHomeFilter : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_entityIdentifiers;
    INSpeakableString *_home;
    INSpeakableString *_scene;
    INSpeakableString *_homeZone;
    INSpeakableString *_group;
    INSpeakableString *_room;
    INSpeakableString *_accessory;
    INSpeakableString *_service;
    long long _entityType;
    long long _serviceType;
    long long _subServiceType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) long long subServiceType; // @synthesize subServiceType=_subServiceType;
@property(readonly) long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly) long long entityType; // @synthesize entityType=_entityType;
@property(readonly, copy) INSpeakableString *service; // @synthesize service=_service;
@property(readonly, copy) INSpeakableString *accessory; // @synthesize accessory=_accessory;
@property(readonly, copy) INSpeakableString *room; // @synthesize room=_room;
@property(readonly, copy) INSpeakableString *group; // @synthesize group=_group;
@property(readonly, copy) INSpeakableString *homeZone; // @synthesize homeZone=_homeZone;
@property(readonly, copy) INSpeakableString *scene; // @synthesize scene=_scene;
@property(readonly, copy) INSpeakableString *home; // @synthesize home=_home;
@property(readonly, copy) NSArray *entityIdentifiers; // @synthesize entityIdentifiers=_entityIdentifiers;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11;

@end

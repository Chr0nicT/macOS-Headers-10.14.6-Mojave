//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateDatabaseSchema : NSObject
{
    NSDictionary *_zoneSchemasByClientName;
    NSDictionary *_zoneSchemasByServerName;
    NSArray *_defaultZoneSchemas;
}

+ (id)databaseSchemaWithZones:(id)arg1;
- (void).cxx_destruct;
- (void)enumerateDefaultZoneSchemasWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateZoneSchemasWithBlock:(CDUnknownBlockType)arg1;
- (id)schemaForZoneContainingServerRecordID:(id)arg1;
- (id)schemaForZoneContainingClientRecordID:(id)arg1;
- (id)schemaForZoneWithServerName:(id)arg1;
- (id)schemaForZoneWithClientName:(id)arg1;
- (id)initWithSchemaDictionary:(id)arg1;
- (id)initWithZoneSchemas:(id)arg1;
- (id)init;

@end


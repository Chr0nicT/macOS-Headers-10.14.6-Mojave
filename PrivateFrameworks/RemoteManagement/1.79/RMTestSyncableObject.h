//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

#import <RemoteManagement/RMUniquelySerializableManagedObject-Protocol.h>

@class NSSet, NSString;

@interface RMTestSyncableObject : RMUniquedManagedObject <RMUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)delete;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enabled; // @dynamic enabled;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *subobjects; // @dynamic subobjects;
@property(readonly) Class superclass;

@end

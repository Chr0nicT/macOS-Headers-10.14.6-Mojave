//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSMutableDictionary, NSSaveChangesRequest, NSSet, NSXPCStore;

__attribute__((visibility("hidden")))
@interface NSXPCSaveRequestContext : NSObject
{
    NSXPCStore *_store;
    NSSaveChangesRequest *_request;
    NSDictionary *_metadata;
    NSManagedObjectContext *_context;
    NSMutableDictionary *_changeCache;
    unsigned long long _interrupts;
    BOOL _forceUpdates;
}

@property(nonatomic) unsigned long long interrupts; // @synthesize interrupts=_interrupts;
@property(readonly, nonatomic) BOOL forceUpdates; // @synthesize forceUpdates=_forceUpdates;
- (id)newEncodedSaveRequest;
- (id)_encodeObjectsForSave:(id)arg1 forDelete:(BOOL)arg2;
- (id)_encodeObjectValues:(id)arg1 options:(unsigned long long)arg2;
- (id)_cacheNodePropertiesFromObject:(id)arg1;
@property(readonly, nonatomic) NSSet *rowsToDelete;
@property(readonly, nonatomic) NSDictionary *changeCache;
- (id)rowForID:(id)arg1;
- (void)_updateRollbackCacheForObjectWithID:(id)arg1 relationship:(id)arg2 withValuesFrom:(id)arg3;
- (void)_addRowForInsertOrUpdate:(id)arg1;
- (id)managedObjectContext;
- (id)request;
- (void)dealloc;
- (id)initForStore:(id)arg1 request:(id)arg2 metadata:(id)arg3 forceInsertsToUpdates:(BOOL)arg4 context:(id)arg5;

@end

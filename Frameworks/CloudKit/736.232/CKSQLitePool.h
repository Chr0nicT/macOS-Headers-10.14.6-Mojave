//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface CKSQLitePool : NSObject
{
    BOOL _traced;
    BOOL _drainScheduled;
    CDUnknownBlockType _factory;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_dbs;
}

@property(nonatomic) BOOL drainScheduled; // @synthesize drainScheduled=_drainScheduled;
@property(retain, nonatomic) NSMutableArray *dbs; // @synthesize dbs=_dbs;
@property(nonatomic) BOOL traced; // @synthesize traced=_traced;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (void)_drain;
- (void)_scheduleDrain;
- (void)_closeDatabase:(id)arg1;
- (id)_openDatabaseWithError:(id *)arg1;
- (void)performWithDatabase:(CDUnknownBlockType)arg1;
- (BOOL)performWithDatabase:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)closeAll;
- (void)releaseDatabase:(id)arg1;
- (id)acquireDatabaseWithError:(id *)arg1;
- (id)acquireDatabase:(BOOL)arg1;
- (id)_acquireDatabaseWithError:(id *)arg1;
- (id)initWithFactory:(CDUnknownBlockType)arg1;
- (id)initWithFactory:(CDUnknownBlockType)arg1 queueAttr:(id)arg2;

@end

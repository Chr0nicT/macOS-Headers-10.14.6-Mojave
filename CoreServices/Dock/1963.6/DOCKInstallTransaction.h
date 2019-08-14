//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;

@interface DOCKInstallTransaction : NSObject
{
    NSMapTable *_tileTable;
    NSMutableArray *_operations;
}

- (void).cxx_destruct;
- (_Bool)perform;
- (id)tileForIdentifer:(int)arg1;
@property(readonly, nonatomic) NSArray *dockContents;
- (id)findURLRemoveOperation:(struct __CFURL *)arg1;
- (id)findURLAddOperation:(struct __CFURL *)arg1;
- (id)findRemoveOperation:(id)arg1;
- (id)findAddOperation:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
@property(readonly, nonatomic) _Bool hasTileTable;
@property(readonly, nonatomic) _Bool hasOperations;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface TSUAssetColorMap : NSObject
{
    NSMutableDictionary *mAssetPathToColorMap;
}

+ (id)assetColorMap;
- (void).cxx_destruct;
- (void)addChartEntries;
- (void)addSharedEntries;
- (void)addEntriesFromPlistBasename:(id)arg1 transformKeyBlock:(CDUnknownBlockType)arg2;
- (id)TSUColorFromColorArray:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *assetPathToColorMap;
- (id)init;

@end

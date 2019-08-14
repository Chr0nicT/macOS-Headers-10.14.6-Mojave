//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

#import <Photos/PHAssetPropertySet-Protocol.h>

@class NSData, NSDate, NSMutableSet, NSSet, PHAsset, RDVersion;

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet <PHAssetPropertySet>
{
    NSMutableSet *_sceneClassifications;
    NSDate *_sceneAnalysisTimestamp;
    RDVersion *_version;
}

+ (void)fetchPropertiesForObjects:(id)arg1 photoLibrary:(id)arg2;
+ (id)propertiesToLoadFromPhotoLibrary:(id)arg1;
@property(retain, nonatomic) RDVersion *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSSet *sceneClassifications; // @synthesize sceneClassifications=_sceneClassifications;
@property(readonly, nonatomic) NSDate *sceneAnalysisTimestamp; // @synthesize sceneAnalysisTimestamp=_sceneAnalysisTimestamp;
- (void).cxx_destruct;
- (void)addSceneClassification:(id)arg1;
@property(readonly, nonatomic) NSData *distanceIdentity;
@property(readonly, nonatomic) unsigned long long sceneAnalysisVersion;
- (id)initWithAsset:(id)arg1 version:(id)arg2 sceneClassifications:(id)arg3;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak PHAsset *asset;

@end

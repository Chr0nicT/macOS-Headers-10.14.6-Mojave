//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AssetHelper : NSObject
{
    NSMutableDictionary *mDictCache;
}

+ (id)findLocalizedStringForKey:(id)arg1 default:(id)arg2;
+ (id)findLocalizedStringForKey:(id)arg1;
+ (id)strFromColorID:(unsigned char)arg1;
+ (id)strFromProductID:(unsigned short)arg1;
+ (id)getAssetPathsFilenames;
+ (id)loadImageFromBundle:(id)arg1 withResourceNamed:(id)arg2;
+ (id)resourcePathFromBundle:(id)arg1 withResourceNamed:(id)arg2;
+ (id)loadAssetsFromFile:(id)arg1;
+ (id)loadAllAssets;
+ (id)sharedAssetHelper;
- (id)getImageForAppleProductID:(unsigned short)arg1 andColor:(unsigned char)arg2;
- (id)getImageURLForAppleProductID:(unsigned short)arg1 andColor:(unsigned char)arg2;
- (id)getDeviceNameForAppleProductID:(unsigned short)arg1;
- (id)getAssetDictForAppleProductID:(unsigned short)arg1;
- (id)init;

@end

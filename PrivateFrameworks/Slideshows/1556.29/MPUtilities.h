//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPUtilities : NSObject
{
}

+ (double)displayTimeForText:(id)arg1;
+ (double)aspectRatioOfLayerable:(id)arg1 relativeToAspectRatio:(double)arg2;
+ (id)placesPinLabelForSlideAssetPath:(id)arg1 inDocument:(id)arg2;
+ (id)presetIDOfCombinedID:(id)arg1;
+ (id)idOfCombinedID:(id)arg1;
+ (id)layerForContainer:(id)arg1 inDocument:(id)arg2;
+ (id)slideForElementID:(id)arg1 withMCContainerEffect:(id)arg2 inDocument:(id)arg3;
+ (id)textForElementID:(id)arg1 withMCContainerEffect:(id)arg2 inDocument:(id)arg3;
+ (id)textsDisplayedAtTime:(double)arg1 inDocument:(id)arg2;
+ (id)slideForPath:(id)arg1 inDocument:(id)arg2;
+ (id)slideForSlide:(id)arg1 inDocument:(id)arg2;
+ (id)effectForMCContainerEffect:(id)arg1 inDocument:(id)arg2;
+ (id)effectForMCContainerWithObjectID:(id)arg1 inDocument:(id)arg2;
+ (id)textForIndex:(long long)arg1 inMCContainerWithObjectID:(id)arg2 inDocument:(id)arg3;
+ (id)effectContainersForTime:(double)arg1 inDocument:(id)arg2;
+ (void)syncAnimationPaths:(id)arg1;
+ (id)animationsPathsFromFilterID:(id)arg1 andPresetID:(id)arg2;
+ (id)attributesFromAnimationPathsInFilter:(id)arg1 atTime:(double)arg2;
+ (id)attributesFormMPFilter:(id)arg1 atTime:(double)arg2;
+ (id)defaultAttributesForMPTransition:(id)arg1;
+ (id)defaultAttributesForMPFilter:(id)arg1;
+ (id)attributesFromCIFilter:(id)arg1 fromSourceSize:(struct CGSize)arg2;
+ (CDStruct_d27e73f0)scaledFilterPresetVectorValue:(CDStruct_d27e73f0)arg1 withKey:(id)arg2 forFilterID:(id)arg3 andPresetID:(id)arg4;
+ (struct CGPoint)scaledFilterPresetPointValue:(struct CGPoint)arg1 withKey:(id)arg2 forFilterID:(id)arg3 andPresetID:(id)arg4;
+ (double)scaledFilterPresetScalarValue:(double)arg1 withKey:(id)arg2 forFilterID:(id)arg3 andPresetID:(id)arg4;
+ (id)computeVectorValueForAnimationPath:(id)arg1 atTime:(double)arg2 defaultsTo:(id)arg3;
+ (struct CGPoint)computePointValueForAnimationPath:(id)arg1 atTime:(double)arg2 defaultsTo:(struct CGPoint)arg3;
+ (double)computeScalarValueForAnimationPath:(id)arg1 atTime:(double)arg2 defaultsTo:(double)arg3 context:(id)arg4;
+ (double)transformTime:(double)arg1 forAnimationPath:(id)arg2;
+ (unsigned long long)timeOffSetFromString:(id)arg1;
+ (id)parentsOfObject:(id)arg1;
+ (id)createPlugInSlide:(id)arg1 forLayer:(id)arg2 inDocument:(id)arg3;
+ (id)createPlugInContainer:(id)arg1 forLayer:(id)arg2 key:(id)arg3 inDocument:(id)arg4;
+ (void)collectAllActionableLayers:(id)arg1 inDictionary:(id)arg2;
+ (id)createMCAction:(id)arg1 forPlug:(id)arg2 withKey:(id)arg3;
+ (BOOL)pathIsRelative:(id)arg1;
+ (id)createPlugPathToObject:(id)arg1 inDocument:(id)arg2;
+ (id)createPlugPathToContainer:(id)arg1 inDocument:(id)arg2;
+ (void)registerUndoForDocument:(id)arg1 toReceiver:(id)arg2 withSelector:(SEL)arg3 object:(id)arg4;
+ (struct CGColor *)blackCGColor;
+ (struct CGColorSpace *)newColorSpaceForDevice;
+ (struct CGColor *)CGColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)stringFromCGColor:(struct CGColor *)arg1;
+ (struct CGColor *)CGColorFromString:(id)arg1;
+ (struct CGColor *)CGColorFromColor:(id)arg1;
+ (id)colorFromCGColor:(struct CGColor *)arg1;
+ (id)stringFromColor:(id)arg1;
+ (id)colorFromString:(id)arg1;
+ (id)stringWithNewUUID;
+ (id)executeScript:(id)arg1 withHeader:(id)arg2 andAttributes:(id)arg3;

@end

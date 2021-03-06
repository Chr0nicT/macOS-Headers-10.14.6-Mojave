//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccessibilityUtilities/NSObject-Protocol.h>

@protocol AXBackBoardServerInstance, AXBackBoardServerInstanceDelegate;

@protocol AXBackBoardServerInstance <NSObject>
+ (id <AXBackBoardServerInstance>)backBoardServerInstanceIfExists;
- (void)resetAccessibilityFeatures;
- (void)forceLoadGAXBundle;
- (BOOL)supportsAdaptation;
- (BOOL)adaptationEnabled;
- (void)restoreCachedBrightnessFilters;
- (BOOL)blueLightStatusEnabled;
- (BOOL)brightnessFiltersEnabled;
- (void)disableBrightnessFilters;
- (BOOL)supportsBlueLightReduction;
- (BOOL)_sessionIsLoginSession;
- (BOOL)_inCheckerBoardMode;
- (BOOL)_inPreBoardMode;
- (id <AXBackBoardServerInstanceDelegate>)delegate;
@end


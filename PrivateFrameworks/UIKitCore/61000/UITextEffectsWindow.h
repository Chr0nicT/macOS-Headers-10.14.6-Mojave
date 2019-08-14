//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIAutoRotatingWindow.h>

#import <UIKitCore/_UIScreenBasedObject-Protocol.h>

@class NSDictionary, NSString, UIScreen;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject>
{
    BOOL _inDealloc;
    unsigned long long _activeEffectsCount;
    double _defaultWindowLevel;
    struct CGPoint _hostedWindowOffset;
    NSDictionary *_perScreenOptions;
    UIScreen *__intendedScreen;
    unsigned long long _activeRemoteViewCount;
    unsigned long long _windowLevelCount;
    double _windowLevelStack[5];
    struct CGSize _hostedSceneSize;
    BOOL _manualHostingOverride;
    struct UIEdgeInsets _hostedSafeInsets;
}

+ (void)lowerTextEffectsWindowsForHideNotificationCenter;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)releaseSharedInstances;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)activeTextEffectsWindowForScreen:(id)arg1;
+ (id)sharedTextEffectsWindowForScreen:(id)arg1;
+ (id)sharedTextEffectsWindow;
+ (id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(BOOL)arg2 allowHosted:(BOOL)arg3 matchesStatusBarOrientationOnAccess:(BOOL)arg4 shouldCreateIfNecessary:(BOOL)arg5;
@property(nonatomic) struct UIEdgeInsets hostedSafeInsets; // @synthesize hostedSafeInsets=_hostedSafeInsets;
@property(nonatomic) struct CGSize hostedSceneSize; // @synthesize hostedSceneSize=_hostedSceneSize;
@property(nonatomic) struct CGPoint hostedWindowOffset; // @synthesize hostedWindowOffset=_hostedWindowOffset;
@property(nonatomic) double defaultWindowLevel; // @synthesize defaultWindowLevel=_defaultWindowLevel;
- (void).cxx_destruct;
- (void)_didSnapshot;
- (void)_willSnapshot;
- (BOOL)_isFullscreen;
- (BOOL)_canActAsKeyWindowForScreen:(id)arg1;
- (BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg1;
- (BOOL)_isTextEffectsWindow;
- (BOOL)_shouldTintStatusBar;
- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)isInternalWindow;
- (struct CGRect)_sceneBounds;
- (struct CGRect)_sceneReferenceBounds;
- (struct CGRect)actualSceneFrame;
- (struct CGRect)actualSceneFrameForOrientation:(long long)arg1;
- (struct CGRect)actualSceneBounds;
- (struct CGRect)actualSceneBoundsForLandscape:(BOOL)arg1;
- (void)_updateTransformLayer;
- (void)_sceneBoundsDidChange;
- (BOOL)_shouldResizeWithScene;
- (id)aboveStatusBarWindow;
- (long long)interfaceOrientation;
- (void)_matchDeviceOrientation;
- (void)updateSubviewOrdering;
- (void)resetTransform;
- (void)updateForOrientation:(long long)arg1;
- (void)updateForOrientation:(long long)arg1 forceResetTransform:(BOOL)arg2;
- (void)sortSubviews;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)delayHideWindow;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGRect)_forHostedProcessConvertRect:(struct CGRect)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3;
- (struct CGPoint)_forHostedProcessConvertPoint:(struct CGPoint)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3;
@property(readonly, nonatomic) struct CGRect hostedFrame;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_configureContextOptions:(id)arg1;
- (void)_restoreWindowLevel;
- (void)_setWindowLevel:(double)arg1;
- (void)setEnableRemoteHosting:(BOOL)arg1;
- (BOOL)enableRemoteHosting;
@property(readonly) unsigned int contextID;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(BOOL)arg2;
- (void)_commonTextEffectsInit;
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (BOOL)_matchingOptions:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

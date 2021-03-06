//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface DeviceGammaContext : NSObject
{
    unsigned int deviceID;
    unsigned int numSamples;
    double epsilon;
    double currentWipe;
    double wipeIncrement;
    double UpdateRate;
    double currentMatrixWipe;
    double wipeMatrixIncrement;
    double UpdateRateMatrix;
    int internal;
    _Bool hasOverrides;
    _Bool preferencesRead;
    double previousWiperUpdateTimeMS;
    float leakage;
    int lowestLevel;
    float lowestMeasured;
    float maxBacklight;
    float darkReflection;
    float brightReflection;
    double desiredWhitePointXYZ[3];
    double targetWhitePointXYZ[3];
    double targetWhitePointMatrix[9];
    double targetLinearBlack;
    double targetOverGamma;
    _Bool nativeICCvalid;
    double nativeRedXYZ[3];
    double nativeGreenXYZ[3];
    double nativeBlueXYZ[3];
    double nativeWhitePointXYZ[3];
    int whitePointMode;
    double ALSlux;
    double backLightNits;
    NSObject<OS_dispatch_semaphore> *wiperAnimationRequestSemaphore;
    _Bool animationCompleted;
    _Bool animationPreemptable;
    _Bool animationMatrixCompleted;
    _Bool animationMatrixPreemptive;
    _Bool compensationState;
    struct _opaque_pthread_mutex_t _intentionDictionaryMutex;
    CDStruct_5a4619cb *_intentionDictionary;
    struct _opaque_pthread_mutex_t _prefsIntentionDictionaryMutex;
    CDStruct_5a4619cb *_prefsIntentionDictionary;
    struct _opaque_pthread_mutex_t _timeOfLastAssemblyBufferFlushListMutex;
    _Bool removedState;
    _Bool hardwareBrightnessSmoothing;
    double compositionalWhiteReferenceNits;
    double compositionalAmbientEnvironmentLux;
    int systemGammaMode;
    double staticGamma;
}

- (CDStruct_5a4619cb *)copyPrefsIntentionDictionary;
- (CDStruct_5a4619cb *)copyIntentionDictionary;
- (void)setPrefsIntentionDictionary:(CDStruct_5a4619cb *)arg1;
- (void)setIntentionDictionary:(CDStruct_5a4619cb *)arg1;
- (int)getSystemGammaMode;
- (void)setSystemGammaMode:(int)arg1;
- (_Bool)getCompensationState;
- (void)enableCompensation:(_Bool)arg1;
- (_Bool)preferencesRead;
- (void)setpreferencesRead;
- (float)getCompositionalAmbientEnvironmentLux;
- (float)getCompositionalWhiteReferenceNits;
- (void)fetchAndSetCompositionalEnvironementOnce;
- (void)readDisplayOverrides:(unsigned int)arg1;
- (_Bool)overridesFound;
- (void)setOverridesFound:(_Bool)arg1;
- (_Bool)animationMatrixPreemptive;
- (_Bool)animationMatrixCompleted;
- (_Bool)animationPreemptable;
- (_Bool)animationCompleted;
- (float)getALS;
- (void)setALS:(double)arg1;
- (float)getDarkReflection;
- (_Bool)getHardwareBrightnessSmoothingState;
- (_Bool)getRemovedState;
- (void)setRemovedState:(_Bool)arg1;
- (void)updateDisplayHasBrightnessSmoothing;
- (void)updateDisplayIsInternal;
- (void)updateCurrentBackLightNits;
- (void)updateCurrentALS;
- (void)setBackLightNits:(double)arg1;
- (float)getBackLightNits;
- (void)setMaxBackLight:(double)arg1;
- (float)getMaxBackLight;
- (float)getLeakage;
- (int)getLowestLevel;
- (int)getWhitePointMode;
- (void)setWhitePointMode:(int)arg1;
- (double)getTargetOverGamma;
- (void)setTargetOverGamma:(double)arg1;
- (double)getTargetLinearBlackpoint;
- (void)setTargetLinearBlackpoint:(double)arg1;
- (void)setTargetWhitePointXYZ:(double *)arg1;
- (double *)getTargetWhitePointXYZ;
- (void)setDesiredWhitePointXYZ:(double *)arg1;
- (double *)getDesiredWhitePointXYZ;
- (void)queryAndSetIntentionForWhitePoint;
- (_Bool)createNativeColorSpaceVectorsWithRedXYZ:(double **)arg1 greenXYZ:(double **)arg2 blueXYZ:(double **)arg3 whitePointXYZ:(double **)arg4;
- (double *)createNativeWhitePointVector;
- (_Bool)cacheColorSpaceFromICC;
- (float)getStaticGamma;
- (void)setStaticGamma:(float)arg1;
- (void)setAndAnimateToGamma:(float)arg1 thawIntention:(_Bool)arg2;
- (void)setNativeWhitePointAndAnimateWithDuration:(float)arg1 thawIntention:(_Bool)arg2;
- (void)setWhitePointXYZandAnimateToX:(float)arg1 Y:(float)arg2 Z:(float)arg3 duration:(float)arg4 thawIntention:(_Bool)arg5;
- (void)setDisplayParametersWithLeakage:(float)arg1 lowestLevel:(int)arg2 lowestMeasured:(float)arg3 backlight:(float)arg4 darkReflection:(float)arg5 brightReflection:(float)arg6;
- (void)setInternal:(BOOL)arg1;
- (BOOL)isInternal;
- (BOOL)isNativeICCvalidOrRetry;
- (void)setDisplayID:(unsigned int)arg1;
- (unsigned int)getDisplayID;
- (double)updateWipeWithActualIntervalInSeconds:(float)arg1;
- (void)setupInterpolationWithDuration:(double)arg1 direction:(unsigned char)arg2;
- (void)interpolateCurrentTableToDestinationTableOverTime:(float)arg1 withPreemption:(BOOL)arg2;
- (void)releaseAnimationLock;
- (int)requestAndWaitForAnimationToEndNonLocking;
- (int)requestAndWaitForAnimationToEndLocking;
- (int)waitForAnimationToEndLocking;
- (void)dealloc;
- (id)initWithCount:(int)arg1 withDisplayID:(unsigned int)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNDetector.h>

#import <Vision/VNDetectorKeyProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>
{
}

+ (BOOL)shouldDumpDebugIntermediates;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (void)purgeIntermediates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransform;

@interface NUOrientationNode : NUTransformNode
{
    long long _orientation;
    NUImageTransform *_transform;
}

+ (id)applyOrientation:(long long)arg1 to:(id)arg2;
@property(retain) NUImageTransform *transform; // @synthesize transform=_transform;
@property(readonly) long long orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (id)_evaluateVideo:(out id *)arg1;
- (BOOL)requiresVideoComposition;
- (id)_evaluatePortraitEffectsMatte:(out id *)arg1;
- (BOOL)canPropagateOriginalDepthData;
- (id)_evaluateDepthData:(out id *)arg1;
- (id)_transformWithError:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (long long)outputImageOrientation:(long long)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (BOOL)isGeometryNode;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)initWithOrientation:(long long)arg1 input:(id)arg2;

@end

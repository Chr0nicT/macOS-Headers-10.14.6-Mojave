//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VoiceMemos/RCWaveformDataSource.h>

#import <VoiceMemos/AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h>

@class NSArray, NSString, RCComposition, RCCompositionFragment, RCMutableComposition, RCMutableCompositionFragment, RCWaveform;

@interface RCCaptureInputWaveformDataSource : RCWaveformDataSource <AVCaptureAudioDataOutputSampleBufferDelegate>
{
    double captureDelta;
    BOOL _overdub;
    BOOL _canUpdateCaptureComposition;
    RCMutableComposition *_capturedComposition;
    RCMutableCompositionFragment *_capturedFragment;
    RCComposition *_destinationComposition;
    RCCompositionFragment *_destinationFragment;
    RCWaveform *_baseWaveform;
    double _updatedCapturedFragmentDuration;
    double _finalCapturedFragmentDuration;
    double _captureInsertionTimeInComposition;
    double _captureInsertionDurationInComposition;
    NSArray *_captureInitialDecomposedFragments;
}

@property(readonly, nonatomic) NSArray *captureInitialDecomposedFragments; // @synthesize captureInitialDecomposedFragments=_captureInitialDecomposedFragments;
@property(readonly, nonatomic) double captureInsertionDurationInComposition; // @synthesize captureInsertionDurationInComposition=_captureInsertionDurationInComposition;
@property(readonly, nonatomic) double captureInsertionTimeInComposition; // @synthesize captureInsertionTimeInComposition=_captureInsertionTimeInComposition;
@property(readonly, nonatomic) BOOL canUpdateCaptureComposition; // @synthesize canUpdateCaptureComposition=_canUpdateCaptureComposition;
@property(readonly, nonatomic) double finalCapturedFragmentDuration; // @synthesize finalCapturedFragmentDuration=_finalCapturedFragmentDuration;
@property(readonly, nonatomic) double updatedCapturedFragmentDuration; // @synthesize updatedCapturedFragmentDuration=_updatedCapturedFragmentDuration;
@property(readonly, nonatomic) RCWaveform *baseWaveform; // @synthesize baseWaveform=_baseWaveform;
@property(readonly, nonatomic, getter=isOverdub) BOOL overdub; // @synthesize overdub=_overdub;
@property(readonly, nonatomic) RCCompositionFragment *destinationFragment; // @synthesize destinationFragment=_destinationFragment;
@property(readonly, nonatomic) RCComposition *destinationComposition; // @synthesize destinationComposition=_destinationComposition;
- (void).cxx_destruct;
- (BOOL)shouldMergeLiveWaveform;
- (void)_truncateAccumulatedWaveformSegmentsToEndTime:(double)arg1;
- (void)_extendAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1;
- (void)_modifyAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1;
- (void)_updateCapturedComposition:(BOOL)arg1;
- (double)_fragmentDuration;
- (void)_captureSesionCompletedWithFinalizedDuration:(double)arg1;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)appendAveragePowerLevelsByDigestingWaveformSegment:(id)arg1;
- (void)flushPendingCapturedSampleBuffers;
- (BOOL)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)arg1;
- (BOOL)appendAveragePowerLevelsByDigestingCapturedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)undoCapture;
- (double)duration;
@property(readonly, nonatomic) RCMutableCompositionFragment *capturedFragment; // @synthesize capturedFragment=_capturedFragment;
@property(readonly, nonatomic) RCMutableComposition *capturedComposition; // @synthesize capturedComposition=_capturedComposition;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1;
- (CDStruct_73a5d3ca)timeRangeToHighlight;
- (id)waveformSegmentsInTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)updateCapturedDelta:(double)arg1;
- (id)_captureSegmentsInComponentWaveform:(id)arg1 captureTimeRange:(CDStruct_73a5d3ca)arg2 componentWaveformSegmentOffset:(double)arg3;
- (BOOL)setPaused:(BOOL)arg1;
- (BOOL)waitUntilFinishedWithFinalizedDestinationFragmentDuration:(double)arg1;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 finalizedFragmentDuration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)waitUntilFinished;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startLoading;
- (void)_initializeCaptureComposition;
- (id)initWithDestinationComposition:(id)arg1 destinationFragment:(id)arg2 isOverdub:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpeech/CSEndpointAnalyzer-Protocol.h>

@class CSAudioChunk, CSServerEndpointFeatures, NSDictionary, NSString;
@protocol CSEndpointAnalyzerDelegate;

@protocol CSEndpointAnalyzerImpl <CSEndpointAnalyzer>
@property(nonatomic) unsigned long long activeChannel;
@property(readonly, nonatomic) BOOL canProcessCurrentRequest;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> delegate;
- (double)trailingSilenceDurationAtEndpoint;
- (void)recordingStoppedForReason:(unsigned long long)arg1;
- (void)processAudioSamplesAsynchronously:(CSAudioChunk *)arg1;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(NSDictionary *)arg2;

@optional
@property(readonly, nonatomic) double elapsedTimeWithNoSpeech;
@property(readonly, nonatomic) NSString *endpointerModelVersion;
- (void)handleVoiceTriggerWithActivationInfo:(NSDictionary *)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(void (^)(BOOL, NSArray *))arg2;
- (void)updateEndpointerDelayedTrigger:(BOOL)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)processServerEndpointFeatures:(CSServerEndpointFeatures *)arg1;
@end


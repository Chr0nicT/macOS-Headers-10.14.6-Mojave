//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AACControllerRequest.h"

@class AVB17221AEMSamplingRate;

@interface AACChangeAudioUnitSampleRateControllerRequest : AACControllerRequest
{
    unsigned short _audioUnitIndex;
    AVB17221AEMSamplingRate *_samplingRate;
}

@property(copy, nonatomic) AVB17221AEMSamplingRate *samplingRate; // @synthesize samplingRate=_samplingRate;
@property(nonatomic) unsigned short audioUnitIndex; // @synthesize audioUnitIndex=_audioUnitIndex;
- (void).cxx_destruct;
- (void)dealloc;
- (void)executeRequest;
- (id)informativeText;
- (id)mainText;
- (id)init;

@end

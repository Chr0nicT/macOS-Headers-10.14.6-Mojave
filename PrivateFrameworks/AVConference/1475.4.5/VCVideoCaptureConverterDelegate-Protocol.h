//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class VCVideoCaptureConverter;

@protocol VCVideoCaptureConverterDelegate <NSObject>
- (void)converter:(VCVideoCaptureConverter *)arg1 didConvertFrame:(struct opaqueCMSampleBuffer *)arg2 frameTime:(CDStruct_1b6d18a9)arg3 droppedFrames:(int)arg4 cameraStatusBits:(unsigned char)arg5;
@end

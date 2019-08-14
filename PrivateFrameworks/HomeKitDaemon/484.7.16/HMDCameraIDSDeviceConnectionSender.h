//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraIDSDeviceConnection.h>

#import <HomeKitDaemon/HMDCameraPowerAssertionProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraRemoteStreamSenderProtocol-Protocol.h>

@class AVCPacketRelay, HMDCameraSessionID, HMFOSTransaction, NSNumber, NSObject, NSString;
@protocol HMDCameraIDSDeviceConnectionSenderDelegate, OS_dispatch_queue;

@interface HMDCameraIDSDeviceConnectionSender : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamSenderProtocol, HMDCameraPowerAssertionProtocol>
{
    id <HMDCameraIDSDeviceConnectionSenderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_destinationID;
    AVCPacketRelay *_videoPacketRelay;
    AVCPacketRelay *_audioPacketRelay;
    HMFOSTransaction *_packetRelayTransaction;
}

+ (id)logCategory;
@property(retain, nonatomic) HMFOSTransaction *packetRelayTransaction; // @synthesize packetRelayTransaction=_packetRelayTransaction;
@property(retain, nonatomic) AVCPacketRelay *audioPacketRelay; // @synthesize audioPacketRelay=_audioPacketRelay;
@property(retain, nonatomic) AVCPacketRelay *videoPacketRelay; // @synthesize videoPacketRelay=_videoPacketRelay;
@property(readonly, copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <HMDCameraIDSDeviceConnectionSenderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_callSessionEnded:(id)arg1;
- (void)_socketOpened:(id)arg1;
- (void)_startAudioPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3;
- (void)_startVideoPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3;
- (void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)_startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;
- (void)startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;
@property(readonly, nonatomic) NSNumber *mtu;
- (void)openRelaySession;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID;
@property(readonly) Class superclass;

@end

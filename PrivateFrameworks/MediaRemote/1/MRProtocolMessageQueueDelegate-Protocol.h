//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRProtocolMessage, MRProtocolMessageQueue, NSData;

@protocol MRProtocolMessageQueueDelegate <NSObject>
- (void)messageQueue:(MRProtocolMessageQueue *)arg1 didPurgeMessage:(MRProtocolMessage *)arg2;
- (void)messageQueue:(MRProtocolMessageQueue *)arg1 didSendMessage:(MRProtocolMessage *)arg2;
- (unsigned long long)messageQueue:(MRProtocolMessageQueue *)arg1 processData:(NSData *)arg2 atReadPosition:(long long)arg3;
@end


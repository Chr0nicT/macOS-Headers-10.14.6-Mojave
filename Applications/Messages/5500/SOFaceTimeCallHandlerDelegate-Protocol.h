//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMChat, IMTUConversationChatItem, SOFaceTimeCallHandler;

@protocol SOFaceTimeCallHandlerDelegate <NSObject>
- (IMChat *)faceTimeCallHandlerGetChat:(SOFaceTimeCallHandler *)arg1;
- (void)faceTimeCallHandler:(SOFaceTimeCallHandler *)arg1 callStateChangedForChatItem:(IMTUConversationChatItem *)arg2;
@end


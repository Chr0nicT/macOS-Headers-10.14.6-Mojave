//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMAP/IMAPLocalMessageAction.h>

@class MCMessage;
@protocol IMAPPersistedMessage;

@interface IMAPAppendMessageAction : IMAPLocalMessageAction
{
    MCMessage<IMAPPersistedMessage> *_message;
    long long _flags;
}

@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) MCMessage<IMAPPersistedMessage> *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)newSyncOperationWithDataSource:(id)arg1;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 messageToAppend:(id)arg5 flags:(long long)arg6;

@end

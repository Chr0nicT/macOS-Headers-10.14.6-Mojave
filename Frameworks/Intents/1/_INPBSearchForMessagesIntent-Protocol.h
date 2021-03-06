//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBStringList;

@protocol _INPBSearchForMessagesIntent <NSObject>
@property(readonly, nonatomic) BOOL hasSpeakableGroupName;
@property(retain, nonatomic) _INPBDataStringList *speakableGroupName;
@property(readonly, nonatomic) BOOL hasSender;
@property(retain, nonatomic) _INPBContactList *sender;
@property(readonly, nonatomic) BOOL hasSearchTerm;
@property(retain, nonatomic) _INPBStringList *searchTerm;
@property(readonly, nonatomic) BOOL hasRecipient;
@property(retain, nonatomic) _INPBContactList *recipient;
@property(readonly, nonatomic) BOOL hasNotificationIdentifier;
@property(retain, nonatomic) _INPBStringList *notificationIdentifier;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(retain, nonatomic) _INPBStringList *identifier;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(retain, nonatomic) _INPBStringList *groupName;
@property(readonly, nonatomic) BOOL hasDateTimeRange;
@property(retain, nonatomic) _INPBDateTimeRange *dateTimeRange;
@property(readonly, nonatomic) BOOL hasConversationIdentifier;
@property(retain, nonatomic) _INPBStringList *conversationIdentifier;
@property(readonly, nonatomic) BOOL hasContent;
@property(retain, nonatomic) _INPBStringList *content;
@property(readonly, nonatomic) unsigned long long attributesCount;
@property(readonly, nonatomic) int *attributes;
- (int)StringAsAttributes:(NSString *)arg1;
- (NSString *)attributesAsString:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@end


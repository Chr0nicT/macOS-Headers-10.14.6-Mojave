//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SAIntentGroupProtobufMessage;

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand
{
}

+ (id)processIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)processIntent;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL shouldRunHandleIntent;
@property(copy, nonatomic) NSArray *intentSlotKeyPaths;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property(nonatomic) BOOL allowsPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

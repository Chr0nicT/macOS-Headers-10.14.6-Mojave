//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SADPDevicePlaySound : SABaseClientBoundCommand
{
}

+ (id)devicePlaySoundWithDictionary:(id)arg1 context:(id)arg2;
+ (id)devicePlaySound;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *devices;
@property(copy, nonatomic) NSString *action;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAMPMediaItem.h>

@class NSString;

@interface SAMPEpisode : SAMPMediaItem
{
}

+ (id)episodeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)episode;
@property(copy, nonatomic) NSString *showName;
@property(nonatomic) long long showEpisodesCount;
@property(nonatomic) long long seasonNumber;
@property(nonatomic) long long episodeNumber;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

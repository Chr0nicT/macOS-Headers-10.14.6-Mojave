//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSString, SASRecognition;

@interface SASSpeechAlternativesSnippet : SAUISnippet
{
}

+ (id)speechAlternativesSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechAlternativesSnippet;
@property(copy, nonatomic) NSString *sessionId;
@property(retain, nonatomic) SASRecognition *recognition;
@property(nonatomic) long long maxEntryToShow;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SiriUISpeechSynthesisVoiceManager : NSObject
{
    NSDictionary *_voiceLanguageDict;
}

+ (void)adjustDownloadedVoiceStatusAfterSiriEnabled:(BOOL)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)preferredGenderForLanguage:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIResponseKitTrainer-Protocol.h>

@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>
{
}

+ (id)sharedTrainer;
- (void)performTrainingForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)moveLanguageModelBundlesFromTemporaryDirectory:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;
- (id)_init;

@end

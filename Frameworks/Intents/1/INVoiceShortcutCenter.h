//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface INVoiceShortcutCenter : NSObject
{
}

+ (id)sharedCenter;
+ (void)initialize;
- (void)setShortcutSuggestions:(id)arg1;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)_initWithVoiceShortcutClient:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString;
@protocol UIKeyboardInput;

@protocol UIKeyboardInput <NSObject>

@optional
- (void)keyboardInputChangedSelection:(id <UIKeyboardInput>)arg1;
- (BOOL)keyboardInputChanged:(id <UIKeyboardInput>)arg1;
- (BOOL)keyboardInputShouldDelete:(id <UIKeyboardInput>)arg1;
- (BOOL)keyboardInput:(id <UIKeyboardInput>)arg1 shouldInsertText:(NSString *)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id <UIKeyboardInput>)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
@end


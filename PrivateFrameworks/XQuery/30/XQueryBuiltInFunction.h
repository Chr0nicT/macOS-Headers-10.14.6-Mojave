//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XQueryBuiltInFunction : NSObject
{
    CDUnknownFunctionPointerType _proc;
}

+ (id)builtInFunctionWithProc:(CDUnknownFunctionPointerType)arg1;
+ (CDUnknownFunctionPointerType)functionForQName:(id)arg1;
+ (void)initialize;
- (CDUnknownFunctionPointerType)proc;
- (id)initWithProc:(CDUnknownFunctionPointerType)arg1;

@end

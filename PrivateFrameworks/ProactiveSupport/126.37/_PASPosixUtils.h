//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASPosixUtils : NSObject
{
}

+ (int)runCommandWithPath:(const char *)arg1 argv:(const char **)arg2 envp:(const char **)arg3 stdoutData:(id *)arg4 stderrData:(id *)arg5;
+ (int)runCommandWithPath:(const char *)arg1 argv:(const char **)arg2 envp:(const char **)arg3 handleStdout:(CDUnknownBlockType)arg4 handleStderr:(CDUnknownBlockType)arg5;

@end

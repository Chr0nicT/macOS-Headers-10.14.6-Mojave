//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RVSLogger : NSObject
{
    NSString *_name;
}

+ (id)loggerWithName:(id)arg1;
+ (id)defaultLogger;
- (void)debug:(id)arg1;
- (void)_logMessage:(id)arg1 values:(struct __va_list_tag [1])arg2;
- (void)dealloc;
- (id)_initWithName:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSEphemeralDefaults : NSObject
{
}

+ (void)_accessDataStoreUsingBlock:(CDUnknownBlockType)arg1;
+ (id)_propertyForKey:(id)arg1 defaultValue:(id)arg2 expectedType:(Class)arg3;
+ (void)_setProperty:(id)arg1 forKey:(id)arg2;
+ (void)setHARLoggingItemLimit:(long long)arg1;
+ (void)setHARLoggingEnabled:(BOOL)arg1;
+ (long long)HARLoggingItemLimit;
+ (BOOL)HARLoggingEnabled;

@end

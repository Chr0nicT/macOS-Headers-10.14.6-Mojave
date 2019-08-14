//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebCache : NSObject
{
}

+ (void)clearCachedCredentials;
+ (BOOL)isDisabled;
+ (void)setDisabled:(BOOL)arg1;
+ (struct CGImage *)imageForURL:(id)arg1;
+ (void)removeImageFromCacheForURL:(id)arg1 forFrame:(id)arg2;
+ (void)removeImageFromCacheForURL:(id)arg1;
+ (_Bool)addImageToCache:(struct CGImage *)arg1 forURL:(id)arg2 forFrame:(id)arg3;
+ (_Bool)addImageToCache:(struct CGImage *)arg1 forURL:(id)arg2;
+ (void)sizeOfDeadResources:(int *)arg1;
+ (void)emptyInMemoryResources;
+ (void)empty;
+ (id)statistics;
+ (void)initialize;

@end

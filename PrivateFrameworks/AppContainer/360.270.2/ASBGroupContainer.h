//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface ASBGroupContainer : NSObject
{
    NSString *_groupName;
    NSString *_containerPath;
}

+ (id)containerForApplicationGroupIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)containerURLForApplicationGroupIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSURL *dataURL;
- (BOOL)upgradeAndReturnError:(id *)arg1;
- (BOOL)hasLatestSchema;
- (id)initWithApplicationGroupIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OSAComponentInstance;

@interface OSALanguagePrivate : NSObject
{
    OSAComponentInstance *_genericComponentInstance;
    struct ComponentRecord *_component;
    struct ComponentInstanceRecord *_instance;
    struct ComponentDescription _description;
    NSString *_name;
    NSString *_info;
    NSString *_version;
}

- (void)dealloc;
- (id)initWithComponent:(struct ComponentRecord *)arg1;

@end

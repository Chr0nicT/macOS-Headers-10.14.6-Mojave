//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface URLTarget : NSObject
{
    unsigned int _applicationState;
    NSString *_bundleId;
    long long _defaultIndex;
    NSString *_normalScheme;
    NSString *_secureScheme;
}

+ (id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;
@property(retain) NSString *secureScheme; // @synthesize secureScheme=_secureScheme;
@property(retain) NSString *normalScheme; // @synthesize normalScheme=_normalScheme;
@property long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property unsigned int applicationState; // @synthesize applicationState=_applicationState;
- (void).cxx_destruct;
- (id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;

@end

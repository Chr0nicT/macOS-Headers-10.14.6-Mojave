//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ReachabilityWatcher : NSObject
{
    NSString *_host;
    struct __SCNetworkReachability *_ref;
    unsigned int _flags;
    BOOL _watching;
    id _target;
    SEL _action;
    BOOL _verboseMode;
}

- (void)_setFlags:(unsigned int)arg1;
- (void)_pollFlags;
- (void)_logIfVerbose:(id)arg1;
- (BOOL)setTarget:(id)arg1 action:(SEL)arg2 error:(out id *)arg3;
- (BOOL)isReachableWithDial:(BOOL)arg1;
- (unsigned int)flags;
- (id)host;
- (id)description;
- (void)setVerboseMode:(BOOL)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithHost:(id)arg1;

@end

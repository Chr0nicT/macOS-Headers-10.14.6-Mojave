//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/NSCopying-Protocol.h>
#import <SilexVideo/SVVideoViewControllerConfiguration-Protocol.h>

@interface SVVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration>
{
    BOOL _preferredMuteState;
    BOOL _pagingAllowed;
}

@property(readonly, nonatomic, getter=isPagingAllowed) BOOL pagingAllowed; // @synthesize pagingAllowed=_pagingAllowed;
@property(readonly, nonatomic) BOOL preferredMuteState; // @synthesize preferredMuteState=_preferredMuteState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPreferredMuteState:(BOOL)arg1 pagingAllowed:(BOOL)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface PLSandboxedURL : NSURL
{
    NSString *_sandboxExtensionToken;
    long long _sandboxExtensionHandle;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_commonPLSandboxedURLInitialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier
{
    NSString *_identifierString;
}

+ (BOOL)supportsSecureCoding;
+ (id)namespace;
@property(readonly, copy) NSString *identifierString; // @synthesize identifierString=_identifierString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAuthenticated;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifierString:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKApplePayTrustSignatureRequest : NSObject <NSSecureCoding>
{
    NSString *_keyIdentifier;
    NSData *_nonce;
    NSData *_manifestHash;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSString *keyIdentifier; // @synthesize keyIdentifier=_keyIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyIdentifier:(id)arg1 manifestHash:(id)arg2 nonce:(id)arg3;

@end


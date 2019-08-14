//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/NSSecureCoding-Protocol.h>

@class AKPVSignaturePayload, NSData;

@interface PVDummySignature : NSObject <NSSecureCoding>
{
    BOOL _cannotDecrypt;
    AKPVSignaturePayload *_payload;
    NSData *_undecryptedData;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSData *undecryptedData; // @synthesize undecryptedData=_undecryptedData;
@property(retain) AKPVSignaturePayload *payload; // @synthesize payload=_payload;
@property BOOL cannotDecrypt; // @synthesize cannotDecrypt=_cannotDecrypt;
- (void).cxx_destruct;
- (void)decrypt;
- (BOOL)isDecrypted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

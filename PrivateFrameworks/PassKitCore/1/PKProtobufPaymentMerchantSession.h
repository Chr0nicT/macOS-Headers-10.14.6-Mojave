//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying>
{
    unsigned long long _epochTimestamp;
    unsigned long long _expiresAt;
    NSData *_ampEnrollmentPinning;
    NSString *_displayName;
    NSString *_domain;
    NSString *_initiative;
    NSString *_initiativeContext;
    NSString *_merchantIdentifier;
    NSString *_nonce;
    NSString *_retryNonce;
    NSString *_sessionIdentifier;
    NSData *_signature;
    NSMutableArray *_signedFields;
    struct {
        unsigned int epochTimestamp:1;
        unsigned int expiresAt:1;
    } _has;
}

+ (Class)signedFieldsType;
@property(retain, nonatomic) NSData *ampEnrollmentPinning; // @synthesize ampEnrollmentPinning=_ampEnrollmentPinning;
@property(retain, nonatomic) NSMutableArray *signedFields; // @synthesize signedFields=_signedFields;
@property(retain, nonatomic) NSString *initiative; // @synthesize initiative=_initiative;
@property(retain, nonatomic) NSString *initiativeContext; // @synthesize initiativeContext=_initiativeContext;
@property(nonatomic) unsigned long long expiresAt; // @synthesize expiresAt=_expiresAt;
@property(retain, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long epochTimestamp; // @synthesize epochTimestamp=_epochTimestamp;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAmpEnrollmentPinning;
- (id)signedFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)signedFieldsCount;
- (void)addSignedFields:(id)arg1;
- (void)clearSignedFields;
@property(readonly, nonatomic) BOOL hasInitiative;
@property(readonly, nonatomic) BOOL hasInitiativeContext;
@property(nonatomic) BOOL hasExpiresAt;
@property(readonly, nonatomic) BOOL hasRetryNonce;
@property(readonly, nonatomic) BOOL hasSignature;
@property(readonly, nonatomic) BOOL hasDisplayName;
@property(readonly, nonatomic) BOOL hasDomain;
@property(nonatomic) BOOL hasEpochTimestamp;
@property(readonly, nonatomic) BOOL hasNonce;
@property(readonly, nonatomic) BOOL hasSessionIdentifier;
@property(readonly, nonatomic) BOOL hasMerchantIdentifier;

@end


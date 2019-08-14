//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying>
{
    NSMutableArray *_paymentSummaryItems;
    NSString *_remotePaymentRequestIdentifier;
    NSString *_selectedAID;
    NSMutableArray *_shippingMethods;
    unsigned int _status;
    CDStruct_47fe53f2 _has;
}

+ (Class)shippingMethodsType;
+ (Class)paymentSummaryItemsType;
@property(retain, nonatomic) NSString *selectedAID; // @synthesize selectedAID=_selectedAID;
@property(retain, nonatomic) NSMutableArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(retain, nonatomic) NSMutableArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;
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
@property(readonly, nonatomic) BOOL hasSelectedAID;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shippingMethodsCount;
- (void)addShippingMethods:(id)arg1;
- (void)clearShippingMethods;
- (id)paymentSummaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentSummaryItemsCount;
- (void)addPaymentSummaryItems:(id)arg1;
- (void)clearPaymentSummaryItems;
@property(nonatomic) BOOL hasStatus;
@property(readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;

@end

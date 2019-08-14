//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCurrencyAmount, INPaymentMethod, INPerson, NSString;

@interface INPaymentRecord : NSObject <INCacheableContainer, NSCopying, NSSecureCoding>
{
    INPerson *_payee;
    INPerson *_payer;
    INCurrencyAmount *_currencyAmount;
    NSString *_note;
    long long _status;
    INPaymentMethod *_paymentMethod;
    INCurrencyAmount *_feeAmount;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) INCurrencyAmount *feeAmount; // @synthesize feeAmount=_feeAmount;
@property(readonly, copy) INPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(readonly) long long status; // @synthesize status=_status;
@property(readonly, copy) NSString *note; // @synthesize note=_note;
@property(readonly, copy) INCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(readonly, copy) INPerson *payer; // @synthesize payer=_payer;
@property(readonly, copy) INPerson *payee; // @synthesize payee=_payee;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6 feeAmount:(id)arg7;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

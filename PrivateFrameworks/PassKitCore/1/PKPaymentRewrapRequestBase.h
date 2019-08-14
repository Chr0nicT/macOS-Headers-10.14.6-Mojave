//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, PKPaymentApplication, PKPaymentPass, PKWrappedPayment;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    PKWrappedPayment *_wrappedPayment;
    NSData *_applicationData;
}

@property(copy, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) PKWrappedPayment *wrappedPayment; // @synthesize wrappedPayment=_wrappedPayment;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (id)bodyDictionary;
@property(readonly, nonatomic) NSString *endpointName;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;

@end

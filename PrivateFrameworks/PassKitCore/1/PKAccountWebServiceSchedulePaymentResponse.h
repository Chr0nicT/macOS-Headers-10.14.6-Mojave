//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceSchedulePaymentResponse : PKAccountWebServiceResponse
{
    NSArray *_payments;
}

@property(readonly, copy, nonatomic) NSArray *payments; // @synthesize payments=_payments;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 account:(id)arg2;

@end

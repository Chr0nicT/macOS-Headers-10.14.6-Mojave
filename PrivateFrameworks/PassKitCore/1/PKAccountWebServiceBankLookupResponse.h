//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebServiceBankLookupResponse : PKAccountWebServiceResponse
{
    BOOL _success;
    NSString *_displayName;
}

@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end


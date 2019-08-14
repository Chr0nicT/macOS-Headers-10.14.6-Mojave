//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPPairingIdentity, HAPSecuritySession, NSData, NSError, NSString;

@protocol HAPSecuritySessionDelegate <NSObject>
- (void)securitySession:(HAPSecuritySession *)arg1 didReceiveSetupExchangeData:(NSData *)arg2;
- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(NSString *)arg2 error:(id *)arg3;
- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;

@optional
- (void)securitySession:(HAPSecuritySession *)arg1 didCloseWithError:(NSError *)arg2;
- (void)securitySessionDidOpen:(HAPSecuritySession *)arg1;
- (void)securitySessionIsOpening:(HAPSecuritySession *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (ICNFMCMailCoreAdditions)
@property(readonly, copy, nonatomic) NSString *shortDescription;
@property(readonly, copy, nonatomic) NSString *moreInfo;
@property(readonly, nonatomic) BOOL isSSLCertificateError;
@property(readonly, nonatomic) BOOL isAuthenticationError;
@property(readonly, nonatomic) BOOL shouldBeReportedToUser;
@end

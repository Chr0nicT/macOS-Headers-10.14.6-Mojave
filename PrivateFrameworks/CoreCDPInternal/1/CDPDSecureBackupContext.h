//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPDCircleJoinResult, CDPDevice, NSString;

@interface CDPDSecureBackupContext : NSObject
{
    BOOL _silentRecovery;
    BOOL _usePreviouslyCachedSecret;
    NSString *_localSecret;
    unsigned long long _localSecretType;
    CDPDevice *_device;
    NSString *_recoverySecret;
    NSString *_recoveryKey;
    CDPDCircleJoinResult *_circleJoinResult;
}

@property(retain, nonatomic) CDPDCircleJoinResult *circleJoinResult; // @synthesize circleJoinResult=_circleJoinResult;
@property(nonatomic) BOOL usePreviouslyCachedSecret; // @synthesize usePreviouslyCachedSecret=_usePreviouslyCachedSecret;
@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(nonatomic) BOOL silentRecovery; // @synthesize silentRecovery=_silentRecovery;
@property(copy, nonatomic) NSString *recoverySecret; // @synthesize recoverySecret=_recoverySecret;
@property(copy, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property(nonatomic) unsigned long long localSecretType; // @synthesize localSecretType=_localSecretType;
@property(copy, nonatomic) NSString *localSecret; // @synthesize localSecret=_localSecret;
- (void).cxx_destruct;

@end

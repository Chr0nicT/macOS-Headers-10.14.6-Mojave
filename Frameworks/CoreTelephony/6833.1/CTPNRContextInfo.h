//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTPNRContextInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isReady;
    NSString *_plmn;
    NSString *_imsi;
    NSString *_phoneNumber;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *plmn; // @synthesize plmn=_plmn;
@property(nonatomic) BOOL isReady; // @synthesize isReady=_isReady;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPNRContextInfo:(id)arg1;
- (id)init;

@end

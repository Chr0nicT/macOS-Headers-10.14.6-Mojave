//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface FudPersonalizationObjectInfo : NSObject
{
    BOOL _esecSet;
    BOOL _eproSet;
    BOOL _trustedSet;
    BOOL _trusted;
    BOOL _effectiveProductionMode;
    BOOL _effectiveSecurityMode;
    NSString *_objectTag;
    NSData *_digest;
    NSDictionary *_customObjectProperties;
}

@property(retain, nonatomic) NSDictionary *customObjectProperties; // @synthesize customObjectProperties=_customObjectProperties;
@property(nonatomic) BOOL effectiveSecurityMode; // @synthesize effectiveSecurityMode=_effectiveSecurityMode;
@property(nonatomic) BOOL effectiveProductionMode; // @synthesize effectiveProductionMode=_effectiveProductionMode;
@property(nonatomic) BOOL trusted; // @synthesize trusted=_trusted;
@property(retain, nonatomic) NSData *digest; // @synthesize digest=_digest;
@property(readonly, copy, nonatomic) NSString *objectTag; // @synthesize objectTag=_objectTag;
- (BOOL)isEffectiveSecurityModeSet;
- (BOOL)isEffectiveProductionModeSet;
- (BOOL)isTrustedSet;
- (void)dealloc;
- (id)initWithTag:(id)arg1;

@end


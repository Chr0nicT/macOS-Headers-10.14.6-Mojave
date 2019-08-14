//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChat/BCDictionarySerializable-Protocol.h>
#import <BusinessChat/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface BCError : NSObject <BCDictionarySerializable, NSSecureCoding>
{
    NSNumber *_code;
    NSString *_domain;
    NSString *_message;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCode:(id)arg1 domain:(id)arg2 message:(id)arg3;

@end

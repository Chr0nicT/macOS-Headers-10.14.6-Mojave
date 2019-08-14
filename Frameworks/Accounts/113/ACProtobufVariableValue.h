//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Accounts/NSCopying-Protocol.h>

@class ACProtobufDate, ACProtobufURL, ACProtobufUUID, ACProtobufVariableValueDictionary, ACProtobufVariableValueList, NSData, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _integerValue;
    unsigned long long _unsignedIntegerValue;
    ACProtobufVariableValueList *_arrayValue;
    NSData *_dataValue;
    ACProtobufDate *_dateValue;
    ACProtobufVariableValueDictionary *_dictionaryValue;
    ACProtobufVariableValueList *_setValue;
    NSString *_stringValue;
    ACProtobufURL *_urlValue;
    ACProtobufUUID *_uuidValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int unsignedIntegerValue:1;
    } _has;
}

@property(retain, nonatomic) ACProtobufVariableValueDictionary *dictionaryValue; // @synthesize dictionaryValue=_dictionaryValue;
@property(retain, nonatomic) ACProtobufVariableValueList *setValue; // @synthesize setValue=_setValue;
@property(retain, nonatomic) ACProtobufVariableValueList *arrayValue; // @synthesize arrayValue=_arrayValue;
@property(retain, nonatomic) ACProtobufURL *urlValue; // @synthesize urlValue=_urlValue;
@property(retain, nonatomic) ACProtobufDate *dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) ACProtobufUUID *uuidValue; // @synthesize uuidValue=_uuidValue;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) unsigned long long unsignedIntegerValue; // @synthesize unsignedIntegerValue=_unsignedIntegerValue;
@property(nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDictionaryValue;
@property(readonly, nonatomic) BOOL hasSetValue;
@property(readonly, nonatomic) BOOL hasArrayValue;
@property(readonly, nonatomic) BOOL hasUrlValue;
@property(readonly, nonatomic) BOOL hasDateValue;
@property(readonly, nonatomic) BOOL hasUuidValue;
@property(readonly, nonatomic) BOOL hasDataValue;
@property(nonatomic) BOOL hasDoubleValue;
@property(nonatomic) BOOL hasUnsignedIntegerValue;
@property(nonatomic) BOOL hasIntegerValue;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(retain, nonatomic) id object;
- (BOOL)_setObject:(id)arg1;
- (id)initWithObjectValue:(id)arg1;

@end

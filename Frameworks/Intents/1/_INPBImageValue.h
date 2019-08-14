//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBImageValue-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@interface _INPBImageValue : PBCodable <_INPBImageValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int height:1;
        unsigned int type:1;
        unsigned int width:1;
    } _has;
    int _type;
    NSData *_data;
    double _height;
    NSString *_proxyServiceIdentifier;
    NSString *_uri;
    _INPBValueMetadata *_valueMetadata;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *proxyServiceIdentifier; // @synthesize proxyServiceIdentifier=_proxyServiceIdentifier;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasWidth;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(readonly, nonatomic) BOOL hasUri;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasProxyServiceIdentifier;
@property(nonatomic) BOOL hasHeight;
@property(readonly, nonatomic) BOOL hasData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

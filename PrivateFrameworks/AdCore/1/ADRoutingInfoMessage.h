//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADRoutingInfoMessage : PBCodable <NSCopying>
{
    NSString *_environmentURL;
    NSString *_protoVersion;
    NSString *_searchType;
}

@property(retain, nonatomic) NSString *protoVersion; // @synthesize protoVersion=_protoVersion;
@property(retain, nonatomic) NSString *environmentURL; // @synthesize environmentURL=_environmentURL;
@property(retain, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
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

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBArticleViewNotw : PBCodable <NSCopying>
{
    NSString *_articleId;
    int _articleViewType;
    float _maxScrollDepth;
    NSString *_referringSite;
    NSString *_referringUrl;
    NSString *_sourceChannelId;
    NSString *_windowId;
    struct {
        unsigned int articleViewType:1;
        unsigned int maxScrollDepth:1;
    } _has;
}

@property(retain, nonatomic) NSString *windowId; // @synthesize windowId=_windowId;
@property(retain, nonatomic) NSString *referringSite; // @synthesize referringSite=_referringSite;
@property(retain, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property(nonatomic) float maxScrollDepth; // @synthesize maxScrollDepth=_maxScrollDepth;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasWindowId;
@property(readonly, nonatomic) BOOL hasReferringSite;
@property(readonly, nonatomic) BOOL hasReferringUrl;
@property(nonatomic) BOOL hasMaxScrollDepth;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(nonatomic) BOOL hasArticleViewType;
@property(nonatomic) int articleViewType; // @synthesize articleViewType=_articleViewType;

@end

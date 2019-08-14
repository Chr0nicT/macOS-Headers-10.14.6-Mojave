//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData, NTPBWidgetEngagement;

@interface NTPBMediaView : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    NSString *_articleId;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_galleryId;
    int _galleryImageCount;
    NSMutableArray *_galleryImageIds;
    int _galleryType;
    NSData *_galleryViewingSessionId;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_mediaId;
    int _mediaType;
    NSString *_metadata;
    NSMutableArray *_namedEntities;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    NTPBWidgetEngagement *_widgetEngagement;
    BOOL _adSupportedChannel;
    BOOL _isDigitalReplicaAd;
    BOOL _isNativeAd;
    BOOL _isUserSubscribedToFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int galleryImageCount:1;
        unsigned int galleryType:1;
        unsigned int mediaType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int adSupportedChannel:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isNativeAd:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

+ (Class)fractionalCohortMembershipType;
+ (Class)galleryImageIdsType;
+ (Class)namedEntitiesType;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(retain, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property(retain, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property(retain, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property(retain, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property(retain, nonatomic) NSData *galleryViewingSessionId; // @synthesize galleryViewingSessionId=_galleryViewingSessionId;
@property(retain, nonatomic) NSString *galleryId; // @synthesize galleryId=_galleryId;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(nonatomic) BOOL isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSMutableArray *galleryImageIds; // @synthesize galleryImageIds=_galleryImageIds;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(nonatomic) BOOL isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) int galleryImageCount; // @synthesize galleryImageCount=_galleryImageCount;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIssueViewData;
@property(readonly, nonatomic) BOOL hasIssueExposureData;
@property(readonly, nonatomic) BOOL hasIssueData;
@property(readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property(readonly, nonatomic) BOOL hasIadNativeAd;
@property(readonly, nonatomic) BOOL hasIadNativeLine;
@property(readonly, nonatomic) BOOL hasIadNativeCampaign;
@property(readonly, nonatomic) BOOL hasGalleryViewingSessionId;
@property(readonly, nonatomic) BOOL hasGalleryId;
@property(nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property(nonatomic) BOOL hasBackendArticleVersionInt64;
@property(nonatomic) BOOL hasPublisherArticleVersionInt64;
@property(nonatomic) BOOL hasIsNativeAd;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(readonly, nonatomic) BOOL hasWidgetEngagement;
@property(readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property(readonly, nonatomic) BOOL hasPreviousArticleId;
@property(readonly, nonatomic) BOOL hasMetadata;
- (id)galleryImageIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)galleryImageIdsCount;
- (void)addGalleryImageIds:(id)arg1;
- (void)clearGalleryImageIds;
@property(nonatomic) BOOL hasPersonalizationTreatmentId;
@property(nonatomic) BOOL hasIsDigitalReplicaAd;
@property(readonly, nonatomic) BOOL hasSectionHeadlineId;
@property(readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property(readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property(readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property(nonatomic) BOOL hasAdSupportedChannel;
@property(nonatomic) BOOL hasBackendArticleVersion;
@property(nonatomic) BOOL hasPublisherArticleVersion;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
@property(nonatomic) BOOL hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) BOOL hasFeedViewExposureId;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedCellSection;
@property(nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property(readonly, nonatomic) BOOL hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
- (int)StringAsGalleryType:(id)arg1;
- (id)galleryTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasGalleryType;
@property(nonatomic) int galleryType; // @synthesize galleryType=_galleryType;
@property(nonatomic) BOOL hasGalleryImageCount;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property(readonly, nonatomic) BOOL hasArticleSessionId;
@property(readonly, nonatomic) BOOL hasReferencedArticleId;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(readonly, nonatomic) BOOL hasMediaId;
- (int)StringAsMediaType:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;

@end

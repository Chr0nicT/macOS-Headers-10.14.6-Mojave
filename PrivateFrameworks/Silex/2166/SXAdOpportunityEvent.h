//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXAnalyticsEvent.h>

@class NSError, NSString, SXADBannerView;

@interface SXAdOpportunityEvent : SXAnalyticsEvent
{
    BOOL _expanded;
    BOOL _shown;
    int _opportunityError;
    NSString *_opportunityIdentifier;
    double _positionInArticle;
    NSString *_componentIdentifier;
    NSError *_error;
    SXADBannerView *_bannerView;
}

@property(nonatomic) BOOL shown; // @synthesize shown=_shown;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) SXADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int opportunityError; // @synthesize opportunityError=_opportunityError;
@property(retain, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(nonatomic) double positionInArticle; // @synthesize positionInArticle=_positionInArticle;
@property(retain, nonatomic) NSString *opportunityIdentifier; // @synthesize opportunityIdentifier=_opportunityIdentifier;
- (void).cxx_destruct;
- (id)description;

@end

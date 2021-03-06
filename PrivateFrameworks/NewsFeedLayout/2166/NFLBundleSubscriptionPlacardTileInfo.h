//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NFLHeadlineTileInfo, NSArray, NSString;

@interface NFLBundleSubscriptionPlacardTileInfo : NSObject <NFLFeedTileInfo>
{
}

- (id)updatedTileInfoWithNewHeadline:(id)arg1;
@property(readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property(readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property(readonly, nonatomic) BOOL pageable;
@property(readonly, nonatomic) NSArray *underlyingFeedElements;
@property(readonly, nonatomic) unsigned long long tileInfoType;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *groupIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


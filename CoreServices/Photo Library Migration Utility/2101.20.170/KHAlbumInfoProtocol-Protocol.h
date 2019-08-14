//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol KHAlbumInfoProtocol <NSObject>
@property(readonly) NSArray *photoUids;
@property(readonly) NSArray *photos;
@property(readonly) unsigned long long photoCount;
@property(readonly) NSString *keyPhotoUid;
@property(readonly) NSString *title;
@property(readonly) NSString *pageLayoutUid;
- (int)albumSortDirection;
- (int)albumSortOrder;
- (BOOL)containsPhotoWithUID:(NSString *)arg1;
@end

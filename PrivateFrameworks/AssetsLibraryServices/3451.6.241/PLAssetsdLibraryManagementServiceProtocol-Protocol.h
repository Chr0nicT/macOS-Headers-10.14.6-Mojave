//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSData, NSURL;

@protocol PLAssetsdLibraryManagementServiceProtocol <NSObject>
- (void)getPhotoLibraryURLsWithReply:(void (^)(NSURL *, NSURL *, NSError *))arg1;
- (void)getActivePhotoLibrariesWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)setSystemPhotoLibraryURL:(NSURL *)arg1 bookmark:(NSData *)arg2 options:(unsigned short)arg3 reply:(void (^)(NSError *))arg4;
- (void)isSystemLibraryURLDefined:(void (^)(BOOL))arg1;
- (void)systemPhotoLibraryURL:(void (^)(NSURL *, NSError *))arg1;
@end

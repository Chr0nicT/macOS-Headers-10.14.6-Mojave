//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSXPCListenerEndpoint, PLXPCObject;

@protocol PLAssetsdDiagnosticsServiceProtocol <NSObject>
- (void)initializeSharedMemoryForDeferredLogs:(PLXPCObject *)arg1;
- (void)setPhotosXPCEndpoint:(NSXPCListenerEndpoint *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)getPhotosXPCEndpointWithReply:(void (^)(BOOL, NSXPCListenerEndpoint *, NSError *))arg1;
- (void)incompleteRestoreProcessesWithReply:(void (^)(NSArray *))arg1;
- (void)dumpPhotoAnalysisStatusWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)dumpStatusIncludingDaemon:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
@end

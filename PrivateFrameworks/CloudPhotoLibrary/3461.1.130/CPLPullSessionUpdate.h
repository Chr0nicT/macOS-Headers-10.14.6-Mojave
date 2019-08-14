//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch;

@interface CPLPullSessionUpdate : CPLChangeSessionUpdate
{
    CPLChangeBatch *_clientBatch;
    CPLChangeBatch *_cloudBatch;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CPLChangeBatch *cloudBatch; // @synthesize cloudBatch=_cloudBatch;
@property(readonly, nonatomic) CPLChangeBatch *clientBatch; // @synthesize clientBatch=_clientBatch;
- (void).cxx_destruct;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;
- (BOOL)discardFromStore:(id)arg1 error:(id *)arg2;
- (BOOL)applyToStore:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1 expandedClientBatch:(id)arg2 expandedCloudBatch:(id)arg3;

@end

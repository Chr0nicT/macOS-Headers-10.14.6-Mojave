//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/PQLResultSetInitializer-Protocol.h>

@class NSString;

@interface CPLPrequeliteUploadResource : NSObject <PQLResultSetInitializer>
{
    BOOL _available;
    int _retryCount;
    int _status;
    unsigned long long _position;
    unsigned long long _pendingCount;
    NSString *_itemIdentifier;
    unsigned long long _resourceType;
    NSString *_fingerPrint;
    NSString *_fileUTI;
    NSString *_originalPath;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(copy, nonatomic) NSString *originalPath; // @synthesize originalPath=_originalPath;
@property(copy, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property(copy, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) unsigned long long pendingCount; // @synthesize pendingCount=_pendingCount;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)resource;
- (id)initWithResource:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

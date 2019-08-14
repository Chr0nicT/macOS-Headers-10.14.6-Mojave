//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface CKAssetDownloadPreauthorization : NSObject <NSCopying>
{
    NSString *_responseUUID;
    NSDictionary *_contentResponseHeaders;
    NSData *_contentResponseBody;
}

@property(retain, nonatomic) NSData *contentResponseBody; // @synthesize contentResponseBody=_contentResponseBody;
@property(retain, nonatomic) NSDictionary *contentResponseHeaders; // @synthesize contentResponseHeaders=_contentResponseHeaders;
@property(retain, nonatomic) NSString *responseUUID; // @synthesize responseUUID=_responseUUID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3;

@end

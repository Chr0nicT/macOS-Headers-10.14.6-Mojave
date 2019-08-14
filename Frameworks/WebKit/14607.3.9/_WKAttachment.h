//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, _WKAttachmentInfo;

@interface _WKAttachment : NSObject <WKObject>
{
    struct ObjectStorage<API::Attachment> _attachment;
}

@property(readonly, nonatomic, getter=isConnected) BOOL connected;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (void)setData:(id)arg1 newContentType:(id)arg2 newFilename:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFileWrapper:(id)arg1 contentType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestInfo:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _WKAttachmentInfo *info;
@property(readonly) struct Object *_apiObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

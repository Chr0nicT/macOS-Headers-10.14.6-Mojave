//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DMDAVCopy : ISS_DAVRequest
{
}

+ (id)copyRequestWithSession:(id)arg1 sourceURI:(id)arg2 destinationURI:(id)arg3 token:(id)arg4;
- (void)finalizeOperation;
- (id)initCopyWithSession:(id)arg1 sourceURI:(id)arg2 destinationURI:(id)arg3 token:(id)arg4;

@end

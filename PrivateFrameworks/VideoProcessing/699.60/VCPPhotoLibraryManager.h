//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoProcessing/PHPhotoLibraryAvailabilityObserver-Protocol.h>

@class NSString, NSURL, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface VCPPhotoLibraryManager : NSObject <PHPhotoLibraryAvailabilityObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_systemPhotoLibraryURL;
    PHPhotoLibrary *_systemPhotoLibrary;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)closeSystemPhotoLibrary;
- (id)systemPhotoLibrary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

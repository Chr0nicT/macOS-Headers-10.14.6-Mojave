//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PFURLHandlingSubsystem-Protocol.h"

@class NSString;

@interface IPXProjectExtensionURLHandling : NSObject <PFURLHandlingSubsystem>
{
    CDUnknownBlockType _showProjectCreateSheetHandler;
}

@property(copy, nonatomic) CDUnknownBlockType showProjectCreateSheetHandler; // @synthesize showProjectCreateSheetHandler=_showProjectCreateSheetHandler;
- (void).cxx_destruct;
- (void)_findExtensionForAppBundleIndentifier:(id)arg1 category:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_findExtensionForExtensionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showSheetForExtension:(id)arg1 category:(id)arg2;
- (void)handleURL:(id)arg1;
- (BOOL)urlRequiresSystemLibrary:(id)arg1;
- (BOOL)willHandleURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


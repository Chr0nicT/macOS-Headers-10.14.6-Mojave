//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBackgroundActivityScheduler;

@interface MFEMLXUpgrader : NSObject
{
    NSBackgroundActivityScheduler *_mimeSnipActivityScheduler;
    CDUnknownBlockType _mimeSnipActivityCompletionHandler;
    NSBackgroundActivityScheduler *_libraryCompressionActivityScheduler;
    CDUnknownBlockType _libraryCompressionCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType libraryCompressionCompletionHandler; // @synthesize libraryCompressionCompletionHandler=_libraryCompressionCompletionHandler;
@property(retain, nonatomic) NSBackgroundActivityScheduler *libraryCompressionActivityScheduler; // @synthesize libraryCompressionActivityScheduler=_libraryCompressionActivityScheduler;
@property(copy, nonatomic) CDUnknownBlockType mimeSnipActivityCompletionHandler; // @synthesize mimeSnipActivityCompletionHandler=_mimeSnipActivityCompletionHandler;
@property(retain, nonatomic) NSBackgroundActivityScheduler *mimeSnipActivityScheduler; // @synthesize mimeSnipActivityScheduler=_mimeSnipActivityScheduler;
- (void).cxx_destruct;
- (BOOL)_libraryCompressionComplete;
- (BOOL)_mimeSnipUpgraderComplete;
- (void)_cleanupMessageXAttrsInAccountDirectories:(id)arg1;
- (id)_checkMIMEInEMLXFile:(id)arg1;
- (void)_snipAttachmentMIMEInAccountDirectories:(id)arg1;
- (void)_cleanupSpotlightIndexForMailboxDirectory:(id)arg1;
- (BOOL)_compressionNeededForMailbox:(id)arg1;
- (void)_compressLibraryDirectories:(id)arg1;
- (void)_runLibraryCompressionIfNeeded;
- (void)_runMIMESnipUpradesIfNeeded;
- (void)runIfNeeded;
- (void)dealloc;

@end

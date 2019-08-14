//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, RDImportGroup;

@interface RDImportMedia : NSObject
{
    NSFileManager *_fileManager;
    int _currentImportGroupSpinlock;
    RDImportGroup *_currentImportGroup;
    BOOL _hardlink;
}

@property BOOL hardlink; // @synthesize hardlink=_hardlink;
- (void).cxx_destruct;
- (void)importAttachmentFromAttachment:(id)arg1 toAttachment:(id)arg2 atEnd:(CDUnknownBlockType)arg3;
- (void)importFaceTileMediaFromModel:(id)arg1 toModel:(id)arg2 fromFaceTileId:(unsigned long long)arg3 toFaceTileId:(unsigned long long)arg4 atEnd:(CDUnknownBlockType)arg5;
- (void)importDerivativeMediaFromModel:(id)arg1 toModel:(id)arg2 forStyle:(unsigned short)arg3 atEnd:(CDUnknownBlockType)arg4;
- (void)importOriginalFromMaster:(id)arg1 toMaster:(id)arg2 atEnd:(CDUnknownBlockType)arg3;
- (id)_importWithAbsolutePath:(id)arg1 srcFD:(int)arg2 toModel:(id)arg3 withImageStyle:(unsigned short)arg4 toFaceTileId:(unsigned long long)arg5 bytesCopied:(unsigned long long *)arg6 hardlink:(BOOL)arg7;
- (id)_importGroupForMaster:(id)arg1;
- (id)importWithAbsolutePath:(id)arg1 toModel:(id)arg2 withImageStyle:(unsigned short)arg3 toFaceTileId:(unsigned long long)arg4 bytesCopied:(unsigned long long *)arg5;
- (id)importWithAbsolutePath:(id)arg1 toModel:(id)arg2 withImageStyle:(unsigned short)arg3 bytesCopied:(unsigned long long *)arg4;
- (id)importWithAbsolutePath:(id)arg1 toModel:(id)arg2 bytesCopied:(unsigned long long *)arg3;
- (int)openMediaWithPath:(id)arg1 readOnly:(BOOL)arg2 ignoreExisting:(BOOL)arg3 hardlink:(BOOL)arg4 error:(id *)arg5;
- (id)init;

@end

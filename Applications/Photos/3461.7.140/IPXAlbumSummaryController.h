//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXAlbumAndFolderSummaryController.h"

@class RDAlbum;
@protocol IPXCollection;

@interface IPXAlbumSummaryController : IPXAlbumAndFolderSummaryController
{
    RDAlbum *_album;
    id <IPXCollection> _albumContentsCollection;
}

- (void).cxx_destruct;
- (void)setAlbumContentsCollection:(id)arg1;
- (void)summaryUpdate;
- (id)album;
- (id)initWithAlbum:(id)arg1 delegate:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IPXEffectTileController, PACGImage;

@protocol IPXEffectTileUpdateDelegate
- (void)resetThumbnailForTileController:(IPXEffectTileController *)arg1;
- (void)effectTileController:(IPXEffectTileController *)arg1 thumbnailUpdated:(PACGImage *)arg2 isFinal:(BOOL)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXTilingViewTile.h"

@class IPXTilingControllerItem;

@interface IPXMomentsScrubberControllerTile : IPXTilingViewTile
{
    IPXTilingControllerItem *_item;
}

+ (id)dispatchQueue;
@property(retain) IPXTilingControllerItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (BOOL)_setLayerContentsFromCache:(id)arg1;
- (id)debugDescription;
- (void)setFrame:(struct CGRect)arg1;
- (id)tileCollection;
- (void)updateLayer;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)setItem:(id)arg1 withSize:(struct CGSize)arg2 cacheKeys:(id)arg3;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSVisualTabPickerTileContainerView;

@protocol NSVisualTabPickerTileContainerDelegate <NSObject>
- (void)didRequestNewTabForNSVisualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1;
- (void)visualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1 didSelectTileAtIndex:(unsigned long long)arg2;
- (void)visualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1 closeTileAtIndex:(unsigned long long)arg2;
- (BOOL)canCloseNSVisualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1;
@end

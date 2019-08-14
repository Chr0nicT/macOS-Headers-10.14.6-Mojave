//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/NSObject-Protocol.h>

@class HUGridCellLayoutOptions;

@protocol HUGridCellProtocol <NSObject, HUCellProtocol>
+ (Class)layoutOptionsClass;
@property(retain, nonatomic) HUGridCellLayoutOptions *layoutOptions;
@property(nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden;

@optional
@property(nonatomic, getter=isRearranging) BOOL rearranging;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSColor, NSFont, NSImage;

@interface CRKUIConstants_macOS : NSObject
{
}

+ (id)classroomKitBundle;
+ (id)constants;
- (id)imageNamed:(id)arg1;
- (id)colorNamed:(id)arg1;
@property(readonly, nonatomic) NSFont *avatarLabelFont;
@property(readonly, nonatomic) NSImage *avatarPlaceholderImage;
@property(readonly, nonatomic) struct CGSize avatarPickerMaxImageSize;
@property(readonly, nonatomic) double avatarEditSashBackgroundOriginYRatio;
@property(readonly, nonatomic) double avatarPickerDiameter;
@property(readonly, nonatomic) NSArray *avatarSashGradientColors;
@property(readonly, nonatomic) NSColor *avatarLabelColor;
@property(readonly, nonatomic) NSColor *avatarMouseOverOverlayColor;
@property(readonly, nonatomic) NSColor *avatarMouseDownOverlayColor;

@end

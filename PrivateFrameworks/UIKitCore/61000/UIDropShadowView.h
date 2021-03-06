//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView
{
    UIView *_backgroundImage;
    NSDictionary *_preservedLayerValues;
    BOOL _masksTopCornersOnly;
    double _cornerRadius;
    UIView *_contentView;
}

@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) BOOL masksTopCornersOnly; // @synthesize masksTopCornersOnly=_masksTopCornersOnly;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)didFinishRotation;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect)arg1 newBounds:(struct CGRect)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateShadowPath;
- (id)init;

@end


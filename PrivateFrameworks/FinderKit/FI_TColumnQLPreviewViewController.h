//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TPropertyQLPreviewViewController.h>

__attribute__((visibility("hidden")))
@interface FI_TColumnQLPreviewViewController : FI_TPropertyQLPreviewViewController
{
    _Bool _isApplicableToUI;
}

+ (id)keyPathsForValuesAffectingShouldBeVisible;
@property(nonatomic, getter=isApplicableToUI) _Bool applicableToUI; // @synthesize applicableToUI=_isApplicableToUI;
- (_Bool)shouldBeVisible;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (void)dealloc;
- (void)viewLoaded;
- (void)initCommon;

@end


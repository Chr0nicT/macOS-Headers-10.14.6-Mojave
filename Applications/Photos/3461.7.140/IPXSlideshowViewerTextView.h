//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MRMarimbaTextView.h>

@class NSView;

@interface IPXSlideshowViewerTextView : MRMarimbaTextView
{
    NSView *_ringView;
    struct CGRect _cleanAperture;
}

@property(nonatomic) struct CGRect cleanAperture; // @synthesize cleanAperture=_cleanAperture;
@property(readonly) NSView *ringView; // @synthesize ringView=_ringView;
- (void).cxx_destruct;
- (void)textBoundsNeedsUpdate;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inMarimbaPlayer:(id)arg2 forText:(id)arg3;

@end

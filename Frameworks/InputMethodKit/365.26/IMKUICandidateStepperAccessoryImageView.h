//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSString;

@interface IMKUICandidateStepperAccessoryImageView : NSView
{
    NSImage *_arrowImage;
    NSString *_arrowImageName;
}

@property(copy, nonatomic) NSString *arrowImageName; // @synthesize arrowImageName=_arrowImageName;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

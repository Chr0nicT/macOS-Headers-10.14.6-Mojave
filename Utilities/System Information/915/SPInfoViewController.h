//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSBundle, NSImage, NSString, NSTouchBar;

@interface SPInfoViewController : NSViewController
{
    NSBundle *_bundle;
    NSImage *_icon;
    NSString *_subtitle;
    NSTouchBar *_subTouchBar;
}

@property(readonly) NSTouchBar *subTouchBar; // @synthesize subTouchBar=_subTouchBar;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
- (void)keyDown:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

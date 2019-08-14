//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class AACControllerRequest, NSImage, NSString;

@interface AACChangeRequestWindowController : NSWindowController
{
    AACControllerRequest *_request;
    NSString *_windowTitle;
    NSString *_mainText;
    NSString *_informativeText;
    NSImage *_image;
}

@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(retain, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
@property(retain, nonatomic) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property(nonatomic) __weak AACControllerRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)dontChange:(id)arg1;
- (void)change:(id)arg1;
- (void)windowDidLoad;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSAttributedString, NSButton, NSTextView;

@interface FTPreferencesAboutWindowController : NSWindowController
{
    NSTextView *_textView;
    NSButton *_doneButton;
    NSAttributedString *_bodyText;
}

@property(retain) NSAttributedString *bodyText; // @synthesize bodyText=_bodyText;
@property __weak NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) NSTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)done:(id)arg1;
- (void)windowDidLoad;
- (id)initWithBodyText:(id)arg1;

@end

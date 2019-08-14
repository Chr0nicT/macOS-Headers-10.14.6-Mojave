//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class FI_TTextField, NSButton, NSSavePanel, NSTextField;

__attribute__((visibility("hidden")))
@interface FI_NewFolderController : NSWindowController
{
    NSSavePanel *_savePanel;
    FI_TTextField *_promptField;
    NSTextField *_folderNameField;
    NSTextField *_errorMessage;
    NSButton *_cancelButton;
    NSButton *_okButton;
}

- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (_Bool)legalNameCheck:(const struct TString *)arg1;
- (id)runModalForSavePanel:(id)arg1;
- (_Bool)isRunning;
- (id)_defaultNewFolderName;
- (void)controlTextDidChange:(id)arg1;
- (void)_updateOkButtonEnabledStateAndErrorMessage;
- (struct TString)parentName;
- (struct TString)_folderPath;
- (id)init;

@end

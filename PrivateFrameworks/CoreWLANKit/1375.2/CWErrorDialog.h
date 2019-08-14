//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class CWNetwork, NSButton, NSString, NSTextField;

@interface CWErrorDialog : NSWindowController
{
    NSString *_networkName;
    CWNetwork *_network;
    NSTextField *_title;
    NSTextField *_description;
    NSButton *_runDiagnosticsButton;
    NSButton *_okButton;
    NSButton *_cancelButton;
    id _delegate;
    BOOL _installerContext;
}

@property(readonly, copy) NSString *networkName; // @synthesize networkName=_networkName;
@property(readonly, copy) CWNetwork *network; // @synthesize network=_network;
@property __weak id delegate; // @synthesize delegate=_delegate;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (void)onCancelButton:(id)arg1;
- (void)onRunDiagnosticsButton:(id)arg1;
- (void)onOKButton:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (void)dealloc;
- (id)initWithNetwork:(id)arg1 networkName:(id)arg2;

@end

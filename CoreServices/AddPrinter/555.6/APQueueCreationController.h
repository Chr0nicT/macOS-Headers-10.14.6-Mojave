//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "PMXPCSupportDelegate-Protocol.h"

@class InstallableOptionsView, NSBox, NSImage, NSMutableDictionary, NSString, NSView, PMXPCSupport;
@protocol APQueueCreationControllerDelegate;

@interface APQueueCreationController : NSWindowController <PMXPCSupportDelegate>
{
    NSBox *contentView;
    NSView *progressView;
    NSView *optionsView;
    InstallableOptionsView *installableOptionsView;
    id _printer;
    NSMutableDictionary *_driver;
    NSString *_name;
    NSString *_location;
    NSString *_ppdPath;
    NSString *_queueID;
    struct ppd_file_s *_ppd;
    PMXPCSupport *xpc;
    long long _suState;
    id <APQueueCreationControllerDelegate> _delegate;
    unsigned long long _state;
    BOOL _canCancel;
    BOOL _canSkip;
    BOOL _canConfigure;
    BOOL _isIndeterminate;
    BOOL _isCancelled;
    BOOL _isSkipped;
    BOOL _driversDownloaded;
    BOOL _creatingAirFax;
    double _progressPercentage;
    double _progressMinimum;
    double _progressMaximum;
    NSString *_titleString;
    NSString *_stateString;
    NSString *_alertString;
    NSString *_reasonString;
    NSString *_existingQueueID;
    void *_autosetupContext;
    BOOL _showedInstallableOptionsView;
    NSString *_defaultUserName;
}

+ (id)controller;
@property(retain) NSString *defaultUserName; // @synthesize defaultUserName=_defaultUserName;
@property BOOL showedInstallableOptionsView; // @synthesize showedInstallableOptionsView=_showedInstallableOptionsView;
@property(retain) NSString *existingQueueID; // @synthesize existingQueueID=_existingQueueID;
@property(retain) NSString *reasonString; // @synthesize reasonString=_reasonString;
@property(retain) NSString *alertString; // @synthesize alertString=_alertString;
@property(retain) NSString *stateString; // @synthesize stateString=_stateString;
@property(retain) NSString *titleString; // @synthesize titleString=_titleString;
@property double progressMaximum; // @synthesize progressMaximum=_progressMaximum;
@property double progressMinimum; // @synthesize progressMinimum=_progressMinimum;
@property double progressPercentage; // @synthesize progressPercentage=_progressPercentage;
@property BOOL isIndeterminate; // @synthesize isIndeterminate=_isIndeterminate;
@property BOOL driversDownloaded; // @synthesize driversDownloaded=_driversDownloaded;
@property BOOL creatingAirFax; // @synthesize creatingAirFax=_creatingAirFax;
@property BOOL isSkipped; // @synthesize isSkipped=_isSkipped;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property BOOL canConfigure; // @synthesize canConfigure=_canConfigure;
@property BOOL canSkip; // @synthesize canSkip=_canSkip;
@property BOOL canCancel; // @synthesize canCancel=_canCancel;
@property long long suState; // @synthesize suState=_suState;
@property(retain) PMXPCSupport *xpc; // @synthesize xpc;
@property(retain) NSString *queueID; // @synthesize queueID=_queueID;
@property unsigned long long state; // @synthesize state=_state;
@property id <APQueueCreationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *location; // @synthesize location=_location;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSMutableDictionary *driver; // @synthesize driver=_driver;
@property(retain) id printer; // @synthesize printer=_printer;
- (void)stateUpdated:(id)arg1;
- (void)logAirPrintUsage;
- (id)determineDefaultQueue:(struct _http_s *)arg1 host:(id)arg2;
- (void)showOptionsView;
@property void *autosetupContext;
@property(retain) NSString *ppdPath; // @dynamic ppdPath;
@property NSImage *stateIcon; // @dynamic stateIcon;
@property NSImage *icon; // @dynamic icon;
@property struct ppd_file_s *ppd; // @dynamic ppd;
- (void)skipButtonClick:(id)arg1;
- (void)configureDone:(id)arg1;
- (void)configureButtonClick:(id)arg1;
- (void)cancelButtonClick:(id)arg1;
- (void)windowDidLoad;
- (int)beginQueueCreationFor:(id)arg1 usingDriver:(id)arg2 name:(id)arg3 location:(id)arg4 delegate:(id)arg5;
- (void)dealloc;
- (int)addPPDBasedPrinter;
- (int)verifyFilter:(const char *)arg1 type:(int)arg2;
- (BOOL)verifyPPD:(struct ppd_file_s *)arg1 warnings:(int *)arg2 errors:(int *)arg3 fatal:(char *)arg4;
- (void)notifyQueueCompleted:(long long)arg1 error:(id)arg2;
- (id)matchingAirFaxWithQueueID:(id)arg1;
- (id)printerName;
- (int)verifyPrinterInformation;
- (id)printerURIForAutoSetup:(char *)arg1;
- (BOOL)ppdIsPostscript;
- (const char *)ppdAutoSetupTool;
- (const char *)ppdIconPath;
- (BOOL)shouldManuallySetup;
- (BOOL)hasInstallableOptions;
- (void)buttonPressed:(id)arg1;
- (void)presentErrorWithMessageText:(id)arg1 buttons:(id)arg2 alertStyle:(unsigned long long)arg3 informativeTextWithFormat:(id)arg4;
- (void)switchPanelTo:(id)arg1;
- (void)handleEventForCommand:(int)arg1 status:(int)arg2 event:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

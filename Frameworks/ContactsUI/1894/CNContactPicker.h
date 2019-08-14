//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactPickerInternalResponseDelegate-Protocol.h>
#import <ContactsUI/NSPopoverDelegate-Protocol.h>

@class NSArray, NSPopover, NSString, NSViewController;
@protocol CNContactPickerDelegate, CNContactPickerViewController><CNContactPickerInternalSetup;

@interface CNContactPicker : NSObject <NSPopoverDelegate, CNContactPickerInternalResponseDelegate>
{
    NSPopover *_popover;
    NSViewController<CNContactPickerViewController><CNContactPickerInternalSetup> *_viewController;
    NSArray *_displayedKeys;
    id <CNContactPickerDelegate> _delegate;
}

+ (id)swapKeysAndValuesOfDictionary:(id)arg1;
+ (id)publicToCompatibilityKeyMap;
+ (id)supportedKeysToDisplay;
+ (BOOL)shouldUseInProcessPicker;
+ (id)makeViewController;
+ (id)makePopoverWithDelegate:(id)arg1 contentViewController:(id)arg2;
@property(copy) NSArray *displayedKeys; // @synthesize displayedKeys=_displayedKeys;
@property __weak id <CNContactPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setAppearance:(id)arg1;
- (void)setSearchFieldVisible:(BOOL)arg1;
- (void)registerSectionsForDraggedTypes:(id)arg1;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)addSection:(id)arg1;
- (void)didShowSectionWithIdentifier:(id)arg1;
- (void)didSearchForString:(id)arg1;
- (void)didSelectContact:(id)arg1 key:(id)arg2 value:(id)arg3 identifier:(id)arg4;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)close;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (BOOL)delegateExpectesCompatiblityContact;
- (id)privateDelegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

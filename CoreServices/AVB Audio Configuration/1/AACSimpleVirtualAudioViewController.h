//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDelegate-Protocol.h"

@class AACCentralManager, NSMutableArray, NSString;

@interface AACSimpleVirtualAudioViewController : NSViewController <NSTableViewDelegate>
{
    NSMutableArray *_svaEntities;
    AACCentralManager *_centralManager;
}

@property(retain, nonatomic) AACCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) NSMutableArray *svaEntities; // @synthesize svaEntities=_svaEntities;
- (void).cxx_destruct;
- (void)didRemoveInterface:(id)arg1;
- (void)didAddInterface:(id)arg1;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (void)updateInterfaceList;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

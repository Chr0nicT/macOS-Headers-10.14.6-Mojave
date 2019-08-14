//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUInstructionsTableViewController.h>

@class HFCharacteristicTriggerBuilder, HOCharacteristicTriggerServicePickerContentViewController;
@protocol HOTriggerEditorDelegate;

@interface HOCharacteristicTriggerServicePickerViewController : HUInstructionsTableViewController
{
}

+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (unsigned long long)sourceForCharacteristicTriggerBuilder:(id)arg1;
+ (BOOL)canPickServicesFromSource:(unsigned long long)arg1 home:(id)arg2;
@property(nonatomic) __weak id <HOTriggerEditorDelegate> delegate;
@property(readonly, nonatomic) unsigned long long source;
@property(readonly, nonatomic) unsigned long long mode;
@property(readonly, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property(readonly, nonatomic) HOCharacteristicTriggerServicePickerContentViewController *servicePickerContentViewController;
- (void)viewDidLoad;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 source:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;

@end

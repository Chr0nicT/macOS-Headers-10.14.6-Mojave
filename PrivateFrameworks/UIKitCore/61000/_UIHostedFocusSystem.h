//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIFocusSystem.h>

@protocol UIFocusEnvironment, _UIHostedFocusSystemDelegate;

__attribute__((visibility("hidden")))
@interface _UIHostedFocusSystem : UIFocusSystem
{
    BOOL _didSetFocusSoundGenerator;
    id <UIFocusEnvironment> _hostEnvironment;
}

@property(readonly, nonatomic) __weak id <UIFocusEnvironment> hostEnvironment; // @synthesize hostEnvironment=_hostEnvironment;
- (void).cxx_destruct;
- (BOOL)_isEligibleForFocusInteraction;
- (BOOL)_postsFocusUpdateNotifications;
- (BOOL)_requiresFocusedItemToHaveContainingView;
- (void)_setFocusSoundGenerator:(id)arg1;
- (id)_focusSoundGenerator;
- (id)_hostFocusSystem;
- (BOOL)containsChildOfHostEnvironment:(id)arg1;
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <_UIHostedFocusSystemDelegate> delegate;
- (id)_initWithHostEnvironment:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSSet;

@interface MNAudioOutputSetting : NSObject <NSSecureCoding>
{
    NSSet *_pickableRoutes;
    BOOL _selected;
    BOOL _selectedForSystem;
    BOOL _hfpPreference;
}

+ (BOOL)isBluetoothRoute:(id)arg1;
+ (id)macAddressForRoute:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL selectedForSystem; // @synthesize selectedForSystem=_selectedForSystem;
- (void).cxx_destruct;
- (void)setHfpPreference:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hfpPreference;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 shouldSetHFPPreference:(BOOL)arg2;
- (BOOL)selectedForRouteSelection:(unsigned long long)arg1;
- (BOOL)isPicked;
- (BOOL)_isPicked:(id)arg1;
- (void)setPicked:(BOOL)arg1;
- (BOOL)_pickRoute:(id)arg1;
- (BOOL)pickedStateConsistentWithHFPPreference;
- (id)pickableRouteForHFPPreference:(BOOL)arg1;
- (BOOL)_isHFPRoute:(id)arg1;
- (BOOL)allowHFPPreferenceSelectionForRouteSelection:(unsigned long long)arg1;
- (BOOL)settingSupportsBluetoothHFP;
- (BOOL)settingForDefaultRoute;
- (BOOL)settingForBluetoothComboDevice;
- (BOOL)settingForBluetoothDevice;
- (BOOL)isEqualToSetting:(id)arg1;
- (id)macAddress;
- (id)routeUID;
- (id)description;
- (BOOL)containsPickableRoute:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPickableRoutes:(id)arg1;
- (id)initWithPickableRoute:(id)arg1;

@end

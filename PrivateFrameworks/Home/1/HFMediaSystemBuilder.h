//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import <Home/HFServiceLikeBuilder-Protocol.h>

@class HFAppleMusicAccountArbitrator, HFRoomBuilder, HMAccessory, HMMediaSystem, HMMediaSystemBuilder, NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFMediaSystemBuilder : HFItemBuilder <HFServiceLikeBuilder>
{
    BOOL _isFavorite;
    BOOL _hasSetRoom;
    BOOL _isCreatingMediaSystem;
    id <HFIconDescriptor> _iconDescriptor;
    HFAppleMusicAccountArbitrator *_accountArbitrator;
    HMAccessory *_firstSetupSourceAccessory;
    HMMediaSystemBuilder *_homeKitMediaSystemBuilder;
    HFRoomBuilder *_roomBuilder;
}

+ (Class)homeKitRepresentationClass;
@property(nonatomic) BOOL isCreatingMediaSystem; // @synthesize isCreatingMediaSystem=_isCreatingMediaSystem;
@property(nonatomic) BOOL hasSetRoom; // @synthesize hasSetRoom=_hasSetRoom;
@property(retain, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
@property(retain, nonatomic) HMMediaSystemBuilder *homeKitMediaSystemBuilder; // @synthesize homeKitMediaSystemBuilder=_homeKitMediaSystemBuilder;
@property(readonly, nonatomic) HMAccessory *firstSetupSourceAccessory; // @synthesize firstSetupSourceAccessory=_firstSetupSourceAccessory;
@property(retain, nonatomic) HFAppleMusicAccountArbitrator *accountArbitrator; // @synthesize accountArbitrator=_accountArbitrator;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
- (void).cxx_destruct;
- (id)_firstUnpopulatedRole;
@property(retain, nonatomic) HFRoomBuilder *room;
@property(readonly, nonatomic) BOOL supportsFavoriting;
- (id)_defaultName;
@property(readonly, nonatomic) NSString *originalName;
- (id)_rooms;
- (id)_updateAssistantAccessControl;
- (id)_updateRoom;
- (id)_updateFavorite;
- (id)_commitChangesToMediaSystemBuilder;
- (id)commitItem;
- (BOOL)swapRoles;
- (BOOL)shouldAllowAddingAccessory:(id)arg1;
- (id)removeItemFromHome;
- (id)accessories;
- (id)roleForAccessory:(id)arg1;
- (id)accessoryForRole:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1 role:(id)arg2;
- (void)addAccessory:(id)arg1;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) HMMediaSystem *mediaSystem;
- (void)setMediaSystem:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *availableIconDescriptors;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber;

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject
{
    BOOL _homeHasLocalChanges;
}

+ (id)properties;
@property(nonatomic) BOOL homeHasLocalChanges; // @synthesize homeHasLocalChanges=_homeHasLocalChanges;

// Remaining properties
@property(retain, nonatomic) NSNumber *configurationVersion; // @dynamic configurationVersion;

@end

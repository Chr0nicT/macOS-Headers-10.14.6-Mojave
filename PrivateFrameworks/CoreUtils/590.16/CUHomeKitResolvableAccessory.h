//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMAccessory, NSData;

__attribute__((visibility("hidden")))
@interface CUHomeKitResolvableAccessory : NSObject
{
    HMAccessory *_accessory;
    NSData *_irkData;
}

@property(retain, nonatomic) NSData *irkData; // @synthesize irkData=_irkData;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPConnectionsAddressFormatter : NSObject
{
}

+ (id)addressDictionaryFromAttributeSet:(id)arg1;
+ (id)formattedAddressWithLocationField:(unsigned char)arg1 address:(id)arg2 duetEvent:(id)arg3 shortStyle:(BOOL)arg4;
+ (id)postalAddressFromAttributeSet:(id)arg1;
+ (id)postalAddressFromDuetEvent:(id)arg1;
+ (id)singleLineFormattedAddressWithPostalAddress:(id)arg1 shortStyle:(BOOL)arg2;
+ (id)formattedCityAndStateWithCity:(id)arg1 state:(id)arg2;
+ (id)formattedStreetNameWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2;
+ (BOOL)isValidAddressDictionary:(id)arg1;
+ (id)addressComponentValueWithLocationField:(unsigned char)arg1 forAddress:(id)arg2 duetEvent:(id)arg3;

@end

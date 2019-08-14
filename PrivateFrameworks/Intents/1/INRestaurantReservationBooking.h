//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INRestaurantReservationBookingExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INRestaurant, NSArray, NSDate, NSString;

@interface INRestaurantReservationBooking : NSObject <INRestaurantReservationBookingExport, NSSecureCoding, NSCopying>
{
    BOOL _bookingAvailable;
    BOOL _requiresManualRequest;
    BOOL _requiresEmailAddress;
    BOOL _requiresName;
    BOOL _requiresPhoneNumber;
    INRestaurant *_restaurant;
    NSString *_bookingDescription;
    NSDate *_bookingDate;
    unsigned long long _partySize;
    NSString *_bookingIdentifier;
    NSArray *_offers;
}

+ (BOOL)supportsSecureCoding;
@property BOOL requiresPhoneNumber; // @synthesize requiresPhoneNumber=_requiresPhoneNumber;
@property BOOL requiresName; // @synthesize requiresName=_requiresName;
@property BOOL requiresEmailAddress; // @synthesize requiresEmailAddress=_requiresEmailAddress;
@property BOOL requiresManualRequest; // @synthesize requiresManualRequest=_requiresManualRequest;
@property(copy) NSArray *offers; // @synthesize offers=_offers;
@property(getter=isBookingAvailable) BOOL bookingAvailable; // @synthesize bookingAvailable=_bookingAvailable;
@property(copy) NSString *bookingIdentifier; // @synthesize bookingIdentifier=_bookingIdentifier;
@property unsigned long long partySize; // @synthesize partySize=_partySize;
@property(copy) NSDate *bookingDate; // @synthesize bookingDate=_bookingDate;
@property(copy) NSString *bookingDescription; // @synthesize bookingDescription=_bookingDescription;
@property(copy) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

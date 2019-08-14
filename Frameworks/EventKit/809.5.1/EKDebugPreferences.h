//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalPreferences, NSString;

@interface EKDebugPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldBypassTravelEngineThrottle;
@property(nonatomic) BOOL showVerboseMessagesForTimeToLeave;
@property(nonatomic) BOOL useAverageETAForTimeToLeave;
@property(nonatomic) BOOL showDepartureDateForTransitTimeToLeave;
@property(nonatomic) BOOL verifyIntegrityOfAvailabilityTimeSearchTimelines;
@property(nonatomic) BOOL performAgendaEntryEqualityChecksInTravelEngine;
@property(nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;
@property(nonatomic) BOOL preventMarkingTravelAdvisoryEntriesAsDismissed;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisRouteName;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property(nonatomic) BOOL overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
@property(nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
@property(nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property(nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property(nonatomic) BOOL overrideTravelAdvisoryHypothesis;
@property(nonatomic) BOOL saveGeocodedLocationsInTravelEngine;
@property(nonatomic) double availabilityFreshnessWindow;
- (id)init;

@end

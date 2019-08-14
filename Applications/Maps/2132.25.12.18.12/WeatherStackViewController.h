//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "AirQualityConditionsViewControllerDelegate-Protocol.h"
#import "WeatherConditionsViewControllerDelegate-Protocol.h"
#import "WeatherLocationDataProviderObserver-Protocol.h"

@class AirQualityConditionsViewController, NSClickGestureRecognizer, NSNumber, NSObject, NSStackView, NSString, NSView, NSVisualEffectView, WFLocation, WeatherConditionsViewController;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WeatherStackViewController : NSViewController <WeatherLocationDataProviderObserver, WeatherConditionsViewControllerDelegate, AirQualityConditionsViewControllerDelegate>
{
    BOOL _updatingVisibility;
    NSString *_blurGroupName;
    NSView *_contentView;
    NSVisualEffectView *_blurView;
    NSStackView *_stackView;
    NSClickGestureRecognizer *_clickGestureRecognizer;
    WFLocation *_location;
    AirQualityConditionsViewController *_airQualityConditionsViewController;
    WeatherConditionsViewController *_weatherConditionsViewController;
    NSNumber *_requestedAirQualityShown;
    NSNumber *_requestedWeatherShown;
    NSObject<OS_dispatch_source> *_updateVisibilityTimer;
}

@property(nonatomic) BOOL updatingVisibility; // @synthesize updatingVisibility=_updatingVisibility;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *updateVisibilityTimer; // @synthesize updateVisibilityTimer=_updateVisibilityTimer;
@property(retain, nonatomic) NSNumber *requestedWeatherShown; // @synthesize requestedWeatherShown=_requestedWeatherShown;
@property(retain, nonatomic) NSNumber *requestedAirQualityShown; // @synthesize requestedAirQualityShown=_requestedAirQualityShown;
@property(retain, nonatomic) WeatherConditionsViewController *weatherConditionsViewController; // @synthesize weatherConditionsViewController=_weatherConditionsViewController;
@property(retain, nonatomic) AirQualityConditionsViewController *airQualityConditionsViewController; // @synthesize airQualityConditionsViewController=_airQualityConditionsViewController;
@property(retain, nonatomic) WFLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSClickGestureRecognizer *clickGestureRecognizer; // @synthesize clickGestureRecognizer=_clickGestureRecognizer;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak NSVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *blurGroupName; // @synthesize blurGroupName=_blurGroupName;
- (void).cxx_destruct;
- (id)_weatherPunchOutURL;
- (void)_openWeatherPunchOutURL;
- (void)_configureWeatherOrbSupport;
- (void)_configureSubviews;
- (void)_updateVisibilityAnimated:(BOOL)arg1;
- (void)_requestVisibilityUpdateAnimated:(BOOL)arg1;
- (void)airQualityConditionsViewController:(id)arg1 makeVisible:(BOOL)arg2 animated:(BOOL)arg3;
- (void)weatherConditionsViewController:(id)arg1 makeVisible:(BOOL)arg2 animated:(BOOL)arg3;
- (void)weatherLocationDataProvider:(id)arg1 didChangeLocation:(id)arg2;
- (void)clickDetected:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithWeatherLocationDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

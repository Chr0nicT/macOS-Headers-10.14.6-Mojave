//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherForecastSnippet : SAUISnippet
{
}

+ (id)forecastSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)forecastSnippet;
@property(retain, nonatomic) SAUIImageResource *attributionImage;
@property(retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property(copy, nonatomic) NSArray *aceWeathers;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

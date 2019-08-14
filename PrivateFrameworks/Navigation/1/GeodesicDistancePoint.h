//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GeodesicDistancePoint : NSObject
{
    NSDate *_date;
    double _geodesicDistance;
}

@property(nonatomic) double geodesicDistance; // @synthesize geodesicDistance=_geodesicDistance;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDate:(id)arg1 geodesicDistance:(double)arg2;
@property(readonly) double timeIntervalSinceReferenceDate;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOSpatialLookupParameters : NSObject
{
    CDStruct_2c43369c _coordinate;
    double _radius;
    NSArray *_categories;
}

@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 categories:(id)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXComponentMask.h>

@interface SXCornersComponentMask : SXComponentMask
{
}

+ (id)typeString;
@property(readonly, nonatomic) unsigned long long cornerMask;
- (BOOL)cornerWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)bottomLeftWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)bottomRightWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)topRightWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)topLeftWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL bottomLeft; // @dynamic bottomLeft;
@property(readonly, nonatomic) BOOL bottomRight; // @dynamic bottomRight;
@property(readonly, nonatomic) struct _SXConvertibleValue radius; // @dynamic radius;
@property(readonly, nonatomic) BOOL topLeft; // @dynamic topLeft;
@property(readonly, nonatomic) BOOL topRight; // @dynamic topRight;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMShapeBuilder : NSObject
{
    int _type;
    OADOrientedBounds *_orientedBounds;
    unsigned long long _format;
    NSDictionary *_adjustValues;
}

+ (struct CGRect)canonicalBounds;
- (void).cxx_destruct;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;
- (float)maxAdjustedValue;
- (BOOL)isOffice12;
- (struct CGAffineTransform)affineTransform;
- (void)setAdjustValues:(id)arg1;
- (void)setFileFormat:(unsigned long long)arg1;
- (void)setShapeType:(int)arg1;
- (void)setOrientedBounds:(id)arg1;

@end

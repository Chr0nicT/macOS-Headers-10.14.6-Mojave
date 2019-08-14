//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CIFilter.h>

@class CIImage, CIVector;

@interface MGPanoramicStretchFilter : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    CIVector *inputScale;
    CIVector *inputIntensity;
    CIVector *inputDistance;
}

+ (void)initialize;
- (id)customAttributes;
- (struct CGRect)regionOf:(int)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (id)outputImage;

@end

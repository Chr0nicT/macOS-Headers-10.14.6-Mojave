//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

@interface CUIStyleEffectConfiguration : NSObject <NSCopying>
{
    long long _state;
    long long _presentationState;
    long long _value;
    unsigned long long _dimension1;
    BOOL _useSimplifiedEffect;
    BOOL _foregroundColorShouldTintEffects;
    double _brightnessMultiplier;
    double _effectScale;
    unsigned long long _colorTemperature;
}

@property(nonatomic) double effectScale; // @synthesize effectScale=_effectScale;
@property(nonatomic) unsigned long long colorTemperature; // @synthesize colorTemperature=_colorTemperature;
@property(nonatomic) double brightnessMultiplier; // @synthesize brightnessMultiplier=_brightnessMultiplier;
@property(nonatomic) BOOL foregroundColorShouldTintEffects; // @synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects;
@property(nonatomic) BOOL useSimplifiedEffect; // @synthesize useSimplifiedEffect=_useSimplifiedEffect;
@property(nonatomic) unsigned long long dimension1; // @synthesize dimension1=_dimension1;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (BOOL)shouldRespectOutputBlending;
- (BOOL)shouldIgnoreForegroundColor;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

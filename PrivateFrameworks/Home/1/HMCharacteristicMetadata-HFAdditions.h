//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMCharacteristicMetadata.h>

@class HFNumberValueConstraints;

@interface HMCharacteristicMetadata (HFAdditions)
- (id)hf_percentageForCharacteristicValue:(id)arg1;
- (id)hf_characteristicValueForPercentage:(double)arg1;
@property(readonly, nonatomic) BOOL hf_isNumeric;
- (BOOL)hf_isInteger;
- (BOOL)hf_isValidValue:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1;
- (id)hf_normalizedValueForValue:(id)arg1;
- (BOOL)hf_isEqualToMetadata:(id)arg1;
@property(readonly, nonatomic) HFNumberValueConstraints *hf_numericValueConstraints;
@end


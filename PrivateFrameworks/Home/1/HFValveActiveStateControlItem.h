//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFPowerStateControlItem.h>

@interface HFValveActiveStateControlItem : HFPowerStateControlItem
{
}

- (id)_iconDescriptorForServiceSubtype:(id)arg1 inUse:(BOOL)arg2 active:(BOOL)arg3 hasFaucetAsParentService:(BOOL)arg4;
- (id)_faucetValveSubtypeToInactiveIconIdentifierMap;
- (id)_faucetValveSubtypeToActiveIconIdentifierMap;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)writeValue:(id)arg1;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;

@end

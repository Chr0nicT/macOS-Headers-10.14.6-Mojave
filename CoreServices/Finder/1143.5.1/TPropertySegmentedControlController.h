//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPropertyButtonController.h"

@interface TPropertySegmentedControlController : TPropertyButtonController
{
    struct map<long, TNSRef<IPropertyValueApplicator, void>, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, TNSRef<IPropertyValueApplicator, void>>>> _segmentToApplicatorMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setMenu:(id)arg1 showMenuIndicator:(_Bool)arg2 forSegment:(long long)arg3;
- (void)setClickHandler:(const function_b1fce659 *)arg1 forSegment:(long long)arg2;
- (void)setApplicator:(id)arg1 forSegment:(long long)arg2;
- (id)applicatorForSegment:(long long)arg1;
- (void)_setApplicatorClickHandler:(id)arg1 forSegment:(long long)arg2;
- (int)applyValueToNodes:(id)arg1;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (id)segmentedControl;
- (void)aboutToTearDown;

@end

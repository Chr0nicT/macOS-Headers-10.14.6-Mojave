//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFTimeCondition.h>

#import <Home/HFPrimitiveTimeCondition-Protocol.h>

@class NSDateComponents, NSString;

@interface HFDateComponentsCondition : HFTimeCondition <HFPrimitiveTimeCondition>
{
    unsigned long long _comparisonType;
    NSDateComponents *_dateComponents;
}

@property(readonly, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
@property(readonly, nonatomic) unsigned long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) BOOL isTimeOfDayCondition;
- (id)initWithPredicate:(id)arg1;
- (id)initWithDateComponents:(id)arg1 comparisonType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


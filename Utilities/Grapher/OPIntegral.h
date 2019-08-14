//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OPSum.h"

@class OPRange;

@interface OPIntegral : OPSum
{
    OPRange *mIndexRange;
    unsigned long long mCurrentValueIndex;
    long long memoFIFO;
    long long memoAlong[20];
    double memoLower[20];
    double memoUpper[20];
    struct _NComplex memoValue[20];
}

- (id)evaluate;
- (struct _NComplex)valueAt:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(id)arg1 term:(id)arg2;
- (id)init;

@end

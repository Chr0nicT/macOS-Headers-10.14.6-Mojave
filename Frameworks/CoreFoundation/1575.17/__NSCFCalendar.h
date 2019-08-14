//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSCalendar.h>

__attribute__((visibility("hidden")))
@interface __NSCFCalendar : NSCalendar
{
}

+ (id)calendarWithIdentifier:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)__bumpSearchingDate:(id)arg1 upToNextHigherUnitInComponents:(id)arg2 goBackwards:(BOOL)arg3 usingMatchDate:(id)arg4;
- (id)__ensureThoroughEnumerationByAdjustingComponents:(id)arg1 usingSearchDate:(id)arg2 goBackwards:(BOOL)arg3;
- (BOOL)__findMatchingDate:(id *)arg1 matchingComponents:(id)arg2 inNextHighestUnitRange:(unsigned long long)arg3 afterStartDate:(id)arg4 goBackwards:(BOOL)arg5 findLastMatch:(BOOL)arg6 options:(unsigned long long)arg7;
- (BOOL)__verifyNSDateComponentsValues:(id)arg1;
- (unsigned long long)__findLowestSetUnitInDateComponents:(id)arg1;
- (unsigned long long)__findHighestSetUnitInDateComponents:(id)arg1;
- (BOOL)__findMatchingDate:(id *)arg1 afterStartDate:(id)arg2 matchingComponents:(id)arg3 goingBackwards:(BOOL)arg4 findLastMatch:(BOOL)arg5 options:(unsigned long long)arg6;
- (BOOL)__checkDate:(id)arg1 containsMatchingComponents:(id)arg2 mismatchedUnits:(unsigned long long *)arg3;
- (BOOL)__checkIfEra:(long long)arg1 hasYearForWeekOfYear:(long long)arg2 resultDate:(id *)arg3 resultInterval:(double *)arg4;
- (BOOL)__checkIfEra:(long long)arg1 hasYear:(long long)arg2 resultDate:(id *)arg3;
- (BOOL)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
- (BOOL)isDateInWeekend:(id)arg1;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;
- (id)gregorianStartDate;
- (void)setGregorianStartDate:(id)arg1;
- (unsigned long long)minimumDaysInFirstWeek;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;
- (unsigned long long)firstWeekday;
- (void)setFirstWeekday:(unsigned long long)arg1;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)calendarIdentifier;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)retainCount;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

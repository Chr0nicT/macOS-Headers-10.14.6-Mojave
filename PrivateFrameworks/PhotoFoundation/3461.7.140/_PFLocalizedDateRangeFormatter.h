//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale;

@interface _PFLocalizedDateRangeFormatter : NSObject
{
    NSLocale *_locale;
    struct UDateIntervalFormat *_dateIntervalFormat;
}

- (void).cxx_destruct;
- (id)stringForDateRangeFrom:(id)arg1 to:(id)arg2;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)init;

@end

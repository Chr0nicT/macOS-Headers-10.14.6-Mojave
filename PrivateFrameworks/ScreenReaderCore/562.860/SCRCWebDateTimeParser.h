//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCRCWebDateTimeParser : NSObject
{
    NSMutableDictionary *_expressions;
    NSMutableDictionary *_dateFormats;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)spokenStringForDateTimeAttribute:(id)arg1;
- (id)_handleDatesAndTimes:(id)arg1;
- (id)_handleTimes:(id)arg1;
- (id)_handleDuration:(id)arg1;
- (id)_expressionForRule:(id)arg1;
- (id)_cachedDateFormatterForFormat:(id)arg1;
- (id)init;

@end

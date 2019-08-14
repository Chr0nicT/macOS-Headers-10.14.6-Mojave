//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@interface NURepeatPattern : NUPattern
{
    NUPattern *_pattern;
    long long _minCount;
    long long _maxCount;
}

@property(readonly) long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly) long long minCount; // @synthesize minCount=_minCount;
@property(readonly) NUPattern *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (BOOL)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (BOOL)isEqualToRepeatPattern:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (id)stringRepresentation;
- (id)optimizedPattern;
- (id)shortestMatch;
- (BOOL)isFixedOrder;
- (id)tokens;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2 maxCount:(long long)arg3;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2;
- (id)initWithPattern:(id)arg1 count:(long long)arg2;
- (id)init;

@end

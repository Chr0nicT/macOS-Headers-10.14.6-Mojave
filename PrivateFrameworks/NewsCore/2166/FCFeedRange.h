//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class FCDateRange, FCFeedCursor;

@interface FCFeedRange : NSObject <NSSecureCoding, NSCopying>
{
    FCFeedCursor *_top;
    FCFeedCursor *_bottom;
}

+ (BOOL)supportsSecureCoding;
+ (id)feedRangeByMergingRange:(id)arg1 withRange:(id)arg2;
+ (id)feedRangeFromDateRange:(id)arg1;
+ (id)feedRangeFromDate:(id)arg1 toDate:(id)arg2;
+ (id)feedRangeWithMaxOrder:(unsigned long long)arg1 minOrder:(unsigned long long)arg2;
+ (id)feedRangeWithTop:(id)arg1 bottom:(id)arg2;
@property(copy, nonatomic) FCFeedCursor *bottom; // @synthesize bottom=_bottom;
@property(copy, nonatomic) FCFeedCursor *top; // @synthesize top=_top;
- (void).cxx_destruct;
- (id)description;
- (id)feedRangeByUnioningWithRange:(id)arg1;
- (id)feedRangeByIntersectingWithRange:(id)arg1;
- (BOOL)intersectsOrAdjoinsRange:(id)arg1;
- (BOOL)intersectsRange:(id)arg1;
- (BOOL)containsFeedRange:(id)arg1;
- (BOOL)containsCursor:(id)arg1;
- (BOOL)containsOrder:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) FCDateRange *dateRange;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) BOOL reachesBottomOfFeed;
@property(readonly, nonatomic) BOOL reachesTopOfFeed;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "HVHistoryItem.h"

@class NSArray, NSString;

@interface HVResultsHistoryItem : HVHistoryItem
{
    BOOL _showAllResults;
    BOOL _showAllOtherResults;
    BOOL _showAsGroupedResults;
    NSString *_bookTitle;
    NSArray *_results;
    NSString *_queryString;
    NSString *_scope;
}

+ (id)keyPathsForValuesAffectingOtherResultsCountString;
+ (id)keyPathsForValuesAffectingOtherResults;
+ (id)keyPathsForValuesAffectingFocusedResultsCountString;
+ (id)keyPathsForValuesAffectingFocusedResults;
+ (BOOL)supportsSecureCoding;
+ (id)historyItemWithQueryString:(id)arg1 bookID:(id)arg2 bookTitle:(id)arg3;
@property BOOL showAsGroupedResults; // @synthesize showAsGroupedResults=_showAsGroupedResults;
@property BOOL showAllOtherResults; // @synthesize showAllOtherResults=_showAllOtherResults;
@property BOOL showAllResults; // @synthesize showAllResults=_showAllResults;
@property(readonly) NSString *scope; // @synthesize scope=_scope;
@property(readonly) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain) NSArray *results; // @synthesize results=_results;
@property(retain) NSString *bookTitle; // @synthesize bookTitle=_bookTitle;
- (void).cxx_destruct;
- (id)description;
- (id)otherResultsCountString;
@property(readonly) NSArray *otherResults;
- (id)focusedResultsCountString;
@property(readonly) NSArray *focusedResults;
- (BOOL)isSameTargetAsItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)contollerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryString:(id)arg1 bookID:(id)arg2 bookTitle:(id)arg3;

@end

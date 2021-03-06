//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/YQLRequest.h>

@class NSString, NSURLSession, Stock, StockChartData;
@protocol ChartUpdaterDelegate;

@interface ChartUpdater : YQLRequest
{
    Stock *_stock;
    long long _interval;
    StockChartData *_currentChartData;
    double _highValue;
    double _lowValue;
    NSString *_createdValue;
    id <ChartUpdaterDelegate> _delegate;
    NSURLSession *_session;
}

+ (id)_rangeStringForInterval:(long long)arg1;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <ChartUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *createdValue; // @synthesize createdValue=_createdValue;
@property(nonatomic) double lowValue; // @synthesize lowValue=_lowValue;
@property(nonatomic) double highValue; // @synthesize highValue=_highValue;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (void)parseData:(id)arg1;
- (BOOL)updateChartUsingParsecURL:(id)arg1 forStock:(id)arg2 interval:(long long)arg3;
- (BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2;
- (void)cancel;

@end


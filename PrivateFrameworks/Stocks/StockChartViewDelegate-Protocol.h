//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Stocks/NSObject-Protocol.h>

@class StockChartView;

@protocol StockChartViewDelegate <NSObject>
- (void)stockChartViewNeedsLoadingStatusUpdated:(StockChartView *)arg1;
- (BOOL)stockChartViewIsCurrentChartView:(StockChartView *)arg1;
- (void)stockChartView:(StockChartView *)arg1 chartIntervalDidChange:(long long)arg2;

@optional
- (void)stockChartViewFinishedInitialLoad:(StockChartView *)arg1;
@end

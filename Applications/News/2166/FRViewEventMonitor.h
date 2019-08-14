//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface FRViewEventMonitor : NSObject
{
    NSMutableSet *_visibleViews;
}

+ (id)sharedMonitor;
@property(retain, nonatomic) NSMutableSet *visibleViews; // @synthesize visibleViews=_visibleViews;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *viewContentIDs;
@property(readonly, nonatomic) NSArray *visibleViewTypes;
- (void)viewDidDisappear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (id)init;

@end

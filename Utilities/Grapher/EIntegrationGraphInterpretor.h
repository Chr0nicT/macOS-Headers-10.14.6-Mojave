//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OPOperation;

@interface EIntegrationGraphInterpretor : NSObject
{
    NSString *mKind;
    OPOperation *mIntegrand;
}

- (void)calculate;
- (void)setIntegrand:(id)arg1;
- (id)integrand;
- (void)setKind:(id)arg1;
- (id)validKinds;
- (id)integrationView;
- (id)integrationKindView;
- (BOOL)canInterpretGraphs:(id)arg1;
- (BOOL)canInterpretGraph:(id)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EIntegrationGraphInterpretor.h"

@class DCurve, EIntegrationKindView, EIntegrationView, GCurve, NSString, OPOperation;

@interface EIntegrationCurveInterpretor : EIntegrationGraphInterpretor
{
    EIntegrationKindView *mExplicitCurveKindView;
    EIntegrationKindView *mDifferenceCurveKindView;
    EIntegrationKindView *mCartesianParametricCurveKindView;
    EIntegrationKindView *mPolarParametricCurveKindView;
    EIntegrationView *mIntegrationView;
    GCurve *mGraph;
    DCurve *mDefinition;
    GCurve *mOtherGraph;
    DCurve *mOtherDefinition;
    unsigned long long mCurveKind;
    NSString *mFName;
    NSString *mGName;
    NSString *mVariableName;
    OPOperation *mFOperation;
    OPOperation *mGOperation;
}

- (void)calculate;
- (void)setKind:(id)arg1;
- (id)validKinds;
- (id)integrationView;
- (id)integrationKindView;
- (BOOL)canInterpretGraphs:(id)arg1;
- (BOOL)canInterpretOtherGraph:(id)arg1;
- (BOOL)canInterpretGraph:(id)arg1;
- (void)dealloc;

@end

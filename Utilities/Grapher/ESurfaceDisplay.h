//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EDisplayView.h"

@class EQCaption;

@interface ESurfaceDisplay : EDisplayView
{
    id mPosition;
    id mTangentPlane;
    id mFirstTangent;
    id mSecondTangent;
    id mNormal;
    EQCaption *mFirstVariable;
    EQCaption *mSecondVariable;
    id mPositionColor;
    id mTangentPlaneColor;
    id mFirstTangentColor;
    id mSecondTangentColor;
    id mNormalColor;
}

- (void)update;
- (void)setVariables:(id)arg1 fromDefinition:(id)arg2;

@end


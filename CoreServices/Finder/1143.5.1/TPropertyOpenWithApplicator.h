//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPropertyFINodeApplicator.h"

@interface TPropertyOpenWithApplicator : IPropertyFINodeApplicator
{
    struct TNSRef<TOpenWithPopupMenuController, void> _openWithPopupMenuController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)canModifyNodes:(const struct TFENodeVector *)arg1;
- (int)applyApp:(const struct TFENode *)arg1 toAllNodesOfSameType:(const struct TFENodeVector *)arg2 forceChange:(_Bool)arg3;
- (int)applyApp:(const struct TFENode *)arg1 toNodes:(const struct TFENodeVector *)arg2 strong:(_Bool)arg3;
- (int)applyValue:(id)arg1 toNodes:(const struct TFENodeVector *)arg2;
- (_Bool)canChangeHandler:(const struct TFENodeVector *)arg1;
- (void)setOpenWithPopupMenuController:(id)arg1;

@end

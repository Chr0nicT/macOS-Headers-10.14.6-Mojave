//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CMState.h>

@class CMOutlineState, OADTablePartStyle;

__attribute__((visibility("hidden")))
@interface PMState : CMState
{
    CMOutlineState *mListState;
    OADTablePartStyle *mCurrentRowStyle;
}

- (void).cxx_destruct;
- (id)currentRowStyle;
- (void)setCurrentRowStyle:(id)arg1;
- (id)listState;
- (id)init;

@end

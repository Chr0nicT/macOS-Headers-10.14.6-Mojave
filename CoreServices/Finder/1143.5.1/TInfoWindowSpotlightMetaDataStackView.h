//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSpotlightMetaDataStackView.h"

@class NSLayoutConstraint, TTextField;

@interface TInfoWindowSpotlightMetaDataStackView : TSpotlightMetaDataStackView
{
    TTextField *_noDataTextField;
    struct TNSRef<NSLayoutConstraint, void> _noDataTextFieldBottomConstraint;
    _Bool _isFetching;
}

@property _Bool isFetching; // @synthesize isFetching=_isFetching;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (void)populate;
- (void)setNoDataTextFieldBottomConstraint:(id)arg1;
@property(readonly, retain) NSLayoutConstraint *noDataTextFieldBottomConstraint; // @dynamic noDataTextFieldBottomConstraint;

@end


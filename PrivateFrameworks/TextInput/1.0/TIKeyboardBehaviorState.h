//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TIKeyboardBehaviorState : NSObject
{
    BOOL hasInput;
    BOOL hasCandidates;
    BOOL hasCandidateSelected;
    BOOL hasNextPage;
    BOOL showsExtendedList;
    BOOL followsZhuyin;
    BOOL spaceConfirmation;
    BOOL hardwareKeyboardMode;
    BOOL _hasAutocorrection;
    BOOL _userSelectedCurrentCandidate;
    BOOL _showsCandidatesInLayout;
}

@property(nonatomic) BOOL showsCandidatesInLayout; // @synthesize showsCandidatesInLayout=_showsCandidatesInLayout;
@property(nonatomic) BOOL userSelectedCurrentCandidate; // @synthesize userSelectedCurrentCandidate=_userSelectedCurrentCandidate;
@property(nonatomic) BOOL hasAutocorrection; // @synthesize hasAutocorrection=_hasAutocorrection;
@property(nonatomic) BOOL hardwareKeyboardMode; // @synthesize hardwareKeyboardMode;
@property(nonatomic) BOOL spaceConfirmation; // @synthesize spaceConfirmation;
@property(nonatomic) BOOL followsZhuyin; // @synthesize followsZhuyin;
@property(nonatomic) BOOL showsExtendedList; // @synthesize showsExtendedList;
@property(nonatomic) BOOL hasNextPage; // @synthesize hasNextPage;
@property(nonatomic) BOOL hasCandidateSelected; // @synthesize hasCandidateSelected;
@property(nonatomic) BOOL hasCandidates; // @synthesize hasCandidates;
@property(nonatomic) BOOL hasInput; // @synthesize hasInput;

@end


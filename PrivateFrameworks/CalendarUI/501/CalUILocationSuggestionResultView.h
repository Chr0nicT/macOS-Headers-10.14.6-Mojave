//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class CalUILocationSuggestionResult, NSTextField;

@interface CalUILocationSuggestionResultView : NSTableCellView
{
    CalUILocationSuggestionResult *_suggestion;
    NSTextField *_titleField;
    NSTextField *_addressField;
}

@property(retain) NSTextField *addressField; // @synthesize addressField=_addressField;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain) CalUILocationSuggestionResult *suggestion; // @synthesize suggestion=_suggestion;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;
- (id)iconForSuggestion:(id)arg1;
- (id)initWithSuggestion:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@class MFMailbox;

@interface _MailboxSegmentedControl : NSSegmentedControl
{
    BOOL _useAsBackNavigation;
    MFMailbox *_mailbox;
}

@property(nonatomic) BOOL useAsBackNavigation; // @synthesize useAsBackNavigation=_useAsBackNavigation;
@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
- (void).cxx_destruct;

@end

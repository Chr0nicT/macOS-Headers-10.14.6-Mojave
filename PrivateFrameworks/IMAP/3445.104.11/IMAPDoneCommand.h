//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@interface IMAPDoneCommand : IMAPSingleCommand
{
}

- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)activityString;
- (id)commandTypeString;

@end

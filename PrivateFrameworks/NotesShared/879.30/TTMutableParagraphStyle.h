//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/TTParagraphStyle.h>

@class TTTodo;

@interface TTMutableParagraphStyle : TTParagraphStyle
{
}

+ (id)paragraphStyleNamed:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long alignment; // @dynamic alignment;
@property(nonatomic) unsigned int hints; // @dynamic hints;
@property(nonatomic) unsigned long long indent; // @dynamic indent;
@property(nonatomic) BOOL needsListCleanup; // @dynamic needsListCleanup;
@property(nonatomic) BOOL needsParagraphCleanup; // @dynamic needsParagraphCleanup;
@property(nonatomic) unsigned long long startingItemNumber; // @dynamic startingItemNumber;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(retain, nonatomic) TTTodo *todo; // @dynamic todo;
@property(nonatomic) long long writingDirection; // @dynamic writingDirection;

@end

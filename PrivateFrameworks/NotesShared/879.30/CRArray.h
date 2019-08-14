//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/CRUndoDelegate-Protocol.h>

@class CRDictionary, CRDocument, NSString, NSUUID, TTArray;
@protocol CRUndoDelegate;

@interface CRArray : NSObject <CRCoding, CRUndoDelegate, CRDataType>
{
    BOOL _moveClock;
    CRDocument *_document;
    NSObject<CRUndoDelegate> *_delegate;
    TTArray *_array;
    CRDictionary *_contents;
}

@property(nonatomic) BOOL moveClock; // @synthesize moveClock=_moveClock;
@property(retain, nonatomic) CRDictionary *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) TTArray *array; // @synthesize array=_array;
@property(nonatomic) __weak NSObject<CRUndoDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CRDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (BOOL)wantsUndoCommands;
- (void)addUndoCommandsForObject:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned long long)firstIndexOf:(id)arg1 fromIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSUUID *replicaUUID;
@property(readonly, nonatomic) unsigned long long count;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forUndo:(BOOL)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (id)_insertObject:(id)arg1 withIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 forUndo:(BOOL)arg4;
- (id)_insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_addObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithTTArray:(id)arg1 contents:(id)arg2 document:(id)arg3;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (id)initWithCRCoder:(id)arg1 array:(const struct Array *)arg2;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1 array:(struct Array *)arg2;
- (void)encodeWithCRCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

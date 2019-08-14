//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <ScreenReader/SCRFaultingArrayDataSource-Protocol.h>

@class NSMutableIndexSet, NSString;
@protocol SCRFaultingArrayDataSource;

__attribute__((visibility("hidden")))
@interface SCRFaultingArray : NSArray <SCRFaultingArrayDataSource>
{
    id *_elements;
    unsigned long long _blockSize;
    unsigned long long __count;
    NSMutableIndexSet *__faultedBlocks;
    id <SCRFaultingArrayDataSource> __source;
}

@property(retain, nonatomic) id <SCRFaultingArrayDataSource> _source; // @synthesize _source=__source;
@property(retain, nonatomic) NSMutableIndexSet *_faultedBlocks; // @synthesize _faultedBlocks=__faultedBlocks;
@property(nonatomic) unsigned long long _count; // @synthesize _count=__count;
@property(nonatomic) unsigned long long blockSize; // @synthesize blockSize=_blockSize;
- (void).cxx_destruct;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (unsigned long long)elementsCount;
- (id)copyElementsForRange:(struct _NSRange)arg1;
- (void)_faultBlockIfNeeded:(unsigned long long)arg1;
- (unsigned long long)_blockForIndex:(unsigned long long)arg1;
- (id)nilSentinel;
- (void)rebuild;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1 blockSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

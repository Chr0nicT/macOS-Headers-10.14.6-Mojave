//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/NSCopying-Protocol.h>

@class NSDictionary;

@interface HFStaticItem : HFItem <NSCopying>
{
    NSDictionary *_staticResults;
    CDUnknownBlockType _resultsBlock;
}

+ (id)emptyItem;
@property(copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(retain, nonatomic) NSDictionary *staticResults; // @synthesize staticResults=_staticResults;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1;
- (id)initWithResults:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface CalImportSheetContextInfo : NSObject
{
    unsigned long long _numMalformedEntities;
    NSManagedObjectContext *_context;
    CDUnknownBlockType _answerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType answerBlock; // @synthesize answerBlock=_answerBlock;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long numMalformedEntities; // @synthesize numMalformedEntities=_numMalformedEntities;
- (void).cxx_destruct;

@end

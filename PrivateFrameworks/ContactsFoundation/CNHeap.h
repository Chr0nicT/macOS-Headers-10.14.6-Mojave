//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CNHeap : NSObject
{
    NSString *_rawDataString;
    NSMutableArray *_heapObjects;
    NSMutableDictionary *_heapObjectsByClassAndBinary;
}

@property(retain, nonatomic) NSMutableDictionary *heapObjectsByClassAndBinary; // @synthesize heapObjectsByClassAndBinary=_heapObjectsByClassAndBinary;
@property(retain) NSMutableArray *heapObjects; // @synthesize heapObjects=_heapObjects;
@property(retain) NSString *rawDataString; // @synthesize rawDataString=_rawDataString;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DataDetectorsCore/DDUnaryOperator.h>

__attribute__((visibility("hidden")))
@interface DDOneOrMoreExp : DDUnaryOperator
{
}

- (BOOL)acceptEmptyWordWithManager:(id)arg1;
- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2;
- (id)prettyPrintWithPriority:(int)arg1;
- (id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3;
- (id)monElement;
- (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3;

@end

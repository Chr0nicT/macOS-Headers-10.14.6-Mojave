//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIViewVisitor.h>

__attribute__((visibility("hidden")))
@interface _UIViewBlockVisitor : _UIViewVisitor
{
    CDUnknownBlockType _visitorBlock;
}

@property(copy, nonatomic) CDUnknownBlockType visitorBlock; // @synthesize visitorBlock=_visitorBlock;
- (BOOL)_visitView:(id)arg1;
- (void)dealloc;
- (id)initWithTraversalDirection:(unsigned long long)arg1 visitorBlock:(CDUnknownBlockType)arg2;

@end

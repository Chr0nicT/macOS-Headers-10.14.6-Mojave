//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import <XQuery/XQueryExprBehavior-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryNamespaceExpr : XQueryExpr <XQueryExprBehavior>
{
    id _name;
    id _value;
}

+ (id)namespaceExprWithName:(id)arg1 value:(id)arg2;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)value;
- (id)name;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


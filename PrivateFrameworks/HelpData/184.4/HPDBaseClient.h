//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface HPDBaseClient : NSObject
{
}

@property(readonly) NSSet *indexedBookIDs;
- (BOOL)registerBookWithIdentifier:(id)arg1 appBundleURL:(id)arg2 bookVersion:(id)arg3 bookURL:(id)arg4;
- (BOOL)cancelQuery:(id)arg1;
- (BOOL)performQuery:(id)arg1;
- (id)bookWithIdentifier:(id)arg1;
@property(readonly, copy) NSDictionary *bookList;

@end

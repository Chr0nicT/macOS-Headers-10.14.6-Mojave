//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SFIdentityChooserDataSource : NSObject
{
    NSMutableArray *_identities;
}

- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (unsigned long long)numberOfRowsInTableView:(id)arg1;
- (id)identityNameAtRow:(long long)arg1;
- (struct OpaqueSecIdentityRef *)identityAtRow:(long long)arg1;
- (void)_setIdentities:(id)arg1;
- (void)dealloc;

@end

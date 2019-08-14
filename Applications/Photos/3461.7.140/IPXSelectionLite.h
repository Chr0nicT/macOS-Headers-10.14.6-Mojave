//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, RDDatabase;
@protocol IPXSelectionProvider;

@interface IPXSelectionLite : NSObject
{
    BOOL _implicit;
    unsigned long long _context;
    id _container;
    id <IPXSelectionProvider> _selectionProvider;
    NSString *_containerTitle;
    RDDatabase *_database;
    NSArray *_items;
    unsigned long long _selectedItemsType;
}

+ (id)selectionInContext:(unsigned long long)arg1 container:(id)arg2 database:(id)arg3 containerItems:(id)arg4 isImplicit:(BOOL)arg5;
+ (id)selectionInContext:(unsigned long long)arg1 container:(id)arg2 database:(id)arg3 versionModelIDs:(id)arg4 isImplicit:(BOOL)arg5;
+ (id)selectionInContext:(unsigned long long)arg1 container:(id)arg2 database:(id)arg3 items:(id)arg4 isImplicit:(BOOL)arg5;
@property unsigned long long selectedItemsType; // @synthesize selectedItemsType=_selectedItemsType;
@property(retain) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) RDDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSString *containerTitle; // @synthesize containerTitle=_containerTitle;
@property __weak id <IPXSelectionProvider> selectionProvider; // @synthesize selectionProvider=_selectionProvider;
@property BOOL implicit; // @synthesize implicit=_implicit;
@property(retain) id container; // @synthesize container=_container;
@property unsigned long long context; // @synthesize context=_context;
- (void).cxx_destruct;
- (unsigned long long)countOfExplicitItems;
- (unsigned long long)hash;
- (BOOL)isEqualToSelection:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSUserDefaults;

@interface DOCTagLocalStorage : NSObject
{
    NSUserDefaults *_userDefaults;
}

+ (id)sharedAppGroupStorage;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOrderedSet *discoveredTags;
@property(retain, nonatomic) NSOrderedSet *userTags;
- (id)_unarchivedTagsFromData:(id)arg1;
@property(nonatomic) long long tagSerialNumber;
- (id)init;

@end


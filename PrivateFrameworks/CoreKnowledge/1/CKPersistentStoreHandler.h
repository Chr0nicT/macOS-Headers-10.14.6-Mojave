//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKPersistentStoreHandler : NSObject
{
    // Error parsing type: , name: connection
}

+ (id)inMemoryHandler;
- (void).cxx_destruct;
- (BOOL)dropLinksBetween:(id)arg1 and:(id)arg2 error:(id *)arg3;
- (BOOL)dropLinksWithLabel:(id)arg1 from:(id)arg2 error:(id *)arg3;
- (BOOL)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 error:(id *)arg4;
- (long long)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3;
- (long long)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3;
- (BOOL)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 error:(id *)arg5;
- (id)tripleComponentsMatching:(id)arg1 error:(id *)arg2;
- (BOOL)removeAllValuesAndReturnError:(id *)arg1;
- (BOOL)removeValuesMatching:(id)arg1 error:(id *)arg2;
- (BOOL)removeValuesForKeys:(id)arg1 error:(id *)arg2;
- (BOOL)removeValueForKey:(id)arg1 error:(id *)arg2;
- (BOOL)saveKeysAndValues:(id)arg1 error:(id *)arg2;
- (id)_valuesForKeys:(id)arg1 error:(id *)arg2;
- (id)keysAndValuesForKeysMatching:(id)arg1 error:(id *)arg2;
- (id)keysAndValuesAndReturnError:(id *)arg1;
- (id)valuesForKeysMatching:(id)arg1 error:(id *)arg2;
- (id)valuesAndReturnError:(id *)arg1;
- (id)keysMatching:(id)arg1 error:(id *)arg2;
- (id)keysAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPersistentStoreCoordinatorFactory : NSObject
{
    BOOL _readOnly;
}

+ (id)urlForAccountWithIdentifier:(id)arg1 baseURL:(id)arg2;
- (id)builderWithStoreDescription:(id)arg1;
- (id)makeCoordinatorWithStoreAtURL:(id)arg1 storeDescription:(id)arg2;
- (id)addStoresForAccountCollection:(id)arg1 withStoreBuilder:(id)arg2;
- (id)accountIdentifiersFromAccountCollection:(id)arg1;
- (id)pool_makeCoordinatorForAllSourcesWithAccountCollection:(id)arg1;
- (id)makeCoordinatorForSourcesWithAccountCollection:(id)arg1;
- (id)initReadOnly:(BOOL)arg1;

@end

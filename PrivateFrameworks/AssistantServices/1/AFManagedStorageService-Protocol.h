//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol AFManagedStorageService <NSObject>
- (oneway void)resetKnowledgeStoreWithName:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)getKnowledgeStoreDataForKey:(NSString *)arg1 inStoreWithName:(NSString *)arg2 completion:(void (^)(NSData *))arg3;
- (oneway void)setKnowledgeStoreData:(NSData *)arg1 forKey:(NSString *)arg2 inStoreWithName:(NSString *)arg3 completion:(void (^)(void))arg4;
- (oneway void)fetchManagedStoreObjectForKey:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (oneway void)setManagedStoreObject:(NSDictionary *)arg1 forKey:(NSString *)arg2;
@end

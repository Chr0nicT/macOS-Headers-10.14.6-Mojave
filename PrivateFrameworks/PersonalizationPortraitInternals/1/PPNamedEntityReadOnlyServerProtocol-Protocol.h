//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSDictionary, NSNumber, NSString, PPNamedEntityQuery;

@protocol PPNamedEntityReadOnlyServerProtocol
- (void)mapItemForPlaceName:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)feedbackNamedEntitiesOverallEngagement:(NSNumber *)arg1;
- (void)feedbackEngagedNamedEntities:(NSDictionary *)arg1;
- (void)feedbackUsedNamedEntities:(NSArray *)arg1;
- (void)namedEntityRecordsWithQuery:(PPNamedEntityQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)rankedNamedEntitiesWithQuery:(PPNamedEntityQuery *)arg1 queryId:(unsigned long long)arg2;
@end

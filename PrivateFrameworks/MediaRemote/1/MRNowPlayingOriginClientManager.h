//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_originClients;
    NSMutableDictionary *_originClientRequests;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)removePlayer:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)removeOriginRequests:(id)arg1;
- (void)removeOrigin:(id)arg1;
- (void)restoreNowPlayingClientState;
- (id)existingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)existingClientRequestsForPlayerPath:(id)arg1;
- (id)existingOriginClientRequestsForPlayerPath:(id)arg1;
- (id)playerClientRequestsForPlayerPath:(id)arg1;
- (id)clientRequestsForPlayerPath:(id)arg1;
- (id)originClientRequestsForPlayerPath:(id)arg1;
- (id)playerClientForPlayerPath:(id)arg1;
- (id)clientForPlayerPath:(id)arg1;
- (id)existingClientForPlayerPath:(id)arg1;
- (id)originClientForPlayerPath:(id)arg1;
- (id)existingOriginClientForPlayerPath:(id)arg1;
- (id)originClientForOrigin:(id)arg1;
- (id)localOriginClient;
- (id)debugDescription;
- (id)init;

@end

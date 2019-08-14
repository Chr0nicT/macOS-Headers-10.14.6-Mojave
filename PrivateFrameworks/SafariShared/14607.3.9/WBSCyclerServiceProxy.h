//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerServiceProtocol-Protocol.h>

@class NSXPCConnection;

@interface WBSCyclerServiceProxy : NSObject <WBSCyclerServiceProtocol>
{
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _errorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (void).cxx_destruct;
- (id)_cyclerProxy;
- (void)fetchStatusWithReply:(CDUnknownBlockType)arg1;
- (void)sendRequestToTestSuite:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopCyclingWithReply:(CDUnknownBlockType)arg1;
- (void)startCyclingFromBeginning:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setTestTargetEndpoint:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType connectionInvalidationHandler;
- (void)dealloc;
- (id)init;

@end

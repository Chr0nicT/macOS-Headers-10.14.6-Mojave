//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISStoreClient, Protocol;
@protocol ISAccountService, ISAssetService, ISDownloadService, ISInAppService, ISServiceRemoteObject, ISTransactionService, ISUIService;

@interface ISServiceProxy : NSObject
{
    ISStoreClient *_storeClient;
}

+ (id)genericSharedProxy;
+ (void)initialize;
@property(retain, nonatomic) ISStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (void).cxx_destruct;
- (void)uiServiceSynchronousBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ISUIService> uiService;
- (id)uiServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)inAppServiceSynchronousBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ISInAppService> inAppService;
- (id)inAppServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)transactionServiceSynchronousBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ISTransactionService> transactionService;
- (id)transactionServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)assetServiceSynchronousBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ISAssetService> assetService;
- (id)assetServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)downloadServiceSynchronousBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ISDownloadService> downloadService;
- (id)downloadServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)accountServiceSynchronousBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ISAccountService> accountService;
- (id)accountServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)connectionWasInterrupted;
- (void)registerForInterrptionNotification;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1 withServiceName:(id)arg2 protocol:(id)arg3 isMachService:(BOOL)arg4 interfaceClassName:(id)arg5;
- (id)objectProxyForServiceName:(id)arg1 protocol:(id)arg2 interfaceClassName:(id)arg3 isMachService:(BOOL)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)connectionWithServiceName:(id)arg1 protocol:(id)arg2 isMachService:(BOOL)arg3;
@property(readonly, nonatomic) Protocol *exportedProtocol;
@property(readonly, nonatomic) __weak id <ISServiceRemoteObject> exportedObject;
- (id)initWithStoreClient:(id)arg1;

@end

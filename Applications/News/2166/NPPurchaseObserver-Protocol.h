//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FCOngoingPurchaseEntry, NPPurchaseContext, NSError, NSString;

@protocol NPPurchaseObserver
- (void)purchaseDidFailWithInvalidReceiptFor:(NSString *)arg1 purchaseContext:(NPPurchaseContext *)arg2 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg3;
- (void)purchaseDidFailFor:(NSString *)arg1 transactionState:(long long)arg2 transactionError:(NSError *)arg3 purchaseContext:(NPPurchaseContext *)arg4 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg5;
- (void)purchaseDidSucceedOutsideNewsAppFor:(NSString *)arg1 purchaseContext:(NPPurchaseContext *)arg2;
- (void)purchaseDidSucceedFor:(NSString *)arg1 purchaseReceipt:(NSString *)arg2 chargeCurrencyCode:(NSString *)arg3 purchaseContext:(NPPurchaseContext *)arg4 ongoingPurchaseEntry:(FCOngoingPurchaseEntry *)arg5;
@end

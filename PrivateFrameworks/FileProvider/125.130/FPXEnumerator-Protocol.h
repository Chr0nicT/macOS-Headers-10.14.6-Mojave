//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class NSData;

@protocol FPXEnumerator <NSObject>
- (void)invalidate;
- (void)enumerateChangesFromToken:(NSData *)arg1 reply:(void (^)(NSArray *, NSArray *, BOOL, NSData *, NSError *))arg2;
- (void)enumerateItemsFromPage:(NSData *)arg1 reply:(void (^)(NSArray *, NSData *, NSData *, NSError *))arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AXHearingSupport/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol AXHeardServerMessageDelegate <NSObject>
- (void)handleMessageError:(NSString *)arg1 destructive:(BOOL)arg2;
- (void)handleMessageWithPayload:(NSDictionary *)arg1 forIdentifier:(unsigned long long)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VSSubscriptionPredicateFactory;

__attribute__((visibility("hidden")))
@interface VSSubscriptionFetchOptionsValidator : NSObject
{
    VSSubscriptionPredicateFactory *_predicateFactory;
}

@property(retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory; // @synthesize predicateFactory=_predicateFactory;
- (void).cxx_destruct;
- (id)standardizedFetchOptionsFromOptions:(id)arg1 withSecurityTask:(id)arg2;
- (id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg1;

@end

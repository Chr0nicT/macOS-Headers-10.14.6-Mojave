//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSSetTopBoxProfile : NSObject
{
    BOOL _isDeveloper;
    NSString *_providerID;
    NSString *_userToken;
}

@property(nonatomic) BOOL isDeveloper; // @synthesize isDeveloper=_isDeveloper;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
- (void).cxx_destruct;
- (id)initWithProviderID:(id)arg1 userToken:(id)arg2 isDeveloper:(BOOL)arg3;

@end


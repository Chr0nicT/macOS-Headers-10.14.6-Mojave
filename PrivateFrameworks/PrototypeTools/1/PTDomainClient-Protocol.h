//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol PTDomainClient <NSObject>
- (void)sendActiveTestRecipeEvent:(long long)arg1;
- (void)invokeOutletAtKeyPath:(NSString *)arg1;
- (void)setArchiveValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (void)restoreDefaultSettings;
- (void)updateSettingsFromArchive:(NSDictionary *)arg1;
@end

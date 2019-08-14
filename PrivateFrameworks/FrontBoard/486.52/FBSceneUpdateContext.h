//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSString;
@protocol NSObject><NSCopying;

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding>
{
    NSString *_sceneID;
    unsigned long long _transactionID;
    FBSSceneSettings *_settings;
    FBSSceneSettingsDiff *_settingsDiff;
    FBSSceneTransitionContext *_transitionContext;
    id <NSObject><NSCopying> _clientContext;
}

+ (id)contextWithScene:(id)arg1;
@property(copy, nonatomic) id <NSObject><NSCopying> clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) __weak FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) FBSSceneSettingsDiff *settingsDiff; // @synthesize settingsDiff=_settingsDiff;
@property(retain, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

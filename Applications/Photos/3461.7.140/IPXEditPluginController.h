//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXPluginManagerDelegate-Protocol.h"

@class IPXPluginManager, NSArray, NSMenu, NSString, RDVersion;
@protocol IPXEditPluginControllerDelegate, IPXPluginControllerContentDelegate;

@interface IPXEditPluginController : NSObject <IPXPluginManagerDelegate>
{
    IPXPluginManager *_pluginManager;
    NSArray *_currentExtensionsInMenu;
    struct CGSize _iconSize;
    NSMenu *_menu;
    RDVersion *_primarySelection;
    id <IPXEditPluginControllerDelegate> _delegate;
    id <IPXPluginControllerContentDelegate> _contentDelegate;
}

@property __weak id <IPXPluginControllerContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property __weak id <IPXEditPluginControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RDVersion *primarySelection; // @synthesize primarySelection=_primarySelection;
- (void).cxx_destruct;
- (void)pluginsDidUpdate;
- (void)buildPreviewsForExternalEditingOfVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_shouldBuildPreviewsForExternalEditingOfVersion:(id)arg1;
- (void)a_openExtensionSystemPreferences:(id)arg1;
- (void)a_openAppStore:(id)arg1;
- (void)editWithPlugin:(id)arg1;
- (void)livePhotoWarningForEditingVersions:(id)arg1 extensionName:(id)arg2;
- (void)_updatePluginsMenuIfNeeded;
- (BOOL)validateMenuItem:(id)arg1;
- (unsigned char)currentPlaybackVariationForVersion:(id)arg1;
@property(readonly) NSMenu *pluginsMenu;
@property(readonly) NSArray *plugins;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

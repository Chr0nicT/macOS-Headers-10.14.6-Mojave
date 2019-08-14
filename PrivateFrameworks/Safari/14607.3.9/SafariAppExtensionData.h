//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppExtensionContextMenu, AppExtensionToolbarItem, ExtensionWebsiteAccess, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SafariAppExtensionData : NSObject
{
    AppExtensionToolbarItem *_toolbarItem;
    AppExtensionContextMenu *_contextMenu;
    NSArray *_injectedScripts;
    NSArray *_injectedStyleSheets;
    ExtensionWebsiteAccess *_websiteAccess;
    NSString *_developerIdentifier;
    NSURL *_safariExtensionBaseURI;
    RetainPtr_86d965a1 _bundleCodeRef;
}

@property(nonatomic) RetainPtr_86d965a1 bundleCodeRef; // @synthesize bundleCodeRef=_bundleCodeRef;
@property(retain, nonatomic) NSURL *safariExtensionBaseURI; // @synthesize safariExtensionBaseURI=_safariExtensionBaseURI;
@property(copy, nonatomic) NSString *developerIdentifier; // @synthesize developerIdentifier=_developerIdentifier;
@property(retain, nonatomic) ExtensionWebsiteAccess *websiteAccess; // @synthesize websiteAccess=_websiteAccess;
@property(copy, nonatomic) NSArray *injectedStyleSheets; // @synthesize injectedStyleSheets=_injectedStyleSheets;
@property(copy, nonatomic) NSArray *injectedScripts; // @synthesize injectedScripts=_injectedScripts;
@property(retain, nonatomic) AppExtensionContextMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) AppExtensionToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

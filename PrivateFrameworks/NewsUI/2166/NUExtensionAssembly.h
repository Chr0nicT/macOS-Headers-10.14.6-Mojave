//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NFAssembly-Protocol.h>

@class NSString;
@protocol NUExtensionContextProvider;

@interface NUExtensionAssembly : NSObject <NFAssembly>
{
    id <NUExtensionContextProvider> _extensionContextProvider;
}

@property(readonly, nonatomic) __weak id <NUExtensionContextProvider> extensionContextProvider; // @synthesize extensionContextProvider=_extensionContextProvider;
- (void).cxx_destruct;
- (void)loadInRegistry:(id)arg1;
- (id)initWithExtensionContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

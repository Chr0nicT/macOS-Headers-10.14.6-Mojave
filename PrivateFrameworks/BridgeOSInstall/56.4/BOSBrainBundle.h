//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BOSBundleComponentVersion, NSBundle, NSString;

@interface BOSBrainBundle : NSObject
{
    NSString *_bundleIdentifier;
    BOSBundleComponentVersion *_bundleVersion;
    NSBundle *_bundle;
}

@property(retain) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain) BOSBundleComponentVersion *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
@property(readonly) NSString *payloadArchivePath;
- (id)description;
- (id)initWithBundleURL:(id)arg1;

@end

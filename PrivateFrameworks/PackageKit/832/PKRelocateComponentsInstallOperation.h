//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class NSString, PKPackageSpecifier;

@interface PKRelocateComponentsInstallOperation : PKInstallOperation
{
    PKPackageSpecifier *_currentPackageSpecifier;
    NSString *_currentOldBundlePath;
    NSString *_currentNewBundlePath;
}

- (void)main;
- (BOOL)_moveRelocatedComponentsForPackageSpecifier:(id)arg1 error:(id *)arg2;
- (id)messageTracerTernarySignature;
- (id)messageTracerComment;
- (id)messageTracerDomain;
- (id)currentPackageSpecifier;
- (int)installState;

@end

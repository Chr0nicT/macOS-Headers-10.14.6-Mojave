//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Install/IFComponentBundle.h>

@class NSString;

@interface IFComponentBundle_OnDisk : IFComponentBundle
{
    NSString *_versionString;
}

- (id)subComponentAtSubPath:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (id)versionString;
- (void)dealloc;
- (id)initWithFilesystemPath:(id)arg1;

@end

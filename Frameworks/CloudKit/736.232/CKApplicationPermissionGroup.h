//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding>
{
    NSArray *_containerIDs;
    NSArray *_applicationBundleIDs;
    unsigned long long _enabledPermissions;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long enabledPermissions; // @synthesize enabledPermissions=_enabledPermissions;
@property(retain, nonatomic) NSArray *applicationBundleIDs; // @synthesize applicationBundleIDs=_applicationBundleIDs;
@property(retain, nonatomic) NSArray *containerIDs; // @synthesize containerIDs=_containerIDs;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

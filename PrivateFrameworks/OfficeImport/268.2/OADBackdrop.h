//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying>
{
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setUp:(id)arg1;
- (id)up;
- (void)setNormal:(id)arg1;
- (id)normal;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

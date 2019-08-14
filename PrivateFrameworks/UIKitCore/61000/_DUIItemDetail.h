//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface _DUIItemDetail : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _scalable;
    BOOL _rotatable;
    double _scale;
    double _rotationAngle;
    NSArray *_lastKnownImageComponents;
    struct CGPoint _anchorPoint;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *lastKnownImageComponents; // @synthesize lastKnownImageComponents=_lastKnownImageComponents;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) BOOL rotatable; // @synthesize rotatable=_rotatable;
@property(nonatomic) BOOL scalable; // @synthesize scalable=_scalable;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

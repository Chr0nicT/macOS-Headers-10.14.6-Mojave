//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTLStructMember : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)indirectArgumentType;
- (id)pointerType;
- (id)textureReferenceType;
- (id)arrayType;
- (id)structType;

// Remaining properties
@property(readonly) unsigned long long argumentIndex; // @dynamic argumentIndex;
@property(readonly) unsigned long long dataType; // @dynamic dataType;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) unsigned long long offset; // @dynamic offset;

@end

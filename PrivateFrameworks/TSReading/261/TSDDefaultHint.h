//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSSecureCoding-Protocol.h>
#import <TSReading/TSDHint-Protocol.h>

@class NSString;

@interface TSDDefaultHint : NSObject <TSDHint, NSSecureCoding>
{
    struct CGRect mBounds;
    unsigned long long mEdges;
}

+ (BOOL)supportsSecureCoding;
+ (Class)archivedHintClass;
@property(readonly, nonatomic) unsigned long long edges; // @synthesize edges=mEdges;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=mBounds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastChildHint;
- (id)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelection:(id)arg1;
- (BOOL)isLastPartitionHorizontally:(BOOL)arg1;
- (id)copyForArchiving;
- (id)initWithBounds:(struct CGRect)arg1 edges:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

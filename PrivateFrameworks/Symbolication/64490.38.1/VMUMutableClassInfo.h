//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Symbolication/VMUClassInfo.h>

@class NSString;

@interface VMUMutableClassInfo : VMUClassInfo
{
}

- (void)setVariantScanType:(unsigned int)arg1 withEvaluator:(CDUnknownBlockType)arg2;
- (void)addVariantRecursively:(id)arg1 forField:(id)arg2 withEvaluator:(CDUnknownBlockType)arg3;
- (void)addVariant:(id)arg1 forField:(id)arg2 withEvaluator:(CDUnknownBlockType)arg3;
- (void)setFields:(id)arg1;
- (void)replaceField:(id)arg1 withFields:(id)arg2;
- (void)addFields:(id)arg1;
- (void)mutateTypeFieldsRecursivelyWithBlock:(CDUnknownBlockType)arg1;
- (void)mutateTypeFieldsWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned int defaultScanType; // @dynamic defaultScanType;
@property(retain, nonatomic) VMUClassInfo *superclassInfo; // @dynamic superclassInfo;
@property(copy, nonatomic) NSString *binaryPath; // @dynamic binaryPath;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>
#import <TSUtility/TSUDataFormat-Protocol.h>

@class NSString;

@interface TSUDateFormat : NSObject <NSCopying, TSUDataFormat>
{
    NSString *mFormat;
    NSString *mName;
}

+ (id)formatWithFormat:(id)arg1 name:(id)arg2;
- (void)setFormatName:(id)arg1;
- (id)formatName;
- (id)format;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFormat:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

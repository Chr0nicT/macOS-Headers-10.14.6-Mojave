//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCondition, _INPBDataString;

@protocol _INPBDataStringList <NSObject>
+ (Class)dataStringType;
@property(readonly, nonatomic) unsigned long long dataStringsCount;
@property(copy, nonatomic) NSArray *dataStrings;
@property(readonly, nonatomic) BOOL hasConditionType;
@property(retain, nonatomic) _INPBCondition *conditionType;
- (_INPBDataString *)dataStringAtIndex:(unsigned long long)arg1;
- (void)addDataString:(_INPBDataString *)arg1;
- (void)clearDataStrings;
@end

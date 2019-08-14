//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleScriptKit/NSCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface ASKNibObjectInfo : NSObject <NSCoding>
{
    long long _ID;
    NSString *_name;
    NSString *_scriptName;
    NSMutableArray *_eventHandlerNames;
    int _scope;
}

+ (void)initialize;
- (unsigned long long)indexOfEventHandlerName:(id)arg1;
- (void)removeEventHandlerName:(id)arg1;
- (void)addEventHandlerName:(id)arg1;
- (BOOL)hasInfo;
- (void)setScope:(int)arg1;
- (int)scope;
- (void)setEventHandlerNames:(id)arg1;
- (id)eventHandlerNames;
- (void)setScriptName:(id)arg1;
- (id)scriptName;
- (void)setID:(long long)arg1;
- (long long)ID;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemPolicy/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface SPExecutionHistoryItem : NSObject <NSSecureCoding>
{
    NSString *_execPath;
    NSString *_mmapPath;
    NSString *_signingID;
    NSString *_teamID;
    NSString *_cdHash;
    NSString *_responsiblePath;
    NSString *_developerName;
    NSDate *_lastSeen;
}

+ (BOOL)supportsSecureCoding;
+ (id)executionHistoryItemWithExecPath:(id)arg1 mmapPath:(id)arg2 signingID:(id)arg3 teamID:(id)arg4 cdHash:(id)arg5 responsiblePath:(id)arg6 developerName:(id)arg7 lasSeen:(id)arg8;
@property(readonly, nonatomic) NSDate *lastSeen; // @synthesize lastSeen=_lastSeen;
@property(readonly, nonatomic) NSString *developerName; // @synthesize developerName=_developerName;
@property(readonly, nonatomic) NSString *responsiblePath; // @synthesize responsiblePath=_responsiblePath;
@property(readonly, nonatomic) NSString *cdHash; // @synthesize cdHash=_cdHash;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSString *signingID; // @synthesize signingID=_signingID;
@property(readonly, nonatomic) NSString *mmapPath; // @synthesize mmapPath=_mmapPath;
@property(readonly, nonatomic) NSString *execPath; // @synthesize execPath=_execPath;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExecPath:(id)arg1 mmapPath:(id)arg2 signingID:(id)arg3 teamID:(id)arg4 cdHash:(id)arg5 responsiblePath:(id)arg6 developerName:(id)arg7 lasSeen:(id)arg8;
- (id)init;

@end

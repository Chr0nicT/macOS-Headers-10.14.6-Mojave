//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NSSet;
@protocol FCContentContext;

@interface FCCheckDraftContentAccessOperation : FCOperation
{
    id <FCContentContext> _context;
    NSArray *_channelMemberships;
    NSSet *_issueIDs;
    NSSet *_articleIDs;
    CDUnknownBlockType _checkAccessCompletion;
    NSDictionary *_resultAccessByContentID;
}

@property(copy, nonatomic) NSDictionary *resultAccessByContentID; // @synthesize resultAccessByContentID=_resultAccessByContentID;
@property(copy, nonatomic) CDUnknownBlockType checkAccessCompletion; // @synthesize checkAccessCompletion=_checkAccessCompletion;
@property(copy, nonatomic) NSSet *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(copy, nonatomic) NSSet *issueIDs; // @synthesize issueIDs=_issueIDs;
@property(copy, nonatomic) NSArray *channelMemberships; // @synthesize channelMemberships=_channelMemberships;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end

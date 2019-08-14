//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPUserReportFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback, _CPPunchoutForFeedback, _CPSearchResultForFeedback;

@interface _CPUserReportFeedback : PBCodable <_CPProcessableFeedback, _CPUserReportFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;
    _CPSearchResultForFeedback *_result;
    _CPPunchoutForFeedback *_userSelection;
    _CPCardSectionForFeedback *_cardSection;
    NSData *_uuidBytes;
}

@property(copy, nonatomic) NSData *uuidBytes; // @synthesize uuidBytes=_uuidBytes;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection; // @synthesize cardSection=_cardSection;
@property(retain, nonatomic) _CPPunchoutForFeedback *userSelection; // @synthesize userSelection=_userSelection;
@property(retain, nonatomic) _CPSearchResultForFeedback *result; // @synthesize result=_result;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) BOOL requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface _INVocabularyItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_string;
    NSString *_vocabularyIdentifier;
    NSUUID *__siriID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic, setter=_setSiriID:) NSUUID *_siriID; // @synthesize _siriID=__siriID;
@property(readonly, nonatomic) NSString *vocabularyIdentifier; // @synthesize vocabularyIdentifier=_vocabularyIdentifier;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)validate;
- (id)_dictionaryForSaving;
- (BOOL)_isSimilarEnoughToNotSync:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSpeakable:(id)arg1;
- (id)initWithString:(id)arg1 vocabularyIdentifier:(id)arg2;
- (id)_initWithUncheckedSpeakable:(id)arg1;
- (id)_initWithUncheckedString:(id)arg1 vocabularyIdentifier:(id)arg2;
- (id)_initWithVocabularyItem:(id)arg1;

@end

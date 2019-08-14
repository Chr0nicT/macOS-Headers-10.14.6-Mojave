//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

@class FBAFormResponse, FBAQuestion, NSArray, NSNumber;

@interface FBAAnswer : FBAManagedFeedbackObject
{
}

+ (id)keyPathsForValuesAffectingValue;
+ (unsigned long long)answerTypeFromString:(id)arg1;
+ (id)emptyLocalAnswerForQuestionID:(id)arg1 inFormResponse:(id)arg2;
+ (id)_importByQuestionIDFromJSONArray:(id)arg1 withFormResponseID:(id)arg2 intoContext:(id)arg3;
+ (id)entityName;
@property(retain) FBAQuestion *question; // @dynamic question;
@property(getter=isOptedOut) BOOL optedOut;
@property(retain) id value;
- (void)setPropertiesFromJSONObject:(id)arg1;

// Remaining properties
@property(retain) FBAFormResponse *formResponse; // @dynamic formResponse;
@property(retain) NSNumber *primitiveOptedOut; // @dynamic primitiveOptedOut;
@property(retain) NSNumber *questionID; // @dynamic questionID;
@property BOOL resolved; // @dynamic resolved;
@property(copy) NSArray *values; // @dynamic values;

@end

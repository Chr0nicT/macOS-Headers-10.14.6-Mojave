//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLDictionarySerializableProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString, PMLMutableDenseVector;

@interface PMLModelLearningRates : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol>
{
    PMLMutableDenseVector *_data;
}

+ (id)modelLearningRatesFromFloats:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)length;
- (float *)values;
- (id)init;
- (id)initModelLearningRatesFromFloats:(id)arg1;
- (id)toDictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

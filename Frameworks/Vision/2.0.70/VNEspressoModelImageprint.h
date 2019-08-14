//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>
#import <Vision/VNSerializing-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface VNEspressoModelImageprint : NSObject <NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding>
{
    NSDictionary *_labelsAndConfidence;
    unsigned long long _requestRevision;
    NSData *_descriptorData;
    unsigned long long _elementCount;
    unsigned long long _lengthInBytes;
    unsigned long long _confidenceScoreType;
    NSString *_version;
    long long _distanceMode;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1;
@property long long distanceMode; // @synthesize distanceMode=_distanceMode;
@property(copy) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long confidenceScoreType; // @synthesize confidenceScoreType=_confidenceScoreType;
@property(copy) NSDictionary *labelsAndConfidence; // @synthesize labelsAndConfidence=_labelsAndConfidence;
@property unsigned long long lengthInBytes; // @synthesize lengthInBytes=_lengthInBytes;
@property unsigned long long elementCount; // @synthesize elementCount=_elementCount;
@property(retain) NSData *descriptorData; // @synthesize descriptorData=_descriptorData;
- (void).cxx_destruct;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithState:(id)arg1 error:(id *)arg2;
- (id)serializeStateAndReturnError:(id *)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializedLength;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 lengthInBytes:(unsigned long long)arg3 labelsAndConfidence:(id)arg4 requestRevision:(unsigned long long)arg5;

@end

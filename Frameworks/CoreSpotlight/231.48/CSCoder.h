//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSCoderData-Protocol.h>

@class NSData;

@interface CSCoder : NSObject <CSCoderData>
{
    BOOL _finalized;
    NSData *_data;
    struct _MDPlistContainer *_container;
}

@property(readonly, nonatomic) BOOL finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) struct _MDPlistContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)endDictionary;
- (void)beginDictionary;
- (void)endType;
- (void)beginType:(const char *)arg1;
- (void)endArray;
- (void)beginArray;
- (void)encodeNSString:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeMDPlistObject:(CDStruct_b7fac349)arg1;
- (void)encodeString:(const char *)arg1 stringLength:(long long)arg2 forKey:(const char *)arg3 keyLength:(long long)arg4;
- (void)encodeObject:(id)arg1 forKey:(const char *)arg2 keyLength:(long long)arg3;
- (void)encodeData:(const void *)arg1 length:(long long)arg2;
- (void)encodeString:(const char *)arg1 length:(long long)arg2;
- (void)encodeString:(const char *)arg1;
- (void)encodeInt64:(long long)arg1;
- (void)encodeInt32:(int)arg1;
- (void)encodeBool:(BOOL)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)init;

@end

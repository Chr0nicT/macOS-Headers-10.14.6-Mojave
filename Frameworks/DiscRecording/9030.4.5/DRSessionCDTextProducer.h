//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DRCDTextBlock, NSMutableData;

__attribute__((visibility("hidden")))
@interface DRSessionCDTextProducer : NSObject
{
    DRCDTextBlock *_cdText;
    NSMutableData *_packData;
    unsigned long long _pwIndex;
    unsigned long long _pwSize;
}

- (void)cleanupSessionAfterBurn:(id)arg1;
- (unsigned int)produceLeadInForSession:(id)arg1 intoBuffer:(char *)arg2 length:(unsigned int)arg3 atAddress:(unsigned long long)arg4 ioFlags:(unsigned int *)arg5;
- (BOOL)prepareSession:(id)arg1 forBurn:(id)arg2 toMedia:(id)arg3;
- (void)expandPackData;
- (void)dealloc;
- (id)initWithCDText:(id)arg1;

@end

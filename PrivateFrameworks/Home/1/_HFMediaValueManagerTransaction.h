//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NAFuture, NSNumber;

@interface _HFMediaValueManagerTransaction : NSObject
{
    NAFuture *_writeFuture;
    long long _playbackState;
    NSNumber *_transactionNumber;
}

@property(retain, nonatomic) NSNumber *transactionNumber; // @synthesize transactionNumber=_transactionNumber;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) NAFuture *writeFuture; // @synthesize writeFuture=_writeFuture;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end


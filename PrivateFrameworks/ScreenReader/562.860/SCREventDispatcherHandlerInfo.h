//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCREvent, SCROutputRequest;

__attribute__((visibility("hidden")))
@interface SCREventDispatcherHandlerInfo : NSObject
{
    BOOL _handled;
    SCREvent *_event;
    SCROutputRequest *_request;
}

@property(nonatomic) BOOL handled; // @synthesize handled=_handled;
@property(retain, nonatomic) SCROutputRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) SCREvent *event; // @synthesize event=_event;
- (void)dealloc;
- (id)initWithEvent:(id)arg1 outputRequest:(id)arg2;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSDate, NSString;

@interface IP_FFPMRScreenRefreshController : NSObject
{
    NSDate *m_startTime;
    NSString *m_instrument;
    struct __CFString *m_name;
    struct __CFString *m_comment;
    double m_timeout;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)_FFPMRScreenRefreshReporterNoMoreDrawing:(id)arg1;
- (void)startWatchingForInstrument:(id)arg1 name:(struct __CFString *)arg2 comment:(struct __CFString *)arg3;
- (void)_registerForNotifications;

@end

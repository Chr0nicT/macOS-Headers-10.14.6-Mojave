//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalLogWriter-Protocol.h>

@class NSString;
@protocol CalLogFormatter;

@interface CalLogWriter : NSObject <CalLogWriter>
{
    id <CalLogFormatter> _formatter;
}

@property(retain, nonatomic) id <CalLogFormatter> formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (BOOL)flush;
- (void)write:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithParameters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

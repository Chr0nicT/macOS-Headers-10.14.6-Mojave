//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentMessage-Protocol.h>

@class NSDictionary, NSString;

@interface SXWebContentMessage : NSObject <SXWebContentMessage>
{
    NSString *_name;
    NSDictionary *_body;
}

@property(readonly, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

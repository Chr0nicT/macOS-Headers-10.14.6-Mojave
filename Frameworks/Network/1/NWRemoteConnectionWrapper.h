//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, NWConnection;

__attribute__((visibility("hidden")))
@interface NWRemoteConnectionWrapper : NSObject
{
    NSUUID *_clientID;
    NWConnection *_connection;
}

@property(retain) NWConnection *connection; // @synthesize connection=_connection;
@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;

@end

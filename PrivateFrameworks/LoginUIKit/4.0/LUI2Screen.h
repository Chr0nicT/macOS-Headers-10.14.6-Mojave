//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LUI2Screen : NSObject
{
    int _displayID;
}

+ (id)screens;
+ (id)screenForWindow:(id)arg1;
+ (id)mainScreen;
@property(readonly) int displayID; // @synthesize displayID=_displayID;
- (id)initWithDisplayID:(unsigned int)arg1;
@property(readonly) struct CGRect frame;

@end

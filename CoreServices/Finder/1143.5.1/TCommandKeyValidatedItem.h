//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSValidatedUserInterfaceItem-Protocol.h"

@interface TCommandKeyValidatedItem : NSObject <NSValidatedUserInterfaceItem>
{
    SEL _action;
    long long _tag;
}

@property(readonly) long long tag;
@property(readonly) SEL action;
- (id)initWithAction:(SEL)arg1 andTag:(long long)arg2;

@end

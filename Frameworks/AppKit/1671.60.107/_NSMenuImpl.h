//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFont, NSStoryboard, NSString;

__attribute__((visibility("hidden")))
@interface _NSMenuImpl : NSObject
{
    id _impl;
    id _delegate;
    id _delegateHelper;
    id _menuOwner;
    NSFont *_font;
    NSString *_name;
    id _startingRequestor;
    double _minimumWidth;
    struct NSMenuUpdaterInfo_t *sidebandUpdaters;
    const void *_contextMenuPluginAEDesc;
    NSStoryboard *_storyboard;
    unsigned long long _indentationWidth;
    NSString *_delegateClass;
}

- (void)dealloc;

@end

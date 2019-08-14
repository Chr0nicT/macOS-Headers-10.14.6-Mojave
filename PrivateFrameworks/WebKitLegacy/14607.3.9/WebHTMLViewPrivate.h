//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAKView;

__attribute__((visibility("hidden")))
@interface WebHTMLViewPrivate : NSObject
{
    BOOL closed;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL paginateScreenContent;
    WAKView *layerHostingView;
    struct RetainPtr<WebEvent> mouseDownEvent;
    BOOL handlingMouseDownEvent;
    struct RetainPtr<WebEvent> keyDownEvent;
    BOOL exposeInputContext;
    struct CGPoint lastScrollPosition;
    BOOL inScrollPositionChanged;
    struct RetainPtr<WebPluginController> pluginController;
    struct RetainPtr<NSArray> pageRects;
    struct WebHTMLViewInterpretKeyEventsParameters *interpretKeyEventsParameters;
    struct RetainPtr<WebDataSource> dataSource;
    SEL selectorForDoCommandBySelector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;

@end

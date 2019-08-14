//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSServiceViewController.h>

#import <PassKit/PKPaymentAuthorizationExtensionViewServiceProtocol-Protocol.h>

@class NSString, NSWindow;

@interface PKExtensionServiceViewController : NSServiceViewController <PKPaymentAuthorizationExtensionViewServiceProtocol>
{
    NSWindow *_window;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)connectToContextWithSessionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadView;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

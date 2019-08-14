//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <Safari/HomepageHostViewController-Protocol.h>

@protocol HomepageHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface HomepageHostViewController : NSRemoteViewController <HomepageHostViewController>
{
    id <HomepageHostViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HomepageHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)tryApplyingHomepageURL:(id)arg1 sandboxExtensionToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end

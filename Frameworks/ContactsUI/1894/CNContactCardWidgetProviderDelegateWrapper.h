//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNContactCardWidgetProviderDelegate;

@interface CNContactCardWidgetProviderDelegateWrapper : NSObject
{
    id <CNContactCardWidgetProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <CNContactCardWidgetProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)widgetProvider:(id)arg1 willCreateActionsViewController:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

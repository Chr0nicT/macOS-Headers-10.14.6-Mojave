//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASWriteReviewConfiguration, ASWriteReviewWindowController;

@interface ASWriteReviewController : NSObject
{
    ASWriteReviewConfiguration *_configuration;
    ASWriteReviewWindowController *_reviewWindowController;
}

@property(retain, nonatomic) ASWriteReviewWindowController *reviewWindowController; // @synthesize reviewWindowController=_reviewWindowController;
@property(retain, nonatomic) ASWriteReviewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1;

@end


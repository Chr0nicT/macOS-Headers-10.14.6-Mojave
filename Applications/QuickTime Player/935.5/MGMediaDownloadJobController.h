//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MGJobController.h"

@class MGMediaDownloadJob, NSError, NSURL;

@interface MGMediaDownloadJobController : MGJobController
{
    NSError *_error;
    MGMediaDownloadJob *_activeJob;
    NSURL *_outputURL;
}

+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatusString;
+ (id)keyPathsForValuesAffectingResultURL;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain, nonatomic) MGMediaDownloadJob *activeJob; // @synthesize activeJob=_activeJob;
- (void).cxx_destruct;
- (BOOL)restoreFromDictionaryRepresentation:(id)arg1;
- (id)savedDictionaryRepresentation;
- (BOOL)canReveal;
- (id)error;
- (id)statusString;
- (id)resultURL;
- (id)icon;
- (id)name;
- (id)identifier;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 hideExtension:(BOOL)arg3;

@end

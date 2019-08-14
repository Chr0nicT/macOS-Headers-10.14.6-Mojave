//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchScreenshotRequest : DMFTaskRequest
{
    BOOL _usesPixels;
    unsigned long long _maxWidth;
    unsigned long long _maxHeight;
    NSString *_sessionToken;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(nonatomic) BOOL usesPixels; // @synthesize usesPixels=_usesPixels;
@property(nonatomic) unsigned long long maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) unsigned long long maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

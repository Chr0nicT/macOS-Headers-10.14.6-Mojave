//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameTensorAttachment : EspressoDataFrameAttachment
{
    CDStruct_0a65202a buffer;
}

+ (CDStruct_0a65202a)copyFromCVPixelBuffer:(struct __CVBuffer *)arg1;
- (CDStruct_0a65202a)copyAsEspressoBuffer;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUCGImageSourceDefinition : NUSingleSourceDefinition
{
    struct CGImageSource *_imageSource;
}

@property(readonly) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
- (void)dealloc;
- (id)initWithCGImageSource:(struct CGImageSource *)arg1;
- (id)init;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end

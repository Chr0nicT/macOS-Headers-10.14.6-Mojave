//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXObjectDestination.h"

@class IPXImportSource;

@interface IPXImportSourceDestination : IPXObjectDestination
{
    IPXImportSource *_importSource;
}

@property(readonly, nonatomic) IPXImportSource *importSource; // @synthesize importSource=_importSource;
- (void).cxx_destruct;
- (id)initWithImportSource:(id)arg1;

@end

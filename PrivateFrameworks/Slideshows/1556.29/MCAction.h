//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MCObjectLight.h>

@class NSString;

@interface MCAction : MCObjectLight
{
    unsigned int _flags;
    NSString *_targetObjectID;
}

@property(copy) NSString *targetObjectID; // @synthesize targetObjectID=_targetObjectID;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)snapshot;
- (BOOL)isSnapshot;
@property(nonatomic) BOOL tracksInParent;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

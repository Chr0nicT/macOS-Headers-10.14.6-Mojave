//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRCroppingSprite, MRImage;

@interface MRShiftingTilesRenderable : NSObject
{
    MRImage *slide;
    MRCroppingSprite *sprite;
    struct CGPoint position;
    struct CGSize size;
    BOOL isBreak;
}

@property(retain, nonatomic) MRCroppingSprite *sprite; // @synthesize sprite;
@property(retain, nonatomic) MRImage *slide; // @synthesize slide;
- (void)dealloc;

@end

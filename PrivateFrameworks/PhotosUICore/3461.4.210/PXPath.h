//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXPath : NSObject
{
    struct CGPath *_CGPath;
    NSMutableArray *_points;
}

+ (id)pathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)pathWithEllipseInRect:(struct CGRect)arg1;
+ (id)pathWithRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
@property(retain) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
- (void).cxx_destruct;
- (void)addContinuousCornerToPath:(struct CGPath *)arg1 trueCorner:(struct CGPoint)arg2 cornerRadius:(struct CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7;
- (id)initWithRect:(struct CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(BOOL)arg4;
- (struct CGRect)boundingRect;
- (void)closeSubpath;
- (void)addLineToPointX:(double)arg1 y:(double)arg2;
- (id)initWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;

@end

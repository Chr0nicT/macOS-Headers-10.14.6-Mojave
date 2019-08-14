//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITextSelectionRect.h>

@class UITextRange;

@interface TSDTextSelectionRect : UITextSelectionRect
{
    struct CGRect _rect;
    long long _writingDirection;
    UITextRange *_range;
    BOOL _containsStart;
    BOOL _containsEnd;
    BOOL _isVertical;
}

- (BOOL)isVertical;
- (BOOL)containsEnd;
- (BOOL)containsStart;
@property(retain, nonatomic) UITextRange *range; // @synthesize range=_range;
- (long long)writingDirection;
- (struct CGRect)rect;
- (void)dealloc;
- (id)initWithRect:(struct CGRect)arg1 direction:(long long)arg2 range:(id)arg3 containsStart:(BOOL)arg4 containsEnd:(BOOL)arg5 isVertical:(BOOL)arg6;

@end

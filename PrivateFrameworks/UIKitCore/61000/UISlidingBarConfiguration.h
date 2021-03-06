//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <NSCopying>
{
    BOOL _leadingMayBeHidden;
    BOOL _trailingMayBeHidden;
    BOOL _allowMixedSideBySideAndOverlay;
    double _minimumMainWidthFraction;
    double _minimumMainWidthFractionForSecondColumn;
    double _maximumMainWidth;
    NSArray *_leadingWidths;
    NSArray *_trailingWidths;
    double _leadingBorderWidth;
    double _trailingBorderWidth;
    UIColor *_borderColor;
}

@property(nonatomic) BOOL allowMixedSideBySideAndOverlay; // @synthesize allowMixedSideBySideAndOverlay=_allowMixedSideBySideAndOverlay;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double trailingBorderWidth; // @synthesize trailingBorderWidth=_trailingBorderWidth;
@property(nonatomic) double leadingBorderWidth; // @synthesize leadingBorderWidth=_leadingBorderWidth;
@property(copy, nonatomic) NSArray *trailingWidths; // @synthesize trailingWidths=_trailingWidths;
@property(copy, nonatomic) NSArray *leadingWidths; // @synthesize leadingWidths=_leadingWidths;
@property(nonatomic) BOOL trailingMayBeHidden; // @synthesize trailingMayBeHidden=_trailingMayBeHidden;
@property(nonatomic) BOOL leadingMayBeHidden; // @synthesize leadingMayBeHidden=_leadingMayBeHidden;
@property(nonatomic) double maximumMainWidth; // @synthesize maximumMainWidth=_maximumMainWidth;
@property(nonatomic) double minimumMainWidthFractionForSecondColumn; // @synthesize minimumMainWidthFractionForSecondColumn=_minimumMainWidthFractionForSecondColumn;
@property(nonatomic) double minimumMainWidthFraction; // @synthesize minimumMainWidthFraction=_minimumMainWidthFraction;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCatalogColor.h>

@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor
{
}

- (BOOL)isUniform;
- (id)colorUsingType:(long long)arg1;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (double)alphaComponent;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (struct CGColor *)CGColor;
@property(readonly) NSColor *resolvedColor;
- (Class)classForCoder;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OADBaseStyles, OADDrawableDefaults;

@interface OADTheme : NSObject
{
    NSString *mName;
    OADBaseStyles *mBaseStyles;
    OADDrawableDefaults *mDrawableDefaults;
}

@property(readonly, nonatomic) OADDrawableDefaults *drawableDefaults; // @synthesize drawableDefaults=mDrawableDefaults;
@property(retain, nonatomic) OADBaseStyles *baseStyles; // @synthesize baseStyles=mBaseStyles;
@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
- (void).cxx_destruct;
- (id)description;
- (void)validateTheme;
- (_Bool)isEmpty;
- (id)init;

@end

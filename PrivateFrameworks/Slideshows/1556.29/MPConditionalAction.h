//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MPAction.h>

#import <Slideshows/MPActionSupport-Protocol.h>

@class NSString;

@interface MPConditionalAction : MPAction <MPActionSupport>
{
    NSString *_predicate;
    MPAction *_actionIfTrue;
    MPAction *_actionIfFalse;
}

+ (id)conditionalAction;
@property(readonly) MPAction *actionIfFalse; // @synthesize actionIfFalse=_actionIfFalse;
@property(readonly) MPAction *actionIfTrue; // @synthesize actionIfTrue=_actionIfTrue;
@property(copy, nonatomic) NSString *predicate; // @synthesize predicate=_predicate;
- (void)configureTarget;
- (void)configureActions;
- (void)setAction:(id)arg1;
- (void)setAction:(id)arg1 forCondition:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

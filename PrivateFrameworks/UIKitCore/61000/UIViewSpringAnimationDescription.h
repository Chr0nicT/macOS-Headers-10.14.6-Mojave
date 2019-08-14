//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimationDescription : NSObject
{
    BOOL _usesDampingRatioAndResponse;
    double _tension;
    double _friction;
    CDStruct_38aa087a _parameters;
}

+ (id)descriptionWithTension:(double)arg1 friction:(double)arg2;
+ (id)descriptionWithSpringAnimationParameters:(CDStruct_38aa087a)arg1;
@property(nonatomic) CDStruct_38aa087a parameters; // @synthesize parameters=_parameters;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double tension; // @synthesize tension=_tension;
@property(nonatomic) BOOL usesDampingRatioAndResponse; // @synthesize usesDampingRatioAndResponse=_usesDampingRatioAndResponse;

@end

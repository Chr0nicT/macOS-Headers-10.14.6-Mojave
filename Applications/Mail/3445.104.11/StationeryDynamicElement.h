//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface StationeryDynamicElement : NSObject
{
    NSString *_dateFormat;
    long long _type;
}

+ (id)dynamicElementFromDOMElement:(id)arg1;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)fragmentToReplaceHTMLObjectBackEnd:(id)arg1;
- (void)_setDateFormat:(id)arg1;
- (id)init;
- (id)initWithType:(long long)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject
{
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

@property(retain, nonatomic) NSMutableDictionary *selectorToPropertyMap; // @synthesize selectorToPropertyMap=_selectorToPropertyMap;
@property(retain, nonatomic) NSMutableDictionary *propertyNameToPropertyMap; // @synthesize propertyNameToPropertyMap=_propertyNameToPropertyMap;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolRuntimeStructureDescription : RWIProtocolJSONObject
{
}

@property(nonatomic) BOOL isImprecise;
@property(retain, nonatomic) RWIProtocolRuntimeStructureDescription *prototypeStructure;
@property(copy, nonatomic) NSString *constructorName;
@property(copy, nonatomic) NSArray *optionalFields;
@property(copy, nonatomic) NSArray *fields;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSBaseItemIdType, NSArray, NSString;

@interface EWSItemChangeType : NSObject <XSDefinitionProvider>
{
    EWSBaseItemIdType *_ItemId;
    NSArray *_Updates;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *Updates; // @synthesize Updates=_Updates;
@property(retain, nonatomic) EWSBaseItemIdType *ItemId; // @synthesize ItemId=_ItemId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

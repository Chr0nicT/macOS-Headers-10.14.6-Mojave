//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitSystemAppServices/USSXPCEncodable-Protocol.h>

@class NSArray;

@interface USSOpenURLRequest : NSObject <USSXPCEncodable>
{
    NSArray *_urls;
}

+ (id)requestWithURLs:(id)arg1;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithURLs:(id)arg1;

@end

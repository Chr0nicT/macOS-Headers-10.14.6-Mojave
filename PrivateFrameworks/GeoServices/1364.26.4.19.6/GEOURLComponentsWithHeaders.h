//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOURLWithHeaders, NSMutableDictionary, NSURL, NSURLComponents;

__attribute__((visibility("hidden")))
@interface GEOURLComponentsWithHeaders : NSObject
{
    NSURLComponents *_URLComponents;
    NSMutableDictionary *_headerFields;
}

@property(readonly, nonatomic) NSMutableDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(readonly, nonatomic) NSURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOURLWithHeaders *URLWithHeaders;
@property(readonly, nonatomic) NSURL *URL;
- (void)updateQueryItemsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (id)initWithURLComponents:(id)arg1;

@end

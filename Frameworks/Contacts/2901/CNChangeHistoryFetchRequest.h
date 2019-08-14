//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNChangeHistoryFetchRequest : NSObject <NSSecureCoding>
{
    BOOL _unifyResults;
    BOOL _includeGroupChanges;
    BOOL _includeChangeAnchors;
    NSString *_clientIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL includeChangeAnchors; // @synthesize includeChangeAnchors=_includeChangeAnchors;
@property(nonatomic) BOOL includeGroupChanges; // @synthesize includeGroupChanges=_includeGroupChanges;
@property(nonatomic) BOOL unifyResults; // @synthesize unifyResults=_unifyResults;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;

@end

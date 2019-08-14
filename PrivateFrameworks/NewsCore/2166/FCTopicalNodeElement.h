//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSSet, NSString;

@interface FCTopicalNodeElement : NSObject <NSCopying>
{
    NSString *_identifier;
    NSSet *_topics;
    double _score;
}

@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSSet *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 topics:(id)arg2 score:(double)arg3;

@end

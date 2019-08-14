//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdentityLookup/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface ILCommunication : NSObject <NSSecureCoding>
{
    NSString *_sender;
    NSDate *_dateReceived;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(readonly, copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToCommunication:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2;

@end

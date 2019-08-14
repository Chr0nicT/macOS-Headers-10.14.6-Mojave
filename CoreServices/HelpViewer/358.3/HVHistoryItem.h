//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface HVHistoryItem : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isError;
    NSString *_internalTitle;
    NSString *_URLString;
}

+ (BOOL)supportsSecureCoding;
+ (id)itemWithURLString:(id)arg1 title:(id)arg2;
@property(retain) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain) NSString *internalTitle; // @synthesize internalTitle=_internalTitle;
@property BOOL isError; // @synthesize isError=_isError;
- (void).cxx_destruct;
- (BOOL)updateFromItem:(id)arg1;
- (id)description;
@property(readonly) BOOL promissedTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isSameTargetAsItem:(id)arg1;
@property(readonly) NSString *bookTitle;
@property(readonly) NSString *title;
- (id)targetURL;
@property(readonly) long long contollerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2;

@end

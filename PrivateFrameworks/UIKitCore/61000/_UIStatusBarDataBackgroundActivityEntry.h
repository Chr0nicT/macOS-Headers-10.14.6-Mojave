//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBackgroundActivityEntry : _UIStatusBarDataEntry
{
    long long _type;
    double _displayStartDate;
    NSString *_detailString;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property(nonatomic) double displayStartDate; // @synthesize displayStartDate=_displayStartDate;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;

@end


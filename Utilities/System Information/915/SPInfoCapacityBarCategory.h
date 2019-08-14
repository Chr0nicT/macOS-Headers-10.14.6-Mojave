//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSString;

@interface SPInfoCapacityBarCategory : NSObject
{
    BOOL _hideLabel;
    BOOL _hidePopover;
    BOOL _crosshatched;
    unsigned long long _value;
    NSColor *_color;
    NSString *_name;
    NSString *_identifier;
}

@property(getter=isCrosshatched) BOOL crosshatched; // @synthesize crosshatched=_crosshatched;
@property BOOL hidePopover; // @synthesize hidePopover=_hidePopover;
@property BOOL hideLabel; // @synthesize hideLabel=_hideLabel;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSColor *color; // @synthesize color=_color;
@property unsigned long long value; // @synthesize value=_value;
- (void)dealloc;
- (id)sizeString;

@end

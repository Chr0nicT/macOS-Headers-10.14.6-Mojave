//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SHKSharingServicePicker;
@protocol NSSharingServicePickerDelegate, SHKMenuControllerDelegate;

__attribute__((visibility("hidden")))
@interface NSSharingServicePickerReserved : NSObject
{
    id <NSSharingServicePickerDelegate> delegate;
    id <SHKMenuControllerDelegate> shkDelegate;
    SHKSharingServicePicker *picker;
    NSArray *items;
    long long style;
}

- (void).cxx_destruct;
- (void)dealloc;

@end

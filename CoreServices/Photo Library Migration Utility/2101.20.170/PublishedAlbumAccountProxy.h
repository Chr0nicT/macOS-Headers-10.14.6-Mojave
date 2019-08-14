//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "AlbumViewItemWithProgressProtocol-Protocol.h"

@class IPHProgressIndicator, ImageDB, NSMutableArray, NSString;

@interface PublishedAlbumAccountProxy : NSObject <AlbumViewItemWithProgressProtocol>
{
    NSString *_serviceKey;
    NSString *_serviceUserName;
    NSString *_displayName;
    NSMutableArray *_albums;
    NSMutableArray *_hiddenAlbums;
    ImageDB *_db;
    IPHProgressIndicator *_progressIndicator;
    unsigned long long mAcceptsInternalDrop;
    unsigned long long mAcceptsExternalDrop;
}

+ (id)hybridKeyForServiceKey:(id)arg1 serviceUserName:(id)arg2;
@property(retain) IPHProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) ImageDB *db; // @synthesize db=_db;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *serviceUserName; // @synthesize serviceUserName=_serviceUserName;
@property(retain) NSString *serviceKey; // @synthesize serviceKey=_serviceKey;
- (BOOL)setProgressValue:(double)arg1;
- (double)progressValue;
- (Class)progressIndicatorClass;
- (BOOL)wantsProgress;
- (BOOL)showDropPopoverForPhotos:(id)arg1 atLocation:(struct CGRect)arg2;
- (void)setAcceptsExternalDrop:(unsigned long long)arg1;
- (unsigned long long)acceptsExternalDrop;
- (void)setAcceptsInternalDrop:(unsigned long long)arg1;
- (unsigned long long)acceptsInternalDrop;
@property(readonly) long long accountConfigurationIndex;
- (void)removeAllAlbums;
- (void)addAlbum:(id)arg1;
- (id)visibleAlbums;
- (id)albumViewItemName;
- (int)albumViewItemType;
- (id)hybridKey;
- (id)description;
- (void)dealloc;
- (id)init;

@end

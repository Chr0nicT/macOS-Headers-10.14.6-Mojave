//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCNContactPhotoStore.h>

@class NSOperationQueue;

@interface ABCNContactRemotePhotoStore : ABCNContactPhotoStore
{
    NSOperationQueue *_operationQueue;
}

- (id)photoFutureWithPerson:(id)arg1 meIdentifier:(id)arg2 alternateImageIdentifiers:(id)arg3 alternateImagePath:(id)arg4;
- (id)photoFutureWithPerson:(id)arg1 meIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithContactStore:(id)arg1;

@end

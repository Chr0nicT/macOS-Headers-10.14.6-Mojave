//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TTableViewDataSource.h"

#import "TSharedFileListObserverProtocol-Protocol.h"

@class NSArray, NSString;

@interface TFavoriteServersTableViewDataSource : TTableViewDataSource <TSharedFileListObserverProtocol>
{
    unsigned int _favoritesGeneration;
    struct unique_ptr<TFavoriteServersListObserverCocoaBridge, std::__1::default_delete<TFavoriteServersListObserverCocoaBridge>> _favoriteServersListPtr;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forRowIndexes:(id)arg4;
- (id)tableView:(id)arg1 pasteboardWriterForRow:(long long)arg2;
- (id)selectedItems;
@property(readonly, retain, nonatomic) NSArray *arrangedItems; // @dynamic arrangedItems;
- (void)sharedFileListChanged:(const struct TSharedFileList *)arg1;
- (void)refresh;
- (void)prepareContent;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

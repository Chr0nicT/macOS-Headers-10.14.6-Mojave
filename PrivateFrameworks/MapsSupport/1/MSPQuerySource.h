//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerObserver-Protocol.h>
#import <MapsSupport/MSPQuerySourceObserver-Protocol.h>

@class MSPContainer, NSHashTable, NSString, _MSPQueryState;

__attribute__((visibility("hidden")))
@interface MSPQuerySource : NSObject <MSPContainerObserver, MSPQuerySourceObserver>
{
    MSPContainer *_owningContainer;
    MSPQuerySource *_parentSource;
    CDUnknownBlockType _mappingBlock;
    CDUnknownBlockType _preprocessingBlock;
    NSHashTable *_observers;
    _MSPQueryState *_state;
}

- (void).cxx_destruct;
- (id)newEditableQuery;
- (id)newQuery;
- (id)sourceByMappingContentsUsingPreprocessingBlock:(CDUnknownBlockType)arg1 mappingBlock:(CDUnknownBlockType)arg2;
- (id)sourceByMappingContentsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (void)_didReceiveContainerContents:(id)arg1 context:(id)arg2;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)_removeObserver:(id)arg1;
- (id)_container;
- (void)_addObserver:(id)arg1;
- (id)_initWithParentSource:(id)arg1 preprocessingBlock:(CDUnknownBlockType)arg2 mappingBlock:(CDUnknownBlockType)arg3;
- (id)_initWithOwningContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

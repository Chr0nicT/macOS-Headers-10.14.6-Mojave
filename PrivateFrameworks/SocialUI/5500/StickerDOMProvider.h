//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialUI/DOMProvider.h>

#import <SocialUI/AssociatedMessageDOMProvider-Protocol.h>

@class NSMutableDictionary, NSString;

@interface StickerDOMProvider : DOMProvider <AssociatedMessageDOMProvider>
{
    NSMutableDictionary *_stickerChatItemsToUpdate;
    NSMutableDictionary *_stickerChatItemsToUpdateAfterMediaLoad;
}

@property(retain, nonatomic) NSMutableDictionary *stickerChatItemsToUpdateAfterMediaLoad; // @synthesize stickerChatItemsToUpdateAfterMediaLoad=_stickerChatItemsToUpdateAfterMediaLoad;
@property(retain, nonatomic) NSMutableDictionary *stickerChatItemsToUpdate; // @synthesize stickerChatItemsToUpdate=_stickerChatItemsToUpdate;
- (void).cxx_destruct;
- (id)getStickerSpacerElement:(id)arg1;
- (double)getStickerWidth:(struct CGSize *)arg1 withRadians:(double)arg2;
- (double)getStickerHeight:(struct CGSize *)arg1 withRadians:(double)arg2;
- (double)getScaleFactor:(double)arg1 stickerElement:(id)arg2 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor *)arg3;
- (double)getAttribute:(id)arg1 forStickerElement:(id)arg2;
- (struct IMAssociatedMessageGeometryDescriptor)createGeometryDescriptor:(id)arg1;
- (void)compareWidthsForScalars:(id)arg1 stickerSize:(struct CGSize *)arg2 messageTextWidth:(unsigned int)arg3 maxWidthPadding:(unsigned int *)arg4 fromMe:(BOOL)arg5 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor *)arg6;
- (void)compareHeightsForScalars:(id)arg1 stickerSize:(struct CGSize *)arg2 chatItemHeight:(unsigned int)arg3 maxBottomMargin:(unsigned int *)arg4 maxTopMargin:(unsigned int *)arg5 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor *)arg6;
- (void)setStickerPosition:(id)arg1 stickerSize:(struct CGSize *)arg2 parentClientSize:(struct CGSize *)arg3 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor *)arg4;
- (struct CGSize)updateStickerSize:(id)arg1 parentClientSize:(struct CGSize *)arg2 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor *)arg3;
- (struct CGSize)resolveStickersForChatItemElement:(id)arg1;
- (void)transcriptDidLayOut:(id)arg1;
- (void)updateStickerChatItems;
- (BOOL)hasStickersToPlaceOnVideoElements;
- (void)videoElementLoadedForGUID:(id)arg1;
- (void)setRotation:(id)arg1 withRadians:(float)arg2;
- (BOOL)setUpInitialSizeProperties:(id)arg1 chatItem:(id)arg2 imageSourcePath:(id)arg3;
- (id)fileTransferForGUID:(id)arg1;
- (id)setStickerImageSource:(id)arg1 chatItem:(id)arg2;
- (void)setUpDefaultSizeForSticker:(id)arg1;
- (id)createInitialStickerElementForChatItem:(id)arg1;
- (void)addChatItemToUpdateQueue:(id)arg1 forElement:(id)arg2 withChatItemElement:(id)arg3;
- (void)parseAssociatedChatItem:(id)arg1 appendToElement:(id)arg2 withChatItemElement:(id)arg3;
- (id)DOM;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


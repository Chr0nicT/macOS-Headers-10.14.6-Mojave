//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DPSharedSlot.h"

@class DPColorSpace, NSString;

@interface DPSharedDesktopImage : DPSharedSlot
{
    NSString *_path;
    struct CGSize _size;
    struct CGSize _realSize;
    int _placement;
    id _miniImage;
    DPColorSpace *_colorSpace;
    float _scaleFactor;
    unsigned int _index;
}

+ (id)sharedDesktopImageWithPath:(id)arg1 size:(struct CGSize)arg2 placement:(int)arg3 colorSpace:(id)arg4 scaleFactor:(float)arg5 index:(unsigned int)arg6;
+ (void)sharedDesktopImageWithPath:(id)arg1 size:(struct CGSize)arg2 placement:(int)arg3 colorSpace:(id)arg4 scaleFactor:(float)arg5 miniImageScale:(float)arg6 cache:(_Bool)arg7 index:(unsigned int)arg8 handler:(CDUnknownBlockType)arg9;
+ (void)initializeCache;
@property(readonly, nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) id miniImage; // @synthesize miniImage=_miniImage;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) struct CGSize realSize; // @synthesize realSize=_realSize;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithPath:(id)arg1 size:(struct CGSize)arg2 placement:(int)arg3 slot:(unsigned int)arg4 realSize:(struct CGSize)arg5 colorSpace:(id)arg6 scaleFactor:(float)arg7 index:(unsigned int)arg8;

@end

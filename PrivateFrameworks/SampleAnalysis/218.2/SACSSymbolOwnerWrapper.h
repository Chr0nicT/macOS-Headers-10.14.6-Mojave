//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SACSSymbolOwnerWrapper : NSObject
{
    BOOL _hasTextExecSegment;
    BOOL _isSparse;
    struct _CSTypeRef _symbolOwner;
    struct _CSRange _textSegmentRange;
}

@property(readonly) BOOL isSparse; // @synthesize isSparse=_isSparse;
@property(readonly) BOOL hasTextExecSegment; // @synthesize hasTextExecSegment=_hasTextExecSegment;
@property(readonly) struct _CSRange textSegmentRange; // @synthesize textSegmentRange=_textSegmentRange;
@property(readonly) struct _CSTypeRef symbolOwner; // @synthesize symbolOwner=_symbolOwner;
- (void)dealloc;
- (id)initWithCSSymbolOwner:(struct _CSTypeRef)arg1 isSparse:(BOOL)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AKSignature;

@interface AKSignatureOutputView_Mac : NSView
{
    BOOL _showsOutput;
    AKSignature *_signature;
}

@property(copy, nonatomic) AKSignature *signature; // @synthesize signature=_signature;
@property BOOL showsOutput; // @synthesize showsOutput=_showsOutput;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)showsOutput:(BOOL)arg1;
- (void)awakeFromNib;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRImage;

@interface Cube : NSObject
{
    MRImage *_sourceImage;
    MRImage *_destinationImage;
    float _textureCoords[8][2];
    float _sourceTriangleTextures[36][2];
    float _destinationTriangleTextures[36][2];
    long long _xIndex;
    long long _yIndex;
    long long _matrixWidth;
    long long _matrixHeight;
    double _localAspectRatio;
    BOOL _animateCube;
    BOOL _cubeReadyForAnimation;
    int _flipDirection;
    float _rps[3];
    float _position[3];
    float _rotation[3];
    float _scale[3];
}

+ (void)initialize;
@property(retain, nonatomic) MRImage *destinationImage; // @synthesize destinationImage=_destinationImage;
@property(retain, nonatomic) MRImage *sourceImage; // @synthesize sourceImage=_sourceImage;
- (void)draw:(id)arg1 withArguments:(id)arg2;
- (void)updateRotations:(double)arg1 rotateHorizontally:(BOOL)arg2;
- (void)setupTextureInformation:(int)arg1;
- (void)dealloc;
- (id)init;

@end

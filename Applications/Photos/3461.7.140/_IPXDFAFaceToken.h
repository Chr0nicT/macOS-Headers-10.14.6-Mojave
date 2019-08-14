//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSValue, RDFace, RDFaceTile, RDPerson, RDVersion;

@interface _IPXDFAFaceToken : NSObject
{
    NSValue *_faceRect;
    RDPerson *_person;
    RDFace *_face;
    RDVersion *_version;
    RDFaceTile *_faceTile;
}

@property(retain, nonatomic) RDFaceTile *faceTile; // @synthesize faceTile=_faceTile;
@property(retain, nonatomic) RDVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) RDFace *face; // @synthesize face=_face;
@property(retain, nonatomic) RDPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) NSValue *faceRect; // @synthesize faceRect=_faceRect;
- (void).cxx_destruct;
- (void)clearFaceInContext:(id)arg1;
- (id)initWithFaceTile:(id)arg1;

@end

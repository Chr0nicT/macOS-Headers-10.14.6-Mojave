//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiFilter.h>

@class NSArray;

@interface LiFilter_Ordered : LiFilter
{
    LiFilter *_subFilter;
    NSArray *_orderBy;
    NSArray *_ascending;
}

+ (unsigned char)encodingObjectType;
@property(readonly, nonatomic) NSArray *ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) NSArray *orderBy; // @synthesize orderBy=_orderBy;
@property(readonly, nonatomic) LiFilter *subFilter; // @synthesize subFilter=_subFilter;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)description;
- (unsigned char)filterType;
- (id)initWithFilter:(id)arg1 orderBy:(id)arg2 ascending:(id)arg3;

@end

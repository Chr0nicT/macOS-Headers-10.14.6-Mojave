//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying>
{
    int _volumeCapabilities;
    BOOL _volumeControlAvailable;
    struct {
        unsigned int volumeCapabilities:1;
        unsigned int volumeControlAvailable:1;
    } _has;
}

@property(nonatomic) int volumeCapabilities; // @synthesize volumeCapabilities=_volumeCapabilities;
@property(nonatomic) BOOL volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasVolumeCapabilities;
@property(nonatomic) BOOL hasVolumeControlAvailable;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKSharingController.h>

#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"

@class MILocationSimulator, MSPQuery, NSSharingServicePicker, NSString, NVMainWindowController, NVPlace, NVSearchQuery, NVTrip;
@protocol NSSharingServiceDelegate><NSSharingServicePickerDelegate;

__attribute__((visibility("hidden")))
@interface NVSharingController : MKSharingController <NSSharingServicePickerDelegate, NSSharingServiceDelegate>
{
    id <NSSharingServiceDelegate><NSSharingServicePickerDelegate> _delegate;
    NVPlace *_place;
    NVSearchQuery *_query;
    NVTrip *_trip;
    NSString *_subject;
    NSSharingServicePicker *_picker;
    NVMainWindowController *_mainWindowController;
    MSPQuery *_favoriteIdentifiersFetchRequest;
    BOOL _includePushToDevices;
    BOOL _includeAddToContacts;
    BOOL _includeAddToFavorites;
    MILocationSimulator *_locationSimulator;
}

+ (void)addPlaceToContacts:(id)arg1;
+ (id)sharingControllerForMapView:(id)arg1 proposedTitle:(id)arg2;
+ (id)sharingControllerForQueryString:(id)arg1 mapView:(id)arg2 proposedTitle:(id)arg3;
+ (id)sharingControllerForTrip:(id)arg1 mapView:(id)arg2;
+ (id)sharingControllerForPlace:(id)arg1 mapView:(id)arg2;
@property(nonatomic) BOOL includeAddToFavorites; // @synthesize includeAddToFavorites=_includeAddToFavorites;
@property(nonatomic) BOOL includeAddToContacts; // @synthesize includeAddToContacts=_includeAddToContacts;
@property(nonatomic) BOOL includePushToDevices; // @synthesize includePushToDevices=_includePushToDevices;
@property(retain, nonatomic) MILocationSimulator *locationSimulator; // @synthesize locationSimulator=_locationSimulator;
@property(retain) NVMainWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)_exportVCard;
- (id)uniqueFilePathURL;
- (id)sharingService:(id)arg1 optionsForItems:(id)arg2;
- (BOOL)sharingService:(id)arg1 canShareAlternatePDFForItems:(id)arg2;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingService:(id)arg1 sharedItemsFromProposedItems:(id)arg2;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (id)airDropURL;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)removeFromBookmarks;
- (void)addToBookmarks;
- (BOOL)canRemoveFromBookmarks;
- (BOOL)canAddToBookmarks;
- (id)bookmarkObject;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)pushDevices;
- (id)initWithQueryString:(id)arg1 mapView:(id)arg2 proposedTitle:(id)arg3;
- (id)initWithTrip:(id)arg1 mapView:(id)arg2;
- (id)initWithPlace:(id)arg1 mapView:(id)arg2;
- (id)init;
- (BOOL)useGenericTitleForPlace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapPointAnnotation : NSObject <MKAnnotation, PXPlacesMapRenderable> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  coordinate;
    NSOrderedSet * geotaggables;
    long long  index;
    <PXPlacesMapRenderer> * renderer;
    <PXPlacesMapSelectionHandler> * selectionHandler;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSOrderedSet *geotaggables;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index;
@property <PXPlacesMapRenderer> *renderer;
@property <PXPlacesMapSelectionHandler> *selectionHandler;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (id)geotaggables;
- (long long)index;
- (id)renderer;
- (id)selectionHandler;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setGeotaggables:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setRenderer:(id)arg1;
- (void)setSelectionHandler:(id)arg1;

@end

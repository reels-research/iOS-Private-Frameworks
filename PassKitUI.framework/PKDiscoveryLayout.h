/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDiscoveryLayout : UICollectionViewLayout {
    NSMutableDictionary * _attributesPerIndexPath;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentSize;
    NSMutableDictionary * _headersPerIndexPath;
    double  _interimSpacing;
    double  _lineSpacing;
}

@property (nonatomic) double interimSpacing;
@property (nonatomic) double lineSpacing;

- (void).cxx_destruct;
- (void)_adjustItems:(id)arg1 withLateralMove:(double)arg2;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)init;
- (double)interimSpacing;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lineSpacing;
- (void)prepareLayout;
- (void)setInterimSpacing:(double)arg1;
- (void)setLineSpacing:(double)arg1;

@end

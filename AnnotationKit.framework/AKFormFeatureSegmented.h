/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKFormFeatureSegmented : AKFormFeature {
    AKFormFeatureLine * _baseline;
    NSArray * _characterSegmentRects;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _enclosingRegionRect;
}

@property (nonatomic, retain) AKFormFeatureLine *baseline;
@property (nonatomic, retain) NSArray *characterSegmentRects;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } enclosingRegionRect;

+ (id)segments:(id)arg1 withEnclosingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 baseline:(id)arg3 onPage:(id)arg4;

- (void).cxx_destruct;
- (id)baseline;
- (id)characterSegmentRects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })enclosingRegionRect;
- (id)initWithCharacterSegments:(id)arg1 enclosingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 baseline:(id)arg3 onPage:(id)arg4;
- (void)setBaseline:(id)arg1;
- (void)setCharacterSegmentRects:(id)arg1;
- (void)setEnclosingRegionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end

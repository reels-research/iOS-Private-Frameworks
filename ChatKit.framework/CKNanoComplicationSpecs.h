/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNanoComplicationSpecs : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _bubbleSizeCircular;
    struct CGSize { 
        double width; 
        double height; 
    }  _bubbleSizeCorner;
    struct CGSize { 
        double width; 
        double height; 
    }  _bubbleSizeCornerSmall;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSizeCircular;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSizeCorner;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSizeCornerSmall;
    double  _fontSizeCircular;
    double  _topPaddingCircular;
    double  _topPaddingCorner;
    double  _topPaddingCornerSmall;
}

@property (nonatomic) struct CGSize { double x1; double x2; } bubbleSizeCircular;
@property (nonatomic) struct CGSize { double x1; double x2; } bubbleSizeCorner;
@property (nonatomic) struct CGSize { double x1; double x2; } bubbleSizeCornerSmall;
@property (nonatomic, readonly) UIColor *bubbleTextColor;
@property (nonatomic, readonly) UIColor *bubbleTintColor;
@property (nonatomic, readonly) UIColor *canvasBackgroundColor;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSizeCircular;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSizeCorner;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSizeCornerSmall;
@property (nonatomic) double fontSizeCircular;
@property (nonatomic) double topPaddingCircular;
@property (nonatomic) double topPaddingCorner;
@property (nonatomic) double topPaddingCornerSmall;

- (struct CGSize { double x1; double x2; })bubbleSizeCircular;
- (struct CGSize { double x1; double x2; })bubbleSizeCorner;
- (struct CGSize { double x1; double x2; })bubbleSizeCornerSmall;
- (struct CGSize { double x1; double x2; })bubbleSizeForFamily:(long long)arg1;
- (struct CGSize { double x1; double x2; })bubbleSizeForFamily:(long long)arg1 andTemplate:(id)arg2;
- (id)bubbleTextColor;
- (id)bubbleTintColor;
- (id)canvasBackgroundColor;
- (struct CGSize { double x1; double x2; })canvasSizeCircular;
- (struct CGSize { double x1; double x2; })canvasSizeCorner;
- (struct CGSize { double x1; double x2; })canvasSizeCornerSmall;
- (struct CGSize { double x1; double x2; })canvasSizeForFamily:(long long)arg1;
- (struct CGSize { double x1; double x2; })canvasSizeForFamily:(long long)arg1 andTemplate:(id)arg2;
- (void)configureForCompactVariant;
- (void)configureForLuxoJuniorVariant;
- (void)configureForLuxoSeniorVariant;
- (void)configureForRegularVariant;
- (double)fontSizeCircular;
- (double)fontSizeForFamily:(long long)arg1;
- (id)initWithDevice:(id)arg1;
- (void)setBubbleSizeCircular:(struct CGSize { double x1; double x2; })arg1;
- (void)setBubbleSizeCorner:(struct CGSize { double x1; double x2; })arg1;
- (void)setBubbleSizeCornerSmall:(struct CGSize { double x1; double x2; })arg1;
- (void)setCanvasSizeCircular:(struct CGSize { double x1; double x2; })arg1;
- (void)setCanvasSizeCorner:(struct CGSize { double x1; double x2; })arg1;
- (void)setCanvasSizeCornerSmall:(struct CGSize { double x1; double x2; })arg1;
- (void)setFontSizeCircular:(double)arg1;
- (void)setTopPaddingCircular:(double)arg1;
- (void)setTopPaddingCorner:(double)arg1;
- (void)setTopPaddingCornerSmall:(double)arg1;
- (double)topPaddingCircular;
- (double)topPaddingCorner;
- (double)topPaddingCornerSmall;
- (double)topPaddingForFamily:(long long)arg1;
- (double)topPaddingForFamily:(long long)arg1 andTemplate:(id)arg2;

@end

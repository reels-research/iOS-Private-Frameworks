/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface NetTopoObjectLayer : CALayer {
    NetTopoObjectLayer * _ancestor;
    id  _associatedNode;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSizeConstraint;
    double  _change;
    NSMutableArray * _children;
    unsigned long long  _column;
    NetTopoObjectLayer * _contourThread;
    bool  _ghosted;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageCoreFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageSelectionFrame;
    bool  _isExpanded;
    BubbleTextLayer * _labelLayer;
    double  _labelPinnedHeight;
    struct CGColor { } * _labelSelectedFillColor;
    struct CGColor { } * _labelSelectedFillColor2;
    struct CGColor { } * _labelSelectedTextColor;
    NSString * _labelString;
    struct CGColor { } * _labelUnselectedFillColor;
    struct CGColor { } * _labelUnselectedTextColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _layoutOrigin;
    double  _layoutScale;
    double  _mod;
    unsigned long long  _number;
    struct CGImage { } * _objectImage;
    id  _owningView;
    NetTopoObjectLayer * _parent;
    double  _prelim;
    unsigned long long  _row;
    NSString * _saveLabel;
    NSString * _saveLable;
    BubbleTextLayer * _secondaryLabelLayer;
    struct CGColor { } * _secondaryLabelSelectedTextColor;
    NSString * _secondaryLabelString;
    struct CGColor { } * _secondaryLabelUnselectedTextColor;
    bool  _selectable;
    bool  _selected;
    struct CGColor { } * _selectionColor;
    double  _selectionCornerRadius;
    double  _selectionRectOutset;
    double  _shift;
    bool  _smallSize;
    UIImage * _statusBadgeImage;
    float  _statusLightInterval;
    unsigned int  _statusLightMode;
    unsigned int  _statusLightState;
    NSTimer * _statusLightTimer;
    UIImage * _statusLights;
    unsigned long long  _topoBadgeNumber;
    TopoNumberBadge * _topoNumberBadge;
    TopoProgressBar * _topoProgressBar;
    float  _topoProgressValue;
    int  _topoStyle;
    id  _userObject;
}

@property (nonatomic) NetTopoObjectLayer *ancestor;
@property (nonatomic, retain) id associatedNode;
@property (nonatomic) struct CGSize { double x1; double x2; } boundsSizeConstraint;
@property (nonatomic) double change;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic) unsigned long long column;
@property (nonatomic) NetTopoObjectLayer *contourThread;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (getter=isGhosted, nonatomic) bool ghosted;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) double labelPinnedHeight;
@property (nonatomic) struct CGPoint { double x1; double x2; } layoutOrigin;
@property (nonatomic) double layoutScale;
@property (nonatomic) double mod;
@property (nonatomic) unsigned long long number;
@property (nonatomic, readonly) unsigned long long numberOfChildren;
@property (nonatomic, retain) struct CGImage { }*objectImage;
@property (nonatomic) id owningView;
@property (nonatomic, retain) NetTopoObjectLayer *parent;
@property (nonatomic, readonly) NetTopoObjectLayer *parentDevice;
@property (nonatomic) double prelim;
@property (nonatomic) unsigned long long row;
@property (nonatomic, retain) NSString *saveLabel;
@property (nonatomic, retain) NSString *secondaryLabel;
@property (getter=isSelectable, nonatomic) bool selectable;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) double shift;
@property (nonatomic) bool smallSize;
@property (nonatomic, retain) UIImage *statusBadgeImage;
@property (nonatomic) unsigned int statusLightMode;
@property (nonatomic) unsigned long long topoBadgeNumber;
@property (nonatomic) float topoProgressValue;
@property (nonatomic, retain) id userObject;

+ (bool)needsDisplayForKey:(id)arg1;

- (void)addChild:(id)arg1;
- (id)ancestor;
- (id)associatedNode;
- (struct CGSize { double x1; double x2; })boundsSizeConstraint;
- (double)change;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)children;
- (unsigned long long)column;
- (id)contourThread;
- (void)dealloc;
- (void)deallocStatusImages;
- (id)debugDescription;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned long long)arg3;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)firstChild;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })getConnectionAttachmentLocations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getFrameContainingAllSublayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getUserInteractionBounds;
- (id)init;
- (void)initNetTopoObjectLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isExpanded;
- (bool)isGhosted;
- (bool)isSelectable;
- (bool)isSelected;
- (id)label;
- (double)labelPinnedHeight;
- (id)lastChild;
- (struct CGPoint { double x1; double x2; })layoutOrigin;
- (double)layoutScale;
- (void)layoutSublayers;
- (void)loadStatusImagesForScale:(double)arg1;
- (double)mod;
- (unsigned long long)number;
- (unsigned long long)numberOfChildren;
- (struct CGImage { }*)objectImage;
- (id)owningView;
- (id)parent;
- (id)parentDevice;
- (void)pickCorrectImagesForContentsScale:(double)arg1;
- (double)prelim;
- (void)removeChild:(id)arg1;
- (unsigned long long)row;
- (id)saveLabel;
- (id)secondaryLabel;
- (void)setAncestor:(id)arg1;
- (void)setAssociatedNode:(id)arg1;
- (void)setBoundsSizeConstraint:(struct CGSize { double x1; double x2; })arg1;
- (void)setChange:(double)arg1;
- (void)setChildren:(id)arg1;
- (void)setColumn:(unsigned long long)arg1;
- (void)setContourThread:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setGhosted:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelPinnedHeight:(double)arg1;
- (void)setLayoutOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayoutScale:(double)arg1;
- (void)setMod:(double)arg1;
- (void)setNumber:(unsigned long long)arg1;
- (void)setObjectImage:(struct CGImage { }*)arg1;
- (void)setOwningView:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPrelim:(double)arg1;
- (void)setRow:(unsigned long long)arg1;
- (void)setSaveLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShift:(double)arg1;
- (void)setSmallSize:(bool)arg1;
- (void)setStatusBadgeImage:(id)arg1;
- (void)setStatusBadgeImagePriv:(id)arg1;
- (void)setStatusLightMode:(unsigned int)arg1;
- (void)setStatusLightStateFromMode;
- (void)setTopoBadgeNumber:(unsigned long long)arg1;
- (void)setTopoProgressValue:(float)arg1;
- (void)setUserObject:(id)arg1;
- (double)shift;
- (bool)smallSize;
- (id)statusBadgeImage;
- (unsigned int)statusLightMode;
- (void)statusLightUpdateTimer:(id)arg1;
- (unsigned long long)topoBadgeNumber;
- (float)topoProgressValue;
- (id)userObject;

@end

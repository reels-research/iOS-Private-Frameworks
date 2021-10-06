/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTAvatarPose : NSObject {
    double  _bakedAnimationBlendFactor;
    struct SCNVector4 { 
        float x; 
        float y; 
        float z; 
        float w; 
    }  _neckOrientation;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _neckPosition;
    NSMutableDictionary * _weights;
}

@property (nonatomic) double bakedAnimationBlendFactor;
@property (nonatomic) struct SCNVector4 { float x1; float x2; float x3; float x4; } neckOrientation;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } neckPosition;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)friendlyPose;
+ (id)neutralPose;

- (void).cxx_destruct;
- (double)bakedAnimationBlendFactor;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })neckOrientation;
- (struct SCNVector3 { float x1; float x2; float x3; })neckPosition;
- (void)setBakedAnimationBlendFactor:(double)arg1;
- (void)setNeckOrientation:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)setNeckPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setWeight:(double)arg1 forBlendShapeNamed:(id)arg2;
- (double)weightForBlendShapeNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (id)_avtui_identifier;

@end

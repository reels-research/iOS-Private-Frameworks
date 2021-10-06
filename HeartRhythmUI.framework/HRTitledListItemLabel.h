/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRTitledListItemLabel : UIView {
    UILabel * _bodyLabel;
    HRListItemLabel * _listItemLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) HRListItemLabel *listItemLabel;

- (void).cxx_destruct;
- (id)_bodyLabelFont;
- (double)_bodyLabelToBottom;
- (double)_listItemLabelToBody;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)bodyLabel;
- (id)initWithView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 title:(id)arg3 body:(id)arg4;
- (id)listItemLabel;
- (void)setBodyLabel:(id)arg1;
- (void)setListItemLabel:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

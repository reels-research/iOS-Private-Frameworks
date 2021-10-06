/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKLineStylesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    AKController * _controller;
    NSArray * _lineWidthTags;
    UITableView * _tableView;
}

@property (nonatomic) AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *lineWidthTags;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)generateLineImageForTag:(long long)arg1 selected:(bool)arg2;

- (void).cxx_destruct;
- (id)controller;
- (long long)currentLineWidthTag;
- (id)indexPathForLineWidthTag:(long long)arg1;
- (id)initWithController:(id)arg1;
- (id)lineWidthTags;
- (void)selectRowForTag:(long long)arg1;
- (void)selectedLineWidthChanged:(long long)arg1;
- (void)setController:(id)arg1;
- (void)setLineWidthTags:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/AnnotationKit.axbundle/AnnotationKit

+ (Class)safeCategoryBaseClass;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end

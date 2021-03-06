/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKContiguousContainerView, GKTextView, NSArray, NSLayoutConstraint, NSString, UIScrollView, UIView;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate> {
    UIScrollView *_backgroundView;
    NSArray *_composeHeaderFields;
    NSLayoutConstraint *_contentHeightConstraint;
    NSLayoutConstraint *_contentLeadingConstraint;
    UIView *_contentView;
    GKContiguousContainerView *_headerFieldContainer;
    UIView *_intendedFirstResponder;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastKnownKeyboardFrame;
    GKTextView *_messageField;
    NSLayoutConstraint *_messageFieldTrailingConstraint;
    float _scrollContentInsetAdjustY;
}

@property(retain) UIScrollView * backgroundView;
@property(retain) NSArray * composeHeaderFields;
@property(retain) NSLayoutConstraint * contentHeightConstraint;
@property(retain) NSLayoutConstraint * contentLeadingConstraint;
@property(retain) UIView * contentView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) GKContiguousContainerView * headerFieldContainer;
@property UIView * intendedFirstResponder;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } lastKnownKeyboardFrame;
@property(retain) GKTextView * messageField;
@property(retain) NSLayoutConstraint * messageFieldTrailingConstraint;
@property float scrollContentInsetAdjustY;
@property(readonly) Class superclass;

- (void)_adjustContentInsetForShowingKeyboard:(BOOL)arg1;
- (BOOL)_gkWantsCustomRightBarButtonItemInViewService;
- (void)_scrollSelectedTextToVisible;
- (id)backgroundView;
- (id)composeHeaderFields;
- (id)contentHeightConstraint;
- (id)contentLeadingConstraint;
- (id)contentView;
- (void)dealloc;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)headerFieldContainer;
- (id)init;
- (id)intendedFirstResponder;
- (void)keyboardWillHideShow:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lastKnownKeyboardFrame;
- (void)loadView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })margins;
- (id)messageField;
- (void)messageFieldTextDidChange;
- (id)messageFieldTrailingConstraint;
- (float)scrollContentInsetAdjustY;
- (void)setBackgroundView:(id)arg1;
- (void)setComposeHeaderFields:(id)arg1;
- (void)setContentHeightConstraint:(id)arg1;
- (void)setContentLeadingConstraint:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setHeaderFieldContainer:(id)arg1;
- (void)setIntendedFirstResponder:(id)arg1;
- (void)setLastKnownKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMessageField:(id)arg1;
- (void)setMessageFieldText:(id)arg1;
- (void)setMessageFieldTrailingConstraint:(id)arg1;
- (void)setScrollContentInsetAdjustY:(float)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewMetricsForContainerView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

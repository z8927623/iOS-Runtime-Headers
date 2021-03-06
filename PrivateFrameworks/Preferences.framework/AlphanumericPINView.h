/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class AlphanumericPINTableViewCell, NSString, UITableView, UITextField;

@interface AlphanumericPINView : PINView <UITableViewDataSource> {
    AlphanumericPINTableViewCell *_cell;
    UITextField *_passcodeField;
    UITableView *_table;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)appendString:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)deleteLastCharacter;
- (void)hidePasscodeField:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFirstResponder;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)layoutSubviews;
- (void)okButtonPressed:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)setBlocked:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTextFieldKeyboardAppearance:(int)arg1;
- (void)setTextFieldKeyboardType:(int)arg1;
- (void)showError:(id)arg1 animate:(BOOL)arg2;
- (id)stringValue;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIAlertView, NSString, UIPrintingProgressViewController;



@interface UIPrintingProgress : NSObject 
{
    NSString *_printerName;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancelHandler;

    double _startTime;
    double _displayTime;
    NSInteger _printInfoState;
    UIAlertView *_alert;
    UIPrintingProgressViewController *_viewController;
    BOOL _donePrinting;
}


- (BOOL)progressVisible;
- (void)showProgress:(id)arg1 immediately:(BOOL)arg2;
- (void)hideProgressAnimated:(BOOL)arg1;
- (void)progressCancel;
- (void)didEnterBackground;
- (id)initWithPrinterName:(id)arg1 cancelHandler:(id)arg2;
- (void)setPrintInfoState:(NSInteger)arg1;
- (void)setPage:(NSInteger)arg1 ofPage:(NSInteger)arg2;
- (double)nextPrintDelay;
- (void)endProgress;
- (void)didPresentAlertView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVRoutingViewController, NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate> {
    int _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _mirroringIncluded;
    MPAVRoutingViewController *_routingViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_tableViewController;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithType:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1 includeMirroring:(BOOL)arg2;
- (id)routingController;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)routingViewControllerDidUpdateContents:(id)arg1;

@end

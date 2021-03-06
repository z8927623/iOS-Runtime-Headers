/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <AFUISpeechSynthesisElementDelegate>, NSString, VSSpeechRequest;

@interface AFUISpeechSynthesisElement : NSObject {
    NSString *_animationIdentifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    <AFUISpeechSynthesisElementDelegate> *_delegate;
    BOOL _durationHasElapsed;
    BOOL _eligibleForSynthesis;
    BOOL _isPhonetic;
    BOOL _preprationBlockCompleted;
    BOOL _provisional;
    VSSpeechRequest *_speechRequest;
    int _synthesisResult;
    NSString *_text;
}

@property(readonly) NSString * animationIdentifier;
@property(getter=_completion,readonly) id completion;
@property <AFUISpeechSynthesisElementDelegate> * delegate;
@property(setter=_setDurationHasElapsed:) BOOL durationHasElapsed;
@property(getter=isEligibleForSynthesis) BOOL eligibleForSynthesis;
@property BOOL isPhonetic;
@property(setter=_setPreparationBlockCompleted:) BOOL preprationBlockCompleted;
@property(getter=isProvisional,readonly) BOOL provisional;
@property(retain) VSSpeechRequest * speechRequest;
@property int synthesisResult;
@property(copy) NSString * text;

- (void).cxx_destruct;
- (id)_completion;
- (void)_setDurationHasElapsed:(BOOL)arg1;
- (void)_setEligibleForSynthesis:(BOOL)arg1;
- (void)_setPreparationBlockCompleted:(BOOL)arg1;
- (void)_setText:(id)arg1;
- (void)_updateSynthesisEligibility;
- (id)animationIdentifier;
- (id)delegate;
- (id)description;
- (BOOL)durationHasElapsed;
- (void)executeCompletion;
- (id)init;
- (id)initWithText:(id)arg1 provisional:(BOOL)arg2 eligibleAfterDuration:(double)arg3 preparation:(id)arg4 completion:(id)arg5 animationIdentifier:(id)arg6;
- (BOOL)isEligibleForSynthesis;
- (BOOL)isPhonetic;
- (BOOL)isProvisional;
- (BOOL)preprationBlockCompleted;
- (void)setDelegate:(id)arg1;
- (void)setIsPhonetic:(BOOL)arg1;
- (void)setSpeechRequest:(id)arg1;
- (void)setSynthesisResult:(int)arg1;
- (id)speechRequest;
- (int)synthesisResult;
- (id)text;

@end

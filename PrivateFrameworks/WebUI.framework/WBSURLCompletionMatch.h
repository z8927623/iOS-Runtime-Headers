/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSString;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem> {
    int _matchLocation;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) int matchLocation;
@property(readonly) NSString * parsecDomainIdentifier;
@property(readonly) Class superclass;
@property(getter=isTopHit,readonly) BOOL topHit;

+ (int)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (int)matchLocationForString:(id)arg1 inURLString:(id)arg2;

- (id)initWithMatchLocation:(int)arg1;
- (BOOL)isTopHit;
- (int)matchLocation;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (id)title;
- (id)userVisibleURLString;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIClientContext, SKUILayoutCache, SKUIResourceLoader, UIViewController;

@interface SKUINavigationBarContext : NSObject {
    SKUIClientContext *_clientContext;
    float _maximumNavigationBarWidth;
    NSOperationQueue *_operationQueue;
    UIViewController *_parentViewController;
    SKUIResourceLoader *_resourceLoader;
    SKUILayoutCache *_textLayoutCache;
}

@property(retain) SKUIClientContext * clientContext;
@property float maximumNavigationBarWidth;
@property(retain) NSOperationQueue * operationQueue;
@property UIViewController * parentViewController;
@property(retain) SKUIResourceLoader * resourceLoader;
@property(retain) SKUILayoutCache * textLayoutCache;

- (void).cxx_destruct;
- (id)clientContext;
- (float)maximumNavigationBarWidth;
- (id)operationQueue;
- (id)parentViewController;
- (id)resourceLoader;
- (void)setClientContext:(id)arg1;
- (void)setMaximumNavigationBarWidth:(float)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (id)textLayoutCache;

@end

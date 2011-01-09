/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUStorePageProtocol, SUPageSectionGroup, SUItem, NSString, SUItemList;



@interface SUStructuredPage : NSObject <NSCopying>
{
    BOOL _didShowDialog;
    NSInteger _displayStyle;
    SUItem *_item;
    SUItemList *_itemList;
    SUStorePageProtocol *_protocol;
    SUPageSectionGroup *_sectionsGroup;
    NSString *_title;
    NSInteger _type;
    BOOL _wantsIndexBar;
}

@property(readonly) BOOL hasDisplayableContent;
@property(readonly) BOOL wantsIndexBar;
@property NSInteger type;
@property(retain) NSString *title;
@property(retain) SUPageSectionGroup *sectionsGroup;
@property(retain) SUStorePageProtocol *protocol;
@property(retain) SUItemList *itemList;
@property(retain) SUItem *item;
@property(readonly) NSInteger displayStyle;
@property(readonly) BOOL didShowDialog;

+ (NSInteger)_pageTypeForString:(id)arg1;
+ (NSInteger)pageTypeForStorePageDictionary:(id)arg1;

- (void)setItem:(id)arg1;
- (id)_copyItemFromDictionary:(id)arg1;
- (NSInteger)_displayStyleForString:(id)arg1;
- (void)_parseItemsFromDictionary:(id)arg1;
- (void)_parseProtocolFromDictionary:(id)arg1;
- (void)_parseTemplateParametersFromDictionary:(id)arg1;
- (BOOL)wantsIndexBar;
- (id)sectionsGroup;
- (void)setSectionsGroup:(id)arg1;
- (void)setProtocol:(id)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;
- (NSInteger)displayStyle;
- (BOOL)didShowDialog;
- (BOOL)hasDisplayableContent;
- (BOOL)loadFromDictionary:(id)arg1;
- (id)protocol;
- (NSInteger)type;
- (id)item;
- (id)title;
- (void)setType:(NSInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MIPMultiverseIdentifier, MIPSmartPlaylistInfo, NSMutableArray, NSString;

@interface MIPPlaylist : PBCodable <NSCopying> {
    NSMutableArray *_childIdentifiers;
    NSString *_cloudGlobalId;
    int _distinguishedKind;
    MIPMultiverseIdentifier *_geniusSeedTrackIdentifier;
    struct { 
        unsigned int storeId : 1; 
        unsigned int distinguishedKind : 1; 
        unsigned int sortType : 1; 
        unsigned int type : 1; 
        unsigned int hidden : 1; 
        unsigned int reversedSorting : 1; 
    } _has;
    BOOL _hidden;
    NSMutableArray *_items;
    NSString *_name;
    MIPMultiverseIdentifier *_parentIdentifier;
    BOOL _reversedSorting;
    MIPSmartPlaylistInfo *_smartPlaylistInfo;
    int _sortType;
    long long _storeId;
    int _type;
}

@property(retain) NSMutableArray * childIdentifiers;
@property(retain) NSString * cloudGlobalId;
@property int distinguishedKind;
@property(retain) MIPMultiverseIdentifier * geniusSeedTrackIdentifier;
@property(readonly) BOOL hasCloudGlobalId;
@property BOOL hasDistinguishedKind;
@property(readonly) BOOL hasGeniusSeedTrackIdentifier;
@property BOOL hasHidden;
@property(readonly) BOOL hasName;
@property(readonly) BOOL hasParentIdentifier;
@property BOOL hasReversedSorting;
@property(readonly) BOOL hasSmartPlaylistInfo;
@property BOOL hasSortType;
@property BOOL hasStoreId;
@property BOOL hasType;
@property BOOL hidden;
@property(retain) NSMutableArray * items;
@property(retain) NSString * name;
@property(retain) MIPMultiverseIdentifier * parentIdentifier;
@property BOOL reversedSorting;
@property(retain) MIPSmartPlaylistInfo * smartPlaylistInfo;
@property int sortType;
@property long long storeId;
@property int type;

- (void).cxx_destruct;
- (void)addChildIdentifiers:(id)arg1;
- (void)addItems:(id)arg1;
- (id)childIdentifiers;
- (id)childIdentifiersAtIndex:(unsigned int)arg1;
- (unsigned int)childIdentifiersCount;
- (void)clearChildIdentifiers;
- (void)clearItems;
- (id)cloudGlobalId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)distinguishedKind;
- (id)geniusSeedTrackIdentifier;
- (BOOL)hasCloudGlobalId;
- (BOOL)hasDistinguishedKind;
- (BOOL)hasGeniusSeedTrackIdentifier;
- (BOOL)hasHidden;
- (BOOL)hasName;
- (BOOL)hasParentIdentifier;
- (BOOL)hasReversedSorting;
- (BOOL)hasSmartPlaylistInfo;
- (BOOL)hasSortType;
- (BOOL)hasStoreId;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)hidden;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned int)arg1;
- (unsigned int)itemsCount;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)parentIdentifier;
- (BOOL)readFrom:(id)arg1;
- (BOOL)reversedSorting;
- (void)setChildIdentifiers:(id)arg1;
- (void)setCloudGlobalId:(id)arg1;
- (void)setDistinguishedKind:(int)arg1;
- (void)setGeniusSeedTrackIdentifier:(id)arg1;
- (void)setHasDistinguishedKind:(BOOL)arg1;
- (void)setHasHidden:(BOOL)arg1;
- (void)setHasReversedSorting:(BOOL)arg1;
- (void)setHasSortType:(BOOL)arg1;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setItems:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setReversedSorting:(BOOL)arg1;
- (void)setSmartPlaylistInfo:(id)arg1;
- (void)setSortType:(int)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setType:(int)arg1;
- (id)smartPlaylistInfo;
- (int)sortType;
- (long long)storeId;
- (int)type;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, asn1Token;

@interface asn1ReceiptToken : NSObject {
    asn1Token *mContentToken;
    unsigned int mType;
    unsigned int mTypeVersion;
}

@property(readonly) asn1Token * contentToken;
@property(readonly) unsigned long long integerValue;
@property(readonly) NSString * stringValue;
@property(readonly) unsigned int type;
@property(readonly) unsigned int typeVersion;

+ (id)readFromBuffer:(const char *)arg1;

- (id)_initWithType:(unsigned int)arg1 typeVersion:(unsigned int)arg2 contentToken:(id)arg3;
- (id)contentToken;
- (void)dealloc;
- (id)description;
- (unsigned long long)integerValue;
- (id)stringValue;
- (unsigned int)type;
- (unsigned int)typeVersion;

@end

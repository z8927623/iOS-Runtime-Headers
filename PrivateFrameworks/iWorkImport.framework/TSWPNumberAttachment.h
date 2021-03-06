/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPNumberAttachment : TSWPTextualAttachment {
    int _numberFormat;
    NSString *_stringValue;
}

@property int numberFormat;
@property(copy) NSString * stringValue;

+ (id)newObjectForUnarchiver:(id)arg1;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (const struct NumberAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct TextualAttachmentArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; unsigned int x7; }*)numberAttachmentArchiveFromUnarchiver:(id)arg1;
- (int)numberFormat;
- (void)saveToArchiver:(id)arg1;
- (void)setNumberFormat:(int)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringEquivalent;
- (id)stringEquivalentWithLayoutParent:(id)arg1;
- (id)stringValue;
- (id)stringWithNumber:(unsigned int)arg1;
- (const struct TextualAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; int x6; }*)textualAttachmentArchiveFromUnarchiver:(id)arg1;

@end

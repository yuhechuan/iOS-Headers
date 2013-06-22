/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DeliveryAccount, MailAccount, Message, MutableMessageHeaders, NSArray, NSDictionary, NSString, PlainTextDocument;

@interface MFMailDelivery : NSObject
{
    id _delegate;
    Message *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MutableMessageHeaders *_headers;
    NSDictionary *_compositionSpecification;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    NSString *_htmlString;
    PlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    NSArray *_charsets;
    unsigned int _threaded:1;
    unsigned int _status:4;
    unsigned int _useCellDataOnly:1;
    unsigned int __UNUSED__:24;
}

+ (BOOL)deliverMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
+ (id)newWithMessage:(id)arg1;
@property(retain, nonatomic) NSDictionary *compositionSpecification; // @synthesize compositionSpecification=_compositionSpecification;
- (void)archive;
- (void)setCellDataOnly:(BOOL)arg1;
- (int)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (int)deliverSynchronously;
- (void)deliverAsynchronously;
- (BOOL)shouldEncryptMessage;
- (BOOL)shouldSignMessage;
- (id)headersForDelivery;
- (id)originalHeaders;
- (int)deliveryStatus;
- (void)setAccount:(id)arg1;
- (id)account;
- (void)setArchiveAccount:(id)arg1;
- (id)archiveAccount;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)message;
- (id)newMessageWriter;
- (void)dealloc;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)initWithMessage:(id)arg1;

@end

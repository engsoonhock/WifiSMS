/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIButton, <CKTranscriptButtonViewDelegate>;

@interface CKTranscriptToolbarView : UIView <CKTranscriptButtonView> {
    <CKTranscriptButtonViewDelegate> *_transcriptButtonDelegate;
    BOOL _cancelButtonVisible;
    BOOL _hasContact;
    BOOL _isGroupMessage;
    UIButton *_editButton;
    UIButton *_contactButton;
    UIButton *_cancelButton;
}

@property(readonly) BOOL isGroupMessage;
@property BOOL hasContact;
@property(getter=isCancelButtonVisible) BOOL cancelButtonVisible;
@property <CKTranscriptButtonViewDelegate> * transcriptButtonDelegate;


- (void)_buttonClicked:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (BOOL)isCancelButtonVisible;
- (BOOL)hasContact;
- (id)transcriptButtonDelegate;
- (BOOL)isGroupMessage;
- (void)setTranscriptButtonDelegate:(id)arg1;
- (id)initAsGroupMessage:(BOOL)arg1 hasMessages:(BOOL)arg2;
- (void)setCancelButtonVisible:(BOOL)arg1;
- (void)setHasContact:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForButton:(short)arg1;
- (void)dealloc;

@end

/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebScriptCallFrame, WebScriptObject;



@interface WebScriptCallFramePrivate : NSObject 
{
    WebScriptObject *globalObject;
    WebScriptCallFrame *caller;
    struct DebuggerCallFrame { struct ExecState {} *x1; struct JSValuePtr { 
            struct JSCell {} *m_ptr; 
        } x2; } *debuggerCallFrame;

  /* Error parsing encoded ivar type info: ^{WebScriptDebugger=^^?{HashSet<JSC::JSGlobalObject*,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> >="m_impl"{HashTable<JSC::JSGlobalObject*,JSC::JSGlobalObject*,WTF::IdentityExtractor<JSC::JSGlobalObject*>,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> >="m_table"^^{JSGlobalObject}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}B{RetainPtr<WebScriptCallFrame>="m_ptr"@"WebScriptCallFrame"}{ProtectedPtr<JSC::JSGlobalObject>="m_ptr"^{JSGlobalObject}}{RetainPtr<WebScriptCallFrame>="m_ptr"@"WebScriptCallFrame"}} */
    struct WebScriptDebugger { int (**x1)(); struct HashSet<JSC::JSGlobalObject*,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> > { 
            struct HashTable<JSC::JSGlobalObject*,JSC::JSGlobalObject*,WTF::IdentityExtractor<JSC::JSGlobalObject*>,WTF::PtrHash<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*>,WTF::HashTraits<JSC::JSGlobalObject*> > { 
                struct JSGlobalObject {} **m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RetainPtr<WebScriptCallFrame> { 
            WebScriptCallFrame *m_ptr; 
        } x4; struct ProtectedPtr<JSC::JSGlobalObject> { 
            struct JSGlobalObject {} *m_ptr; 
        } x5; struct RetainPtr<WebScriptCallFrame> { 
            WebScriptCallFrame *m_ptr; 
        } x6; } *debugger;

}


- (void)dealloc;

@end

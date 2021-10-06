/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface _PFMulticasterReceiverList : NSObject {
    unsigned long long  _count;
    NSMutableArray * _extraReceivers;
    /* Warning: unhandled array encoding: '[12@]' */ id  _inlineReceivers;
    SEL  _selector;
}

@property (readonly) unsigned long long count;
@property (readonly) SEL selector;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumerateReceiversWithBlock:(id /* block */)arg1;
- (bool)hasReceivers;
- (unsigned long long)hash;
- (id)initWithSelector:(SEL)arg1 receivers:(id)arg2;
- (id)initWithSelector:(SEL)arg1 receiversHash:(id)arg2;
- (bool)isEqual:(id)arg1;
- (SEL)selector;

@end

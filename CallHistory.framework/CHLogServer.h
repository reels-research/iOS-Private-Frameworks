/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHLogServer : CHSynchronizable {
    struct unordered_map<const char *, os_log_s *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, os_log_s *> > > { 
        struct __hash_table<std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::hash<const char *>, true>, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::equal_to<const char *>, true>, std::__1::allocator<std::__1::__hash_value_type<const char *, os_log_s *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::hash<const char *>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::equal_to<const char *>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  fLogHandles;
}

+ (id)instance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createLogHandleForDomainSync:(const char *)arg1;
- (id)init;
- (struct os_log_s { }*)logHandleForDomain:(const char *)arg1;
- (struct os_log_s { }*)logHandleForDomainSync:(const char *)arg1;

@end

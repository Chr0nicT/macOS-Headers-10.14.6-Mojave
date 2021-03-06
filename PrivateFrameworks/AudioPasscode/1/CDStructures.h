//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class AUAudioUnitBus, AVAudioPCMBuffer;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct APCDecoderBase;

struct APCEncoderBase;

struct AudioBufferList;

struct AudioComponentDescription {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct BufferedInputBus {
    AUAudioUnitBus *bus;
    unsigned int maxFrames;
    AVAudioPCMBuffer *pcmBuffer;
    struct AudioBufferList *originalAudioBufferList;
    struct AudioBufferList *mutableAudioBufferList;
};

struct CABufferList;

struct CAExtAudioFile {
    CDUnknownFunctionPointerType *_vptr$CAExtAudioFile;
    struct OpaqueExtAudioFile *mExtAudioFile;
};

struct DecodedDataMessage;

struct EOFReachedMessage;

struct NSData {
    Class _field1;
};

struct OpaqueExtAudioFile;

struct RealtimeMessenger;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any>>> {
    struct __tree<std::__1::__value_type<unsigned int, apc::Any>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, apc::Any>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, apc::Any>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct unique_ptr<APCDecoderBase, std::__1::default_delete<APCDecoderBase>> {
    struct __compressed_pair<APCDecoderBase *, std::__1::default_delete<APCDecoderBase>> {
        struct APCDecoderBase *__value_;
    } __ptr_;
};

struct unique_ptr<APCEncoderBase, std::__1::default_delete<APCEncoderBase>> {
    struct __compressed_pair<APCEncoderBase *, std::__1::default_delete<APCEncoderBase>> {
        struct APCEncoderBase *__value_;
    } __ptr_;
};

struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList>> {
    struct __compressed_pair<CABufferList *, std::__1::default_delete<CABufferList>> {
        struct CABufferList *__value_;
    } __ptr_;
};

struct unique_ptr<EOFReachedMessage, std::__1::default_delete<EOFReachedMessage>> {
    struct __compressed_pair<EOFReachedMessage *, std::__1::default_delete<EOFReachedMessage>> {
        struct EOFReachedMessage *__value_;
    } __ptr_;
};

struct unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger>> {
    struct __compressed_pair<RealtimeMessenger *, std::__1::default_delete<RealtimeMessenger>> {
        struct RealtimeMessenger *__value_;
    } __ptr_;
};

struct vector<DecodedDataMessage, std::__1::allocator<DecodedDataMessage>> {
    struct DecodedDataMessage *__begin_;
    struct DecodedDataMessage *__end_;
    struct __compressed_pair<DecodedDataMessage *, std::__1::allocator<DecodedDataMessage>> {
        struct DecodedDataMessage *__value_;
    } __end_cap_;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any>>> {
    struct __tree<std::__1::__value_type<unsigned int, apc::Any>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, apc::Any>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, apc::Any>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_fc0e2ca7;

typedef struct unique_ptr<APCDecoderBase, std::__1::default_delete<APCDecoderBase>> {
    struct __compressed_pair<APCDecoderBase *, std::__1::default_delete<APCDecoderBase>> {
        struct APCDecoderBase *__value_;
    } __ptr_;
} unique_ptr_36d0a635;

typedef struct unique_ptr<APCEncoderBase, std::__1::default_delete<APCEncoderBase>> {
    struct __compressed_pair<APCEncoderBase *, std::__1::default_delete<APCEncoderBase>> {
        struct APCEncoderBase *__value_;
    } __ptr_;
} unique_ptr_5bd60e54;


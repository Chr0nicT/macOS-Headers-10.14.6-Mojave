//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/MPSCNNConvolutionDataSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EspressoConvolutionWeightsForMPS : NSObject <MPSCNNConvolutionDataSource>
{
    struct convolution_uniforms params;
    struct shared_ptr<Espresso::blob<unsigned char, 4>> quantized_weights_blob;
    shared_ptr_acd4b298 weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 4>> weights_f16_blob;
    shared_ptr_0954c506 biases_blob;
    struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1>> quantization_ranges;
    shared_ptr_0954c506 quantization_lut;
    shared_ptr_0954c506 scale_factor_batch_norm;
    unsigned int data_type;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)label;
- (BOOL)ready;
- (float *)lookupTableForUInt8Kernel;
-     // Error parsing type: ^16@0:8, name: rangesForUInt8Kernel
- (void)purge;
- (float *)biasTerms;
- (void *)weights;
- (BOOL)load;
- (id)descriptor;
- (unsigned int)dataType;
- (id)initWithParams:(struct convolution_uniforms)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

// FIXME: your file license if you have one

#pragma once

#include <vendor/styxproject/testhal/1.0/ITesthw.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor::styxproject::testhal::implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Testhw : public V1_0::ITesthw {
    // Methods from ::vendor::styxproject::testhal::V1_0::ITesthw follow.
    Return<int32_t> testfn(int32_t valIn) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" ITesthw* HIDL_FETCH_ITesthw(const char* name);

}  // namespace vendor::styxproject::testhal::implementation

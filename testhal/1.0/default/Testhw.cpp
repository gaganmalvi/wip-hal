// FIXME: your file license if you have one

#include "Testhw.h"

namespace vendor::styxproject::testhal::implementation {

// Methods from ::vendor::styxproject::testhal::V1_0::ITesthw follow.
Return<int32_t> Testhw::testfn(int32_t valIn) {
    // TODO implement
    return valIn+1000;
}

Testhw *Testhw::getInstance(void) {
    return new Testhw();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//ITesthw* HIDL_FETCH_ITesthw(const char* /* name */) {
    //return new Testhw();
//}
//
}  // namespace vendor::styxproject::testhal::implementation

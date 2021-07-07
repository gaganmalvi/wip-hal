#define LOG_TAG "android.hardware.graphics.allocator@2.0-service"
#include <vendor/styxproject/testhal/1.0/ITesthw.h>
#include <hidl/LegacySupport.h>
#include "Testhw.h"

using vendor::styxproject::testhal::V1_0::ITesthw;
using vendor::styxproject::testhal::implementation::Testhw;
using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;
using android::sp;

int main() {
	int res;
	android::sp<ITesthw> serv = Testhw::getInstance();
	ALOGE("testhal: Service main called");
	configureRpcThreadpool(1, true);
	if (serv != nullptr) {
		res = serv->registerAsService();
		if (res != 0) {
			ALOGE("testhal: Failed to register instance, nullptr, aborting!");
		}
	} else {
		ALOGE("testhal: Cannot create instance of TestHAL, nullptr, aborting!");
	}
	joinRpcThreadpool();
	return 0;
}

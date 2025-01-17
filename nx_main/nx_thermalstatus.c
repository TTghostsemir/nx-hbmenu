#include "../common/common.h"

bool thermalstatusInit(void) {
    return R_SUCCEEDED(tsInitialize());
}

void thermalstatusExit(void) {
    tsExit();
}

bool thermalstatusGetDetails(s32 *temperature) {
    return R_SUCCEEDED(tsGetTemperature(TsLocation_Internal, temperature));
}


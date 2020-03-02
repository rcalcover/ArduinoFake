#include "ArduinoFake.h"
#include "SPIFake.h"

void SPIClass::begin () {
    return ArduinoFakeInstance(SPIClass, this)->begin();
};

void SPIClass::beginTransaction (SPISettings settings) {
    return ArduinoFakeInstance(SPIClass, this)->beginTransaction(settings);
};

uint8_t SPIClass::transfer (uint8_t data) {
    return ArduinoFakeInstance(SPIClass, this)->transfer(data);
};

void SPIClass::endTransaction (void) {
    return ArduinoFakeInstance(SPIClass, this)->endTransaction();
};
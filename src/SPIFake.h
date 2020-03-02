#pragma once

#include "ArduinoFake.h"
#include "FunctionFake.h"
#include "arduino/SPI.h"

struct SPIClassFake
{
    virtual void begin() = 0;
    virtual void beginTransaction(SPISettings settings) = 0;
    virtual uint8_t transfer(uint8_t data) = 0;
    virtual void endTransaction(void) = 0;
};

class SPIClassFakeProxy : public SPIClass
{
    private:
        SPIClassFake *spiClassFake;

    public:
        SPIClassFakeProxy(SPIClassFake *fake)
        {
            spiClassFake = fake;
        }

        SPIClassFake *getSPIClassFake()
        {
            return spiClassFake;
        }
};

#include "ch32v203.h"
#include <cstdio>
using namespace cppreg;

int main(void)
{
    Clock::init(1);
    // enable GPIOB
    RCC::APB2PCENR::IOPBEN::write<1>();
    // set GPIOC[0,1] as output
    GPIOB::CFGLR::merge_write<GPIOB::CFGLR::MODE0, GPIO::OUT_10Mhz_PP>()
                        .with<GPIOB::CFGLR::MODE1, GPIO::OUT_10Mhz_PP>().done();
    uint32_t time = Clock::getSystick();
    while (true)
    {
        GPIOB::BSHR::merge_write<GPIOB::BSHR::BS0, 1>().with<GPIOB::BSHR::BR1, 1>().done();;
        Clock::delayUntil(&time, Clock::msToTicks(500));
        GPIOB::BSHR::merge_write<GPIOB::BSHR::BR0, 1>().with<GPIOB::BSHR::BS1, 1>().done();;
        Clock::delayUntil(&time, Clock::msToTicks(500));
    }
}
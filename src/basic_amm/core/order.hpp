#pragma once
#include <chrono>

namespace basic_amm
{
    class order
    {
    protected:
        std::chrono::system_clock::time_point timestamp = std::chrono::system_clock::now();
        double price;
        double quantity;

    public:
    };
}
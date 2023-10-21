#pragma once

#include <vector>
#include "book.hpp"
#include "contract.hpp"
#include "spot.hpp"
#include "cashflow.hpp"

namespace basic_amm
{
    class portfolio : public book
    {
    private:
        std::vector<contract> positions;
        float delta;

    public:
        std::vector<contract> get_positions() { return positions; };
        std::vector<spot> get_spots();
        std::vector<cashflow> get_cashflow(); 
        float get_delta() { return delta; };
        float calculate_delta();
        float claculate_pv();
    };
}

#pragma once

#include <queue>
#include "book.hpp"
#include "order.hpp"

namespace basic_amm
{
    class blotter : public book
    {
    private:
        std::priority_queue<order> orders_to_fulfil;
        std::priority_queue<order> orders_to_quote;

    public:
        std::priority_queue<order> get_order_to_fulfil() { return orders_to_fulfil; };
        std::priority_queue<order> get_orders_to_quote() { return orders_to_quote; };
    };
}
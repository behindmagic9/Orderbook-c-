




#include<iostream>
#include<cstdint>
#include<vector>


enum class Side{
    Sell,
    Buy
};

enum class OrderType{
    GoodToCancel,
    FillAndKill
};

using Price = int32_t;
using Quantity = uint32_t;

class OrderBookLevelInfo{
    OrderBookLevelInfo() {}

    ~OrderBookLevelInfo () { }

private:
    Price price_;
    Quantity quantity_;
    Side side;
};


struct Levelinfo{
    Price price_;
    Quantity quantity_;
};

using levelInfo  = std::vector<Levelinfo>;
// using 





int main(){




    return 0;
}
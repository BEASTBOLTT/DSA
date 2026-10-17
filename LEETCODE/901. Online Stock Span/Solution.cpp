// C++
class StockSpanner
{
    stack<pair<int, int>> stock;

public:
    StockSpanner() {}

    int next(int price)
    {
        int count = 1;
        while (!stock.empty() && stock.top().first <= price)
        {
            count += stock.top().second;
            stock.pop();
        }
        stock.push({price, count});
        return count;
    }
};
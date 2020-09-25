// Module2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
    // Get the variables for this module

    // Joe paid his stockbroker a commission that amounted to 2 percent of the amount he paid for the stock.
    const float BROKER = .02,
                // When Joe purchased the stock, he paid $45.50 per share.
                PAID_SHARE = 45.50,
                // He sold the stock for $56.90 per share.
                SOLD_SHARE = 56.90;
    /// The number of shares that Joe purchased was 1,000.
    const int SHARES = 1000;

    // Math variables to do some mix/match
    float joes_purchase,
        total_com_bought,
        total_com_sold,
        amount_stock_sold_for,
        amount_of_profit;
     
    // Math Time
    // The amount of money Joe paid for the stock.
    joes_purchase = SHARES * PAID_SHARE;

    // The amount of commission Joe paid his broker when he bought the stock.
    total_com_bought = joes_purchase * BROKER;

    // The amount that Joe sold the stock for.
    amount_stock_sold_for = SHARES * SOLD_SHARE;

    // The amount of commission Joe paid his broker when he sold the stock.
    total_com_sold = amount_stock_sold_for * BROKER;

    // (If the amount of profit that your program displays is a negative number, then Joe lost money on the transaction.
    amount_of_profit = (amount_stock_sold_for - (total_com_bought + total_com_sold));

    // Time to Display
    cout << "Amount paid for the stock: " << joes_purchase << "\n" << endl;
    cout << "Amount of commission Joe paid to broker to buy the stock: " << total_com_bought << "\n" << endl;
    cout << "Amount Joe sold the stock for: " << amount_stock_sold_for << "\n" << endl;
    cout << "Amount of commission Joe paid his broker when he sold the stock: " << total_com_sold << "\n" << endl;
    cout << "Amount of profit that Joe made after selling his stock and paying the two commissions to his broker: " << amount_of_profit << "\n" << endl;
}
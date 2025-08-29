// Program to find best buying and 
// selling days
#include <stdio.h>

// Solution structure
struct Interval 
{
    int buy;
    int sell;
};

// This function finds the buy and sell 
// schedule for maximum profit
void stockBuySell(int price[], int n)
{
    // Prices must be given for at 
    // least two days
    if (n == 1)
        return;

    // Count of solution pairs
    int count = 0; 

    // Solution vector
    Interval sol[n / 2 + 1];

    // Traverse through given price array
    int i = 0;
    while (i < n - 1) 
    {
        // Find Local Minima. Note that the 
        // limit is (n-2) as we are comparing 
        // present element to the next element.
        while ((i < n - 1) && 
               (price[i + 1] <= price[i]))
            i++;

        // If we reached the end, break as no 
        // further solution possible
        if (i == n - 1)
            break;

        // Store the index of minima
        sol[count].buy = i++;

        // Find Local Maxima.  Note that the 
        // limit is (n-1) as we are comparing 
        // to previous element
        while ((i < n) && 
               (price[i] >= price[i - 1]))
            i++;

        // Store the index of maxima
        sol[count].sell = i - 1;

        // Increment count of buy/sell pairs
        count++;
    }

    // Print solution
    if (count == 0)
        printf(
        "There is no day when buying the stock will make profitn");
    else 
    {
        for (int i = 0; i < count; i++)
            printf(
            "Buy on day: %dt Sell on day: %dn", sol[i].buy, sol[i].sell);
    }

    return;
}

// Driver code
int main()
{
    // Stock prices on consecutive days
    int price[] = {100, 180, 260, 
                   310, 40, 535, 695};
    int n = sizeof(price) / sizeof(price[0]);

    // Function call
    stockBuySell(price, n);

    return 0;
}

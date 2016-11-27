//
//  main.cpp
//  IC#1 - Stock Prices
//
//  Created by Il Dottore on 11/22/16.
//  Copyright © 2016 Ahmed Elhosseiny. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int stock_prices_yesterday[] = {10, 7, 5, 8, 11, 9};
    int size = 6, max = INT_MIN, difference = 0;
    
    for (int index = size-1; index >= 1; index--) {
        for (int index2 = index-1; index2 >= 0; index2--) {
            cout<<stock_prices_yesterday[index]<<"-"<<stock_prices_yesterday[index2];
            difference = stock_prices_yesterday[index]-stock_prices_yesterday[index2];
            if (difference > max){
                cout<<" Found Max:"<<difference;
                max = difference;
            }
            cout<<endl;
        }
    }
    
    return 0;
}

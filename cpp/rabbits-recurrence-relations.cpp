#include <iostream>

int recurrence(int n, int k){


    if(n <= 1){
        return n;
    }

    return recurrence(n , (k - 1)) + recurrence(n , (k - 2));

}


int main(){

    int n = 29;
    int k = 5;

    std::cout << recurrence(n, k);
};
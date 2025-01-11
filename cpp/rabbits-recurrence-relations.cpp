#include <iostream>

int recurrence(int n, int k){

    int result = 1;

    for(int i = 0; i <= n; i++){
        result = result + k;
    }

    return result;
}


int main(){

    int n = 29;
    int k = 5;

    std::cout << recurrence(n, k);
};
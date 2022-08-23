#include<iostream>

int main(){
    int n;
    std::cout << "Enter the number : " ;
    std::cin >> n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<(n-i); ++j)
            std::cout << j+1;
        for(int j=0; j<(2*i); ++j)
            std::cout << "*";
        for(int j=0; j<(n-i); ++j)
            std::cout << n-i-j;
        std::cout << std::endl;
    }
    return 0;
}
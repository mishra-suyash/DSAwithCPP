#include<iostream>

int main(){
    int n;
    std::cout << "Enter the number : " ;
    std::cin >> n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<=i; ++j)
            std::cout << i+1;
        std::cout << std::endl;
    }
    return 0;
}
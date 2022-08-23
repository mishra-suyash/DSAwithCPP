#include<iostream>

int main(){
    int n;
    char ch;
    std::cout << "Enter the number : " ;
    std::cin >> n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<=i; ++j){
            ch = 'A' + i;
            std::cout << ch << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
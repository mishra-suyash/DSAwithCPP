#include<iostream>

int main(){
    int n, f = 0;
    std::cout << "Enter the number : ";
    std::cin >> n ;
    for(int i =2 ; i <=n/2 ; ++i)
    {
        if(n%i == 0){
            f = 1;
            break;
        }
    }
    if(f == 0)
        std::cout << n << " is a Prime Number." << std::endl;
    else
        std::cout << n << " is NOT a Prime Number." << std::endl;
}
#include <iostream>

int main()
{
    //std::cout<<"Hello World";
    int n = 1234;
    while(n>0){
        int digit = n%10;
        std::cout << "d:" << digit << std::endl;
        int new_n = (n-digit)/10;
        std::cout << "n:" << new_n << std::endl;
        n = new_n;
    }

    return 0;
}

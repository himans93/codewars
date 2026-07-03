#include <iostream>
#include <string>
#include <stack>

int main()
{
    //std::cout<<"Hello World";
    int n = 1234;
    std::stack<int> st;
    while(n>0){
        int digit = n%10;
        std::cout << "d:" << digit << std::endl;
        st.push(digit);
        //int new_n = (n-digit)/10;
        n = n/10;
        //std::cout << "n:" << new_n << std::endl;
        //n = new_n;
    }
    
    std::string s{};
    while(!st.empty() ) {
        int digit = st.top();
        st.pop();
        s += std::to_string(digit*digit);
        std::cout << "square-list:" << s << std::endl;
    }

    return 0;
}

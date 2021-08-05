#include <iostream>

int main()
{
    int j=0;

    std::cin>>j;

    if(j < 0)
    {
        std::cout<<"Please provide a valid positive integer"<<std::endl;
    }
    else
    {
        int Output = j/3;
        std::cout<<j<<std::endl;
    }

    return 0;
}
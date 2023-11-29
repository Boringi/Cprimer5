//Prinet each number in the range specified by two integers.
#include <iostream>
void print_range(int lo,int hi)
{
    if(lo>hi)
    {
        print_range(hi,lo);
        return;
    }
    for(int i=lo; i!=hi;++i)
    std::cout<<i<<" ";
}
int main()
{
    int low=0;int high=0;
    std::cout<<"Please input two  integers:\n";
    std::cin>>low>>high;
    print_range(low,high);
    return 0;
}

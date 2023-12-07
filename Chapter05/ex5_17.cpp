#include<iostream>
#include<vector>

//常量引用，不会改变参数的值
bool is_prefix(const vector<int>& lhs,const vector<int>& rhs)
{
    if(lhs.size()>rhs.size())
        return is_prefix(rhs,lhs);
    for(unsigned i=0;i!=lhs.size();++i)
        if(lhs[i]!=rhs[i])
            return false;  
    return true;
}

int main()
{
    std::vector<int> l{0,1,1,2};
    std::vector<int> r{0,1,1,2,3,5,8};
    std::cout<<(is_prefix(r,l)?"yes\n":"no\n");
    return 0;
}
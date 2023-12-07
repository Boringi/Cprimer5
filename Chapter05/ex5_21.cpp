#include<iostream>
#include<string>

int main()
{
    string curr,prev;
    bool no_twice=true;
    while(std::cin>>curr){
        if(isupper(curr[0])&&prev==curr){
            std::cout<<curr<<": occurs twice in succession."std::endl;
            no_twice=false;
            break;
        }
        prev=curr;
    }
    if(no_twice)
        std::cout<<"no word was repeated."<<std::endl;
    
    return 0;
}
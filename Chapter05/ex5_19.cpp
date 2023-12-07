#include<iostream>
#include<string>

int main()
{
    std::string rsp;
    do
    {
        /* code */
        std::cout<<"Input two strings: ";
        std::string str1,str2;
        std::cin>>str1>>str2;
        std::cout<<(str1<=str2? str1:str2)
                 <<"is less than the other."<<"\n\n"
                 <<"More? Enter yes or no:";
        std::cin>>rsp;
    } while(tolower(rsp[0]=='y'));
    return 0;
    
}
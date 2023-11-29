#include<iostream>
int main()
{
    int currVal=0,val=0;
    //读取你输入的第一个值，次数为一
    if(std::cin>>currVal){
        int cnt=1;
        //继续读取下一个值
        while(std::cin>>val){
            if(val==currVal){
                ++cnt;
            }
            else {
                std::cout<<currVal<<" occurs "
                <<cnt<<" times "<<std::endl;
                //重置
                currVal=val;
                cnt=1;
            }
        }
        std::cout<<currVal<<" occurs "
        <<cnt<<" times "<<std::endl;
    }
    return 0;
}
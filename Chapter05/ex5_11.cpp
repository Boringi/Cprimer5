#include<iostream>

int main()
{
    unsigned aCnt=0,iCnt=0,oCnt=0,uCnt=0,spaceCnt=0,tabCnt=0,newLineCnt=0;
    char ch;
    while(std::cin>>std::noskipws>>ch){
        switch(ch){
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case ' ':
                ++sapceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n'
                ++newLineCnt;
                break;
        }
    }
    
    std::cout<<"Number of vowel a{A}: \t"<<aCnt<<'\n'
    <<"Number of vowel e{E}: \t"<<eCnt<<'\n'
    <<"Number of vowel i{I}: \t"<<iCnt<<'\n'
    <<"Number of vowel o{O}: \t"<<oCnt<<'\n'
    <<"Number of vowel u{U}: \t"<<uCnt<<'\n'
    <<"Number of vowel space: \t"<<spaceCnt<<'\n'
    <<"Number of vowel tab char: \t"<<tabCnt<<'\n'
    <<"Number of vowel new char: \t"<<newLineCnt<<std::endl;

    return 0;
}
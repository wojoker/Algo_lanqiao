#include<iostream>
using namespace std;
int main()
{
    // 26长度的计数器
    
    string word;
    int max=0;
    int temp=0;
    cin>>word;
    int count_word[26]={0};
    for(int i=0;i<word.length();i++){
        count_word[word[i]-97]++;   
    }
    // 寻找最大值
    for(int i=0;i<26;i++){
        if(max<count_word[i]){
            max=count_word[i];
            temp=i;
        }
    }
    char b=temp+'a';
    cout<<b<<endl;
    cout<<max;
}
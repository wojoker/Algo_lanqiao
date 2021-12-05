#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int i;
    cout<<"vector size=="<<vec.size()<<endl;
    for(i=0;i<5;i++)
    {
        vec.push_back(i);
    }
    cout<<vec.size()<<endl;
    for(i=0;i<5;i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}
// Code to add sum of elements of an array
#include <iostream>
#include<vector>
using namespace std;
const int N=40;

int sum(vector<int> d)
{
    int s = 0;
    for (int i=0; i<d.size(); i++)
        s+=d[i];
    return s;
}

int main()
{
int i;
int accum = 0;
vector<int> data;
for(i = 0; i < N; ++i)
    data.push_back(i);
accum = sum(data);
cout<<"Sum is "<<accum;
return 0;
}
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> Weights;
    int weight,sum=0;
    int num_cow;
    ifstream infile("file.in",ios::in);
    if(!infile)
    {
        cerr<<"Failed to open file.in"<<endl;
        exit(1);
    }
    infile>>num_cow;
    if(num_cow<5)
    {
        cout<<"Too few cows."<<endl;
        exit(1);
    }
    while(infile>>weight)
        Weights.push_back(weight);
    sort(Weights.begin(),Weights.end());
    for(int i=num_cow-5;i<num_cow;i++)
        sum+=Weights.at(i);
    cout<<sum<<endl;

    return 0;
}

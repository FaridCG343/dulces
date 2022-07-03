#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
long long int cant(vector<int> v, int dinero)
{
    long long int sum=0, n,s2=0;
    for (int i = 0; i < v.size(); i++)
    {
        sum+=v[i];
        n=floor((dinero+i+1-sum)/(i+1));
        if (n<=0)
        {
            break;
        }
        
        s2+=n;
    }
    
    return s2;
}
int main(int argc, char const *argv[])
{
    int tc, numT, dinero, costoI;
    vector<int> costos;
    cin >> tc;
    while (tc--)
    {
        costos.clear();
        cin >> numT >> dinero;
        for (int i = 0; i < numT; i++)
        {
            cin >> costoI;
            costos.push_back(costoI);
        }
        sort(costos.begin(), costos.end());
        cout << cant(costos, dinero) << endl;
    }

    return 0;
}
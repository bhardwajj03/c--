#include <bits/stdc++.h>
using namespace std;
void pairsum(vector<int> a, int sum)
{
    int i, j = 0;
    int element;
    for (i = 0; i < a.size(); i++)
    {
        //cout << "we accessing element :" << a[i] << endl;
          
        for (j = i + 1; j < a.size(); j++)
        {
            //cout << "(" << a[i] << "," << a[j] << ")" << endl;
            if (a[i]+ a[j] == sum)
        {
            cout << "answer is : (" << a[i] << "," << a[j] <<")"<< endl;
        }
        
        
        }
    }
}
int main()
{
    vector<int> p{10, 20, 30, 40, 50, 60, 70, 80};
    int sum = 90;
    pairsum(p, sum);
}
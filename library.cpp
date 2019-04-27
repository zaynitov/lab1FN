#include <sstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{


    /*int n;
cin>>n;
int arr[n];
for (int i = 1; i <= n; i ++)
{
    cin>>(arr[i]);
}*/


int arr[5] = {1, 2, 3, 4, 5};

int sum = 0;
int prod = 1;
for (int i = 0; i < 5; i++)
{
  sum += arr[i];
  prod *= arr[i];
}

double avgArithm = sum /5;
double avgGeom= exp(log(prod) * 1/5);

    vector<int> elements;

for (int i = 0; i < 5; i++)
{
    if ((arr[i] <= avgArithm) && (arr[i] >= avgGeom))
    {
        elements.push_back(arr[i]);

    }
}

for(int element : elements)
{
    cout<<element<<endl;
}

return 0;

}
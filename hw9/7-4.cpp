#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
   int a[100];
   int n;
   cin >> n;
   for(int i=0;i<n;i++)
   cin >> a[i];
   for(int i=n-1;i>=0;i--)
   cout<< a[i];
   return 0;
}

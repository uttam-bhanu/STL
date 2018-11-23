#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> v={ 2,4,4,6};
   v.push_back(7);
   v.push_back(9);
   v.pop_back();
   
   vector<int>::iterator itr;
   cout<< "using for iterator" << endl;
   for(itr = v.begin();itr!= v.end(); itr++)
      cout<<*itr<< endl;
   cout<< "using for loop" << endl;
   for (int x : v)
     std::cout << x << std::endl;

    return 0;
}
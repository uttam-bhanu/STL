#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    
    m.insert(pair<int,string> (1, "jhon"));
    m.insert(pair<int,string> (2, "rahul"));
    m.insert(pair<int,string> (3, "ravi"));
    
    map<int, string>::iterator itr;
    
    for(itr = m.begin(); itr != m.end(); itr++)
       std::cout << itr->first<< " " << itr->second << std::endl;
    
    std::cout << "found value is" << std::endl;
    
    map<int, string>::iterator itr1;
    itr1 = m.find(2);
    std::cout << itr1->first<< " " << itr1->second << std::endl;
    
    
    return 0;
}

#include <iostream>
#include <set>

int main()
{
    std::cout << "Hello World!\n";

    std::set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(9);

    s.erase(2);
    s.erase(7);

    std::set<int>::iterator itr = s.find(6);

    s.insert(6);

    if (itr == s.end()) std::cout << "no";

    for (int i : s) std::cout << i << ' ';
}
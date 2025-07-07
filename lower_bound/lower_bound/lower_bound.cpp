#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;
void testing();

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 100);

    std::cout << "Hello World!\n";

    vector<int> v;
    for (int i = 0; i < 20; ++i) v.push_back(dist(gen));

    int loverBound = 65;
    sort(v.begin(), v.end());

    auto it = lower_bound(v.begin(), v.end(), loverBound);


    if (it != v.end()) {
        
        cout << "last element " << *it << " then its possition in vector: " << (it - v.begin())+1 << '\n';
    }
    else         cout << "last element " << (*(it - 1)) << " then its possition in vector: " << (it - v.begin()+1) << '\n';

    puts("");

    while (it != v.end()) cout << *it++ << " ";

    puts("\n");

    for (int i : v) cout << i << " ";
    puts("");


    it = upper_bound(v.begin(), v.end(), loverBound);
    puts("\n");
    cout << "upper bound " << *it << " and pos in vec: " << (it - v.begin()) + 1 << '\n';

    while (it > v.begin()) cout << *(--it)<< ' ';

    puts("\n");
    testing();
}

void testing() {
    cout << "...................Testing...................\n";

    vector<int> v = { 1, 2, 2, 6, 8, 12, 15 };

    vector<int>::iterator it = lower_bound(v.begin(), v.end(), 5);
    for (int i : v) cout << i << ' ';
    puts("\n");

    cout << *it << " \n";
    cout << (it - v.begin()) << '\n';

    cout << "\n...................Testing...................";
}
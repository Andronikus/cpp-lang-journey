#include <iostream>

using namespace std;


int main(){
    string str{"sunny day!"};

    cout << "str: " << str << endl;

    // distance: number of element
    auto nbr = distance(str.begin(), str.end());
    cout << "nbr elements: " << nbr << endl;

    // next: iterate to next element
    auto secondElem = next(str.begin());
    if(secondElem != str.end())
        cout << "str second element: " << *secondElem << endl;

    // previous: get last element
    auto lastElem = prev(str.end());
    if(lastElem != str.end())
        cout << "str last element: " << *lastElem << endl;

    // advance: middle element
    auto middleElem = str.begin();
    advance(middleElem, distance(str.begin(), str.end()) / 2);
    cout << "str middle element: " << *middleElem << endl;

    // iterators: iterate
    for(auto it = str.begin(); it != str.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

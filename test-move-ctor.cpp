#include <bits/stdc++.h>
#include "generic_avl.h"
using namespace std;

int main()
{

    AVL<int> bt = AVL<int>();
    vector<int> arr = {80, 51, 95, 29, 66, 89, 99, 6, 40, 71, 94, 98};

    for (int ele : arr)
    {
        bt.insert(ele);
    }

    cout << "Elements in bt: ";
    for (int ele : bt)
    {
        cout << ele << " ";
    }
    cout << endl;

    AVL<int> new_bt(move(bt));
    cout << "After moving\n";
    cout << "Elements in bt: ";
    for (int ele : bt)
        cout << ele << " ";
    cout << endl;

    cout << "Elements in new_bt: ";
    for (int ele : new_bt)
        cout << ele << " ";
    cout << endl;
    return 0;
}
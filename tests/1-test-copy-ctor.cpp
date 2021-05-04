#include <bits/stdc++.h>
#include "../generic_avl.h"
using namespace std;

int main()
{

    AVL<int> bt = AVL<int>();
    vector<int> arr = {80, 51, 95, 29, 66, 89, 99, 6, 40, 71, 94, 98};

    for (int ele : arr)
    {
        bt.insert(ele);
    }

    cout << "Element in bt: ";
    for (int ele : bt)
    {
        cout << ele << " ";
    }
    cout << endl;

    AVL<int> copy_bt(bt);
    cout << "Tree is copied\n";
    cout << "Element in copied_bt: ";
    for (int ele : copy_bt)
    {
        cout << ele << " ";
    }
    cout << endl;

    cout << "Inserting 3 new values in the copied tree\n";
    copy_bt.insert(0);
    copy_bt.insert(1);
    copy_bt.insert(2);

    cout << "After changes\n";
    cout << "Old tree: ";
    for (int ele : bt)
        cout << ele << " ";
    cout << "\n";
    cout << "New tree: ";
    for (int ele : copy_bt)
    {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}

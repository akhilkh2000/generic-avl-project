#include <bits/stdc++.h>
using namespace std;
#include "../generic_avl.h"
int main()
{
    AVL<int> t = AVL<int>();
    t.insert(5);
    t.insert(6);
    AVL<int> bt(t);

    bt.print_tree();

    return 0;
}
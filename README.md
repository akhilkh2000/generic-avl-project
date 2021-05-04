
# Generic AVL tree made in c++

Generic AVL tree data structure implemented in C++;

## Description

This generic AVL tree is made using templates. This class also provides a forward iterator to traverse the AVL tree in inorder fashion .
The public methods / interfacces provided are :
*  Insert :
    * Signature :```void insert(T data);```
    * Description: Inserts data appropriately into the AVL tree.

* print_tree:
   * Signature :``` void print_tree();```
   * Description: Prints tree using inorder traversal and displays it in a legible format.

* erase: 
    Signature : ```void erase(T data);```
    Description: Deletes the node passed to it and ensures AVL tree properties are maintained.

* find: 
    * Signature:  ```Iterator find(T data);```
    * Description: If the element passed is found in the AVL tree, it returns the iterator pointing to the node . If not, an iterator pointing to nullptr is returned .

* empty:
   * Signature:  ```inline bool empty();``` 
   * Description: Checks if AVL tree pointed to by "this" is empty or not.
* begin:
    * Signature: ```inline Iterator begin();``` 
    * Description: returns iterator to the first node (in inorder traversal) of the AVL tree.

* end:
    * Signature: ```inline Iterator end();```
   *  Description: Return an iterator which is next to the last node in the inorder traersal of the tree(which is nullptr)


## Getting Started
The main source code for the implementation is present in ```generic_avl.h```

### Dependencies
* C++ 14 and above 
* GNU G++ version 9.3.0 ^

### Installing
* Clone this repository 
```
git clone https://github.com/akhilkh2000/DS-CP.git 
```
or download the zip folder and extract it .

### Executing program

* To test the project with the given test files , navigate into the tests folder
``` cd ./tests ```
* To run a specific test file 
``` g++ -std=c++14 <filename> ```
* to show the output 
``` ./a.out ```

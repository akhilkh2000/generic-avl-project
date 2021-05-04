Following are the classes and the interfaces provided :

-> Class AVL 

1. Constructor:
    Signature : AVL<T>();
    Description: Initialize the AVL tree's root to nullptr .
2. Copy Constructor:
    Signature : AVL<T>(const AVL<T> &rhs);
    Description: Used to copy object passed(rhs) into object pointed to by "this".(callee)
3.Copy Assignment:
    Signature : AVL<T>(const AVL<T> &rhs)
    Description: Overloads assignment operator for objects of AVL class.
4. Move Constructor:
    Signature : AVL<T>(AVL<T> &&rhs)
    Description: Moves the data in the heap instead of making a deep copy
 5.Move Assignment operator:
    Signature : AVL<T> &operator=(AVL<T> &&rhs)
    Description: Defines the move assignment operator that moves the data in the heap instead of making a deep copy.
6.  Insert :
    Signature :void insert(T data);
    Description: Inserts data appropriately into the AVL tree.
7. print_tree:
    Signature : void print_tree();
    Description: Prints tree using inorder traversal and displays it in a legible format.
8. erase: 
    Signature : void erase(T data);
    Description: Deletes the node passed to it and ensures AVL tree properties are maintained.

9. find: 
    Signature:  Iterator find(T data);
    Description: If the element passed is found in the AVL tree, it returns the iterator pointing to the node . If not, an iterator pointing to nullptr is returned .

10. empty:  
    Signature:  inline bool empty();
    Description: Checks if AVL tree pointed to by "this" is empty or not.
5. begin:
    Signature: inline Iterator begin();
    Description: returns iterator to the first node (in inorder traversal) of the AVL tree.

6. end:
    Signature: inline Iterator end();
    Description: Return an iterator which is next to the last node in the inorder traersal of the tree(which is nullptr)


-> Subclass Iterator 
Implements a Forward iterator which traverses the tree in inorder fashion.

Public methods:
1. Constructor 
    Signature: Iterator(Node<T> *n)
    Description: Initialize the iterator with the node passed to it and accordingly populate inner stack.
 
 2. ++(prefix) operator:
    Signature: Iterator &operator++();
   Description: Moves the Iterator to its adjacent inorder node and returns the new value of the iterator
 3. ++ (postfix):
    Signature:Iterator operator++(int)
    Description: Returns the value of the current iterator and then moves the Iterator to its next inorder node.

 4.*(dereference): 
    Signature:T operator*()
    Description: returns the data of the node to which the iterator is pointing to

 5.->(arrow operator): 
    Signature: Node<T> *operator->()
    Description : return the pointer to the node the iterator is pointing to
6. == operator
    Signature:  bool operator==(const Iterator &other) const;
    Description: Checks for equality of two iterators based on the internal pointer to which they point.

 7. != operator: 
    Signature:   bool operator!=(Iterator other)const;
    Description: Checks for inequality of two iterators based on the internal pointer to which they point.

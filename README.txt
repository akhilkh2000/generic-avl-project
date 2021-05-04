Following functionalities are provided with AVL tree

1. Creating a tree: 
    AVL<Typename> Var_name;
    Will initialize the tree whose data is of type Typename

2. print_tree():
    Will display the tree and the balance factor besides it.

3. erase(val): 
    If that val is present in the tree then that val is deleted and After deletion if required rotations are performed to make it again balanced

    If val is not present then no changes are made

4. find(val): 
    If val is present the it will return an iterator pointing to that val else it will return iterator to the end

5. begin(): 
    Return an iterator to the first node in the inrder traversal of the tree

6. end(): 
    Return an iterator which is next to the last node in the inorder traersal of the tree(which is nullptr)

Iterators and functionalities associated with the  it: 

Forward iterators are provided which will traverse the current tree in the inoder.

Let it be the iterator then
 
 ++it: 
    Moves the Iterator to its adjacent inorder node and returns the new value of the iterator
 it++:
    Returns the value of the current iterator and then moves the Iterator to its next inorder node.

 *it: 
    Return the data of the node to which the iterator is pointing to

 it->: 
    return the pointer to the node the iterator is pointing to

Let it1 and it2 be 2 iterators
 it1 == it2: 
    Return True if both the iterator are pointing to the same node in the tree else Returns false

 it1 != it2: 
    Returns true of both the iterators are not pointing to the same node of hte tree else returns false


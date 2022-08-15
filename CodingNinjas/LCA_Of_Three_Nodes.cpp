/**********************************************************
    Following is the Binary Tree Node class structure.

    template <typename T>
    class BinaryTreeNode {
    public :
	    T data;
	    BinaryTreeNode<T> *left;
	    BinaryTreeNode<T> *right;

	    BinaryTreeNode(T data) {
	        this -> data = data;
	        left = NULL;
	        right = NULL;
	    }
    };

***********************************************************/

BinaryTreeNode<int>* lcaOfThreeNodes(BinaryTreeNode<int>* root, int node1, int node2, int node3) {
    // Write your code here.
    if(root == NULL) {
        return NULL;
    }
    if(root->data==node1 || root->data==node2 || root->data==node3) {
        return root;
    }
    
    BinaryTreeNode<int> *leftNode = lcaOfThreeNodes(root->left, node1, node2, node3);
    BinaryTreeNode<int> *rightNode = lcaOfThreeNodes(root->right, node1, node2, node3);
    
    if(!leftNode && !rightNode) {
        return NULL;
    }
    if(leftNode && rightNode) {
        return root;
    }
    if(!leftNode) {
        return rightNode;
    }
    if(!rightNode) {
        return leftNode;
    }
    return NULL;
}

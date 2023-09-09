/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> v;
        stack<Node*> s;
        if(!root){
            return v;
        }
        s.push(root);
        while(!s.empty()){
            Node* f=s.top();
            s.pop();
            v.push_back(f->val);
            for(int i=f->children.size()-1;i>=0;i--){
                s.push(f->children[i]);
            }
        }
        return v;
    }
};
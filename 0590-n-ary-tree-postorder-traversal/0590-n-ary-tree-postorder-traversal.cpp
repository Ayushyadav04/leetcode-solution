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
    vector<int> postorder(Node* root) {
        vector<int> v;
        if(!root){
            return v;
        }
        stack<Node*> s;
        s.push(root);
        while(!s.empty()){
            Node* f=s.top();
            s.pop();
            v.push_back(f->val);
            for(int i=0;i<f->children.size();i++){
                s.push(f->children[i]);
            }

        }
        reverse(v.begin(),v.end());
        return v;
    }
};
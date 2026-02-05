#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void print(vector<int> &ans){
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

void print(vector<vector<int>> &result){
    for(auto i:result){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

Node* insertInBst(Node* &root,int data){
    if(root==NULL){
        root = new Node(data);
        return root;
    }
    if(data>root->data){
        root->right=insertInBst(root->right,data);
    }
    else{
        root->left=insertInBst(root->left,data);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        insertInBst(root,data);
        cin>>data;
    }
}

void inorder(Node* root){
    if(root==NULL) return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL) return ;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL) return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTreversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

vector<int> Iterative_Preorder(Node* root){
    stack<Node*> st;
    vector<int> ans;
    st.push(root);
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->data);
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
    return ans;
}

vector<int> Iterative_Inorder(Node* root){
    stack<Node*> st;
    vector<int> ans;
    Node* curr = root;
    while(true){
        if(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            if(st.empty()) break;
            Node* temp = st.top();
            st.pop();
            ans.push_back(temp->data);
            curr = temp->right;
        }
    }
    return ans;
}

vector<int> Iterative_Postorder(Node* root){
    vector<int> ans;
    stack<Node*> st;
    Node* curr = root;
    while(curr!=NULL || !st.empty() ){
        if(curr!=NULL){
            st.push(curr);
            curr= curr->left;
        }
        else{
            Node* temp = st.top()->right;
            if(temp==NULL){
                temp = st.top();
                st.pop();
                ans.push_back(temp->data);
                while(!st.empty() && temp==st.top()->right){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->data);
                }
            }
            else{
                curr = temp;
            }
        }
    }
    return ans;
}

void All_Traversal(Node* root){
    vector<int> In,Pre,Post;
    stack<pair<Node*,int>> st;
    st.push({root,1});

    while(!st.empty()){
        Node* node = st.top().first;
        int num = st.top().second;
        st.pop();

        if(num==1){
            Pre.push_back(node->data);
            num++;
            st.push({node,num});
            if(node->left!=NULL){
                st.push({node->left,1});
            }
        }

        else if(num==2){
            In.push_back(node->data);
            num++;
            st.push({node,num});
            if(node->right!=NULL){
                st.push({node->right,1});
            }
        }

        else{
            Post.push_back(node->data);
        }
    }
    cout<<"Preorder : ";
    print(Pre);
    cout<<"Inorder : ";
    print(In);
    cout<<"Postorder : ";
    print(Post);
}

vector<vector<int>> ZigZag_Traversal(Node* root){
    if(root==NULL) return {{}};
    queue<Node*> q;
    vector<vector<int>> result;
    q.push(root);
    bool flag = true;
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for(int i=0;i<size;i++){
            Node* node = q.front();
            q.pop();
            int index = (flag) ? i : (size-1-i);
            ans[index] = node->data;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        result.push_back(ans);
        flag = !flag;
    }
    return result;
}

int Max_Height(Node* root,int& diameter){
    if(root ==NULL) return 0;

    int left = Max_Height(root->left,diameter);
    int right = Max_Height(root->right,diameter);
    // for diameter of tree 
    diameter = max(diameter,left+right+1);
    return max(right,left)+1;
}

bool balance_bst(Node* root,int &diameter){
    if(root==NULL) return true;

    int left = Max_Height(root->left,diameter);
    int right = Max_Height(root->right,diameter);
    int diff = abs(left-right);
    return (balance_bst(root->left,diameter) && balance_bst(root->right,diameter) && diff<=1);
}

int Max_Path(Node* root,int &path){
    if(root==NULL) return 0;

    int left = Max_Path(root->left,path);
    int right = Max_Path(root->right,path);

    path = max(path,left+right+root->data);
    return max(left,right)+root->data;
}

Node* minvalue(Node* root){
    Node* temp = root;

    while(temp->left){
        temp = temp->left;
    }

    return temp;
}

Node* maxvalue(Node* root){
    Node* temp = root;
    
    while(temp->right){
        temp = temp->right;
    }

    return temp;
}

Node* deleteFromBst(Node* &root,int val){
    if(root==NULL) return NULL;

    if(root->data==val){
        
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        else if(root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        else if(root->left==NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        else{
            int mini = minvalue(root->right)->data;
            root->data = mini;
            root->right = deleteFromBst(root->right,mini);
            return root;
        }

    }

    if(val>root->data){
        root->right = deleteFromBst(root->right,val);
        return root;
    }
    else{
        root->left = deleteFromBst(root->left,val);
        return root;
    }
    
}

void childSumProperty(Node* root){
    if(root==NULL) return ;
    if(!root->left && !root->right) return ;

    childSumProperty(root->left);
    childSumProperty(root->right);

    int sum = (root->left?root->left->data:0)+(root->right?root->right->data:0);
    int diff = abs(root->data-sum);
    if(root->data-sum>0){
        if(root->left) root->left->data += diff;
        else if(root->right) root->right->data += diff;
    }
    else root->data += diff;
}

int main(){
    Node* root = NULL;
    takeInput(root);
    // cout<<"Iterative Inorder :";
    // vector<int>ans = Iterative_Inorder(root);
    // print(ans);
    // cout<<"Inorder : ";
    // inorder(root);
    // cout<<endl;
    // cout<<"Iterative Preorder :";
    // ans = Iterative_Preorder(root);
    // print(ans);
    // cout<<"preorder : ";
    // preorder(root);
    // cout<<endl;
    // cout<<"Iterative Postorder : ";
    // ans = Iterative_Postorder(root);
    // print(ans);
    // cout<<"postorder : ";
    // postorder(root);
    // cout<<endl;
    int diameter = 0;
    All_Traversal(root);
    cout<<"Max Path Sum : ";
    int path = 0;
    int ans = Max_Path(root,path);
    cout<<path<<endl;
    cout<<"Max height : ";
    cout<<Max_Height(root,diameter)<<endl;
    cout<<"diameter : ";
    cout<<diameter<<endl;
    cout<<"balance : ";
    cout<<balance_bst(root,diameter)<<endl;
    cout<<"minimum vlaue : ";
    int value = minvalue(root)->data;
    cout<<value<<endl;
    cout<<"maximum value : ";
    value = maxvalue(root)->data;
    cout<<value<<endl;
    cout<<"LevelOreder Traversal : "<<endl;
    levelOrderTreversal(root);
    cout<<"Zigzag Traversal : "<<endl;
    vector<vector<int>> result = ZigZag_Traversal(root);
    childSumProperty(root);
    cout<<"ChildSumProperty : ";
    levelOrderTreversal(root);
    print(result);
    while(true){
        int data ;
        cin>>data;
        if(data==-1) break;
        Node* new_root = deleteFromBst(root,data);
        cout<<"Inorder : ";
        inorder(new_root);
        cout<<endl;
        cout<<"preorder : ";
        preorder(new_root);
        cout<<endl;
        cout<<"postorder : ";
        postorder(new_root);
        cout<<endl;
        cout<<"minimum vlaue : ";
        value = minvalue(new_root)->data;
        cout<<value<<endl;
        cout<<"maximum value : ";
        value = maxvalue(new_root)->data;
        cout<<value<<endl;
        levelOrderTreversal(new_root);
    }
}
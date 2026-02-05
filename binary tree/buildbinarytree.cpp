#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* rigth;
    node* left;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->rigth=NULL;
    }
};

node* buildTree(node* root){
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"inserting in left "<<root->data<<endl;
    root->left = buildTree(root->left);
    cout<<"inserting in rigth "<<root->data<<endl;
    root->rigth = buildTree(root->rigth);
    return root;
}

void levelOrderTreversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
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
            if(temp->rigth){
                q.push(temp->rigth);
            }
        }
    }
}

void Inorder(node* root){
    if(root==NULL){
        return ;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->rigth);
}

void Preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->rigth);
}

void Postorder(node* root){
    if(root==NULL){
        return ;
    }
    Postorder(root->left);
    Postorder(root->rigth);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"inserting in left "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"inserting in right "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->rigth = new node(rightdata);
            q.push(temp->rigth);
        }
    }
}

 vector<int> findSpiral(node* root) {
        vector<int> ans;
        queue<node*> q;
        bool flag = true;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            if(q.front()==NULL){
                q.pop();
                if(!q.empty()){
                    q.push(NULL);
                    if(flag){
                        flag = true;
                    }
                    else{
                        flag = false;
                    }
                }
            }
            if(flag){
                if(root->left){
                    q.push(root->left);
                }
                if(root->rigth){
                    q.push(root->rigth);
                }
            }
            else{
                if(root->rigth){
                    q.push(root->rigth);
                }
                if(root->left){
                    q.push(root->left);
                }
            }
            ans.push_back(q.front()->data);
        }
        
        return ans;
    }


int main(){

    node* root = NULL;
    
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //1
    //3 5
    //7 11 17
   
    buildFromLevelOrder(root);
    // levelOrderTreversal(root);
     vector<int> ans = findSpiral(root);
    
    for(auto i : ans){
        cout<<i<<" ";
    }
    // cout<<"Inorder : ";
    // Inorder(root);
    // cout<<endl<<"Preorder : ";
    // Preorder(root);
    // cout<<endl<<"Postorder : ";
    // Postorder(root);
    
}
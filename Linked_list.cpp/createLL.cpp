#include<iostream>
using namespace std;

// Linked List is Hindi

class node{
    public:
        int data;
        node* next;
        
        node(){
            cout<<"im in a defauult constructor that runs when a node creation happens"<<endl;
            this->next=NULL;  
        }
        node(int data){
            this->data=data;
            this->next=NULL;
        }

};

void printLL(node* sir){
    /*jab bhi LL function mai pass hogi using head or tail pointer , aap kabhi bhi orignal pointer 
    ka use nhi krenge LL traverse krne k liye, doesnt matter pass by value ho ya refrence , ham 
    temporary point banake solve krenge*/

    node* temp = sir;
    while(temp != NULL){
        cout<<temp->data<<"-";
        temp=temp->next;
    }
    cout<<endl;
}

int getlength(node* head){
    node* temp=head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp -> next;
    }
    return count;
}

void insertAtHead(node* &sir,node* &tail ,int data){
// yaha par node* sir ki jagah hame node* &sir dena h (pass by refrence) because whenever you are 
// changing anything into LL use pass by reference  

    if(sir == NULL){
        // for empty LL in this both head and tail are NULL and for single element both are on newnode
        node* newnode=new node(data);
        sir=newnode;
        tail=newnode;
    }
    else{
        node* newnode =new node(data);
        //attach new node to head node
        newnode->next=sir;
        //update head
        sir=newnode;
    }

}

void insertAtTail(node* &sir, node* &tail , int data){
    if(sir==NULL){
        node* champ=new node(data);
        sir=champ;
        tail=champ;
    }
    else{
        node* champ=new node(data);
        tail->next=champ;
        champ=tail;
    }
}

int main(){

    node* sir=NULL;
    node* tail=NULL;

    insertAtHead(sir,tail,10);
    insertAtHead(sir,tail,20);
    insertAtHead(sir,tail,30);
    insertAtHead(sir,tail,40);
    insertAtHead(sir,tail,50);
    insertAtTail(sir,tail,60);
    printLL(sir);
   // node a;  static node creation 
   // below is the dynamic node creation
   
   /*node* head = new node(10);
    node* first = new node(20);
    node* second = new node(30);
    node* third = new node(40);

    head->next=first;
    first->next=second;
    second->next=third;

    node* tail= third;
    node* sir = head;  //we've created a head , dusra wala head node ka naam hai 
    printLL(sir);  //phle wala head 

    cout<<"length of LL is :"<<getlength(sir)<<endl;

    insertAtHead(sir,tail,5);
    insertAtTail(sir,tail,60);
    printLL(sir);
    */
}
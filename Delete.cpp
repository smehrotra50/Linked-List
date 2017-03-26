/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shubham Mehrotra
 *
 * Created on 26 March, 2017, 11:26 PM
 */

#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head=NULL;
void insert(int data)
{
    Node* temp=new Node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    Node* t =head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=temp;
}
void print()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void del(int n)
{
    Node* temp1=head;
    if(n==1)
    {
        head=temp1->next;
        delete(temp1);
        return ;
    }
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->next;
    }
    Node* temp2=temp1->next;
    temp1->next=temp2->next;
    delete(temp2);
}
int main()
{
    head=NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    cout<<endl;
    int i;
    cout<<"Enter the position to delete:";
    cin>>i;
    del(i);
    print();
    return 0;
}

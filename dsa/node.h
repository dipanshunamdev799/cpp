#pragma once
namespace node
{
    //Source code
    struct Node{
        int val = 0;
        Node* next = nullptr;
        Node(int x){
            val = x;
            next = nullptr;
        }
        Node(){}
        Node(int x,Node* next_){
            val = x;
            next = next_;
        }
    };
}
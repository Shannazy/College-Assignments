#ifndef BST_H
#define BST_H
#include <iostream>
using namespace::std;


class BST
{
    private:
        int ElementCount;
        struct Node{
            int data;
            Node* prev;
            Node* Greater;
            Node* Lesser;

            };
        Node* track;
        Node* first;
    void goGreater(int K){
        if(track->Greater==NULL){
            track->Greater=new Node;
            track->Greater->prev=track;
            track=track->Greater;
            track->Greater=track->Lesser=NULL;
            track->data=K;
            track=first;
        }
        else{
            track=track->Greater;
            if (K>track->data){
                goGreater(K);
            }
            else{
                goSmaller(K);
            }
        }
    }
    void goSmaller(int K){
        if(track->Lesser==NULL){
            track->Lesser=new Node;
            track->Lesser->prev=track;
            track=track->Lesser;
            track->Lesser=track->Greater=NULL;
            track->data=K;
            track=first;
        }
        else{
            track=track->Lesser;
            if (K>track->data){
                goGreater(K);
            }
            else{
                goSmaller(K);
            }
        }
    }

    public:
        BST();
    void put(int K){
        if (ElementCount==0){
            first=new Node;
            first->prev=first->Lesser=first->Greater=NULL;
            track=first;
        }
        else{
            if (K>first->data){
                goGreater(K);
            }
            else{
                goSmaller(K);
            }
        }
    }


    protected:


};

#endif // BST_H

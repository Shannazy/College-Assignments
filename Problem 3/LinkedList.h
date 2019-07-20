#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <utility>
#include <cstdlib>
#include <time.h>

using namespace::std;

class LinkedList
{
    public:
        LinkedList();
        void Randomizer(){
        i=first;
        temp=first->next;
        srand(time(0));
        int r=(rand()%3)+1;
        if (r==1){
                while((i->index<temp->index)&&(temp->next!=NULL)&&(temp!=NULL)){
                    if((temp->next==NULL)||(temp==NULL)){
                        break;
                    }
                swap(i->data,temp->data);
                i=i->next;
                temp=temp->next;
                }
        }
        if (r==2){
               while((i->index<temp->index)&&(temp->next!=NULL)&&(temp!=NULL)){
                    if((temp->next==NULL)||(temp==NULL)){
                        break;
                    }
                swap(i->data,temp->data);
                i=i->next;
                temp=temp->next;
                if((temp->next==NULL)||(temp==NULL)){
                    break;
                }
                temp=temp->next;
               }
        }
         /*if (r==3){
                while((i->index<temp->index)&&(temp->next!=NULL)&&(temp!=NULL)){
                swap(i->data,temp->data);
                i=i->next;
                temp=temp->next;
                temp=temp->next;
                temp=temp->next;

        }
        }*/
        }

        void add(int number){
        if (Elements==0){
          temp=new Node;
          temp->data=number;
          first=temp;
          last=temp;
          first->index=Elements;
          Elements++;
        }
        else{
            temp=new Node;
            last->next=temp;
            last=temp;
            last->data=number;
            last->index=Elements;
            Elements++;
        }

        }

        void printList(){

        temp=first;
        for (int j=0;j<Elements;j++){
            cout<<temp->data<<", ";
            if(temp->next!=NULL){
                temp=temp->next;
            }
        }
            cout<<endl;
        }

        int parting(int start, int ending){
        i=first;
        tempLast=first;
        while (i->index!=start){
            i=i->next;
        }
        while(tempLast->index!=ending){
            tempLast=tempLast->next;
        }
        temp=i;
        while(temp->index!=tempLast->index){
                cout<<"Comparing "<<temp->data<<" to "<<tempLast->data<<endl;
            if(temp->data<=tempLast->data){
                swap(temp->data,i->data);
            cout<<"Swapped "<<temp->data<<" with "<<i->data<<endl;
                i=i->next;
            }
            temp=temp->next;
        }
        swap(i->data,tempLast->data);
        printList();
        return i->index;
        }
        void QuickSortList(int startIndex, int lastIndex){

        if (startIndex<lastIndex){
                //cout<<startIndex<<" "<<lastIndex<<endl;
            int p=parting(startIndex,lastIndex);
            QuickSortList(startIndex,p-1);
            QuickSortList(p+1,lastIndex);
        }

        }


    private:
        struct Node{
        int data;
        int index;
        Node* next;
        };
        Node* temp;
        Node* first;
        Node* last;
        Node* i;
        Node* tempLast;
        int Elements =0;
};

#endif // LINKEDLIST_H

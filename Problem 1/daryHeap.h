#ifndef DARYHEAP_H
#define DARYHEAP_H
#include <iostream>
#include <utility>
using namespace::std;


class daryHeap
{
    public:
        daryHeap(int children);

    void inserter(int K){
        bool swapped=false;
        if(index<1){

            darry[index+1]=K;
        }
        if(index>=1){
        while(darry[index]<K){
            swap(darry[index],K);
           swapped=true;
        }
        if((index*maxChildren)+childrenCounter==arraySize){
            doubleArray();
        }
        if(childrenCounter<=1){
            darry[(maxChildren*index)+childrenCounter]=K;
            childrenCounter++;
        }
        if(childrenCounter>1){
            index++;
            childrenCounter=2-maxChildren;
            inserter(K);
        }}
        if(index<1){
        index=1;
        }
        if(swapped){
            swim(index);
        }
    }

    void doubleArray(){
    int tempArray[2*arraySize];
    for (int l=0;l<arraySize;l++){
        tempArray[l]=darry[l];
    }
    darry=tempArray;
    arraySize *=2;
    }

    void swim(int K){
        bool swapped=false;
        int Parent;
    if (K%maxChildren<=1){
        Parent=K/maxChildren;
    }
    if (K%maxChildren>1){
        Parent=(K/maxChildren)+1;
    }
    if(Parent==0){
        Parent++;
    }
    if(darry[K]>darry[Parent]){
        swap(darry[K],darry[Parent]);
        swapped=true;
    }
    if (swapped){
        swim(Parent);
    }

    }

    int delMax(){
    int Max=1;
    int currentChild=(index*maxChildren)+childrenCounter-1;
    int myMax=darry[Max];
    swap(darry[currentChild],darry[Max]);
    if(childrenCounter==2-maxChildren){
        index--;
        childrenCounter=1;
    }
    else{}
    childrenCounter--;
    sink(Max);
    return myMax;
    }

    void sink(int K){
    int currentChild=(index*maxChildren)+childrenCounter-1;
    int Maxed;
    int tempIndex=K;

    bool swapped=false;
    do{
        for(int j=2-maxChildren;j<=1;j++){
            if((K*maxChildren)+j>currentChild){
                break;
            }
            if(j==2-maxChildren){
                if(darry[tempIndex]<darry[(K*maxChildren)+j]){
                Maxed=(K*maxChildren)+j;
                }
                else{
                    Maxed=K;
                }
            }
            else{
                if(darry[Maxed]<darry[(K*maxChildren)+j]){
                    Maxed=(K*maxChildren)+j;
                }
            }
        }
        if(Maxed!=K){
            swap(darry[Maxed],darry[K]);
            K=Maxed;
            swapped=true;
        }
    else{
        swapped=false;
    }
    }while(swapped);



    }
    protected:

    private:
        int arraySize =10;
        int myArray[10];
        int* darry=myArray;
        int index=0;
        int maxChildren;
        int childrenCounter;
};

#endif // DARYHEAP_H

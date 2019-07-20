#ifndef QUICKSORTING_H
#define QUICKSORTING_H
#include <utility>
#include<iostream>
using namespace::std;

class QuickSorting
{
    public:

        int Seperate(int Y[],int start,int last){
            /*for(int k=start;k<=last;k++){
                cout<<" "<<Y[k];
            }
            cout<<"\n";*/
            int i=start-1;
            int pivot= Y[last];
            for(int j=start;j<=last-1;j++){
                    if(Y[j]<=pivot){
                            i++;
                        swap(Y[i],Y[j]);
                    }
                   /*for( int k=start;k<=last;k++){
                cout<<" "<<Y[k];
            }
            cout<<"\n";*/
                    }
                    swap(Y[i+1],Y[last]);
                    /*for( int k=start;k<=last;k++){
                cout<<" "<<Y[k];
            }*/
                    return i+1;
};

void actualSort(int arr[],int start, int last){
if (start<last){
    int part=Seperate(arr,start,last);
    cout<<endl;
    actualSort(arr,start,part-1);
    actualSort(arr,part+1,last);
}

}
};
#endif // QUICKSORTING_H

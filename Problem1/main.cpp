#include <iostream>
#include <utility>

using namespace::std;
 void PlacementSorting(int arr[], int mySize){
        bool swapped=true;
        //cout<<mySize<<endl;
            for(int modder=10;modder<100000000;modder*=10){
                swapped=true;
                while(swapped){
                swapped=false;
                    for (int i=0,j=1;j<mySize;i++,j++){
                    if(((arr[i]%modder)/(modder/10))>((arr[j]%modder)/(modder/10)))
                    {
                    swap(arr[i],arr[j]);
                    swapped=true;
                    }
                    for(int k=0;k<mySize;k++){
                    cout<<arr[k]<<" ";
                    }
                    cout<<modder<<endl;


}

}
}
};


int main(){
int arr[]={436,20,8795,2555,9001,16};
int mySize=sizeof(arr)/sizeof(arr[0]);
PlacementSorting(arr,mySize);

for(int k=0;k<mySize;k++){
                    cout<<arr[k]<<" ";
                    }


    return 0;
}

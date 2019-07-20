#include <iostream>
#include <utility>
using namespace std;

void Merger(int arr[],int c ,int v,int b){
int p,q,j,k;
q=v;
p=j=v-1;
cout<<q<<v<<p<<j<<endl;
while((c<=p)&&(q<=b)){
    if(arr[p]>arr[q]){
        p--;
        q++;
    }
    else if(arr[p]<arr[q]){
        break;
    }
}
k=q;
while(p<j){
    swap(arr[k],arr[j]);
    k--;
    j--;
}
for(int t=0; t<=b;t++){
    cout<<arr[t]<<" ";
}
cout<<endl;
}

void Breaker(int arr[],int L, int R){
      int m;
    if(R-L<2){
      m=L;
    }
    if (R-L>=2){
            m=(((R-L)+1)/2)+L;}
    cout<<m<<endl;
    if (R-L<2){
        if(arr[L]>arr[R]){
            cout<<arr[L]<<" "<<arr[R]<<endl;
            swap(arr[L],arr[R]);
        cout<<arr[L]<<" "<<arr[R]<<endl;
        }
    }
    else if(R-L>=2){
        Breaker(arr,L,m-1);
        Breaker(arr,m,R);
        for(int t=0; t<=R;t++){
    cout<<arr[t]<<" ";
}
cout<<endl;
    }
    Merger(arr,L,m,R);
}
void mergeSort(int arr[], int mySize){
    cout<<"Called"<<endl;
    int l=0;
    Breaker(arr,l,mySize-1);

}



int main()
{
    int arr[]={28,17,5,18,30,8};
    mergeSort(arr,6);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}

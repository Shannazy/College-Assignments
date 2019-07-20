#include <iostream>

using namespace std;
void ProblemFourA(){
    string User;
    cout<<"Please Enter your sentance\n";
    getline(cin, User);
    char Reverse[User.length()];
    for(int i =User.length()-1,j=0;i>=0&&j<User.length();i--,j++){
        Reverse[j]=User[i];
    }
    for(char i : Reverse){
        cout<<i;
    }
    cout<<"\n";
}
void ProblemFourB(int myArray[10][2],int sum){//The reason I have set bounds is because C++ wont let me put empty bounds. I know Java does, but don't really know how to use Java
int Column1;
int Column2;
for(Column1=0;Column1<10;Column1++){
    for(Column2=0;Column2<10;Column2++){
        //cout<<myArray[Column1][0]<<" + "<<myArray[Column2][1]<<endl; This was just a test to see if the code was running properly
        if((myArray[Column1][0]+myArray[Column2][1])==sum){
            cout<<"("<<myArray[Column1][0]<<" , "<<myArray[Column2][1]<<")"<<endl;
        }
    }
}
}
int main()
{

    cout<<"The problem will go in order"<<endl;
    ProblemFourA();

    int storedInt[10][2]={{0,0},{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7},{8,8},{9,9}};
    bool outOfBounds=true;
    int theirSum;
    while(outOfBounds==true){
    cout<<"Please Enter a number between 0 and 18"<<endl;
    cin>>theirSum;
    if(theirSum<0||theirSum>18){
        cout<<"That number is not within our bounds\n";
    }
    else{
        outOfBounds=false;
    }
    }
    ProblemFourB(storedInt,theirSum);



    return 0;
}

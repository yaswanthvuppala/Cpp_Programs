#include <iostream>

using namespace  std;

void change(int arr[]){
    for (int i=0;i<3;i++) arr[i]*=2;

}



void revers(int arr[],int size){
int i=0;int j=size-1;
for (int k=0;k<size/2;k++){
   if(i!=j){
    int temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;}
   i++;j--;

}


}

int main(){

int marks[]={1,2,3,2,52,4,5,1};
cout <<sizeof(marks)<<endl;
// change(marks);
int size=sizeof(marks)/sizeof(int);
cout<<marks[0];
for(int g=1;g<size;g++){
    bool dup =false;

    for(int h=g-1;h>=0;h--){
        if(marks[h]==marks[g]){
            dup=true;
        }

    }
    if(dup==false){
        cout<<"\n"<<marks[g];
    }
    
}
// for(int i=0;i<8;i++) cout<<marks[i];

revers(marks,size);

// int l=INT_MAX;
// int i;
// for( i=0;i<8;i++){

//  if(l>marks[i]){
    
//     l=marks[i];

//  }

}





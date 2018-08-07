#include<iostream>
using namespace std;

int main(){

  int n,i,j,Ar[50],temp = 0;

  cout<<"Enter your range : ";
  cin>>n;
  cout<<"\nPlease enter your data : ";

  for(i = 0 ; i < n+1  ; i++){

       if(i < n){
         cin>>Ar[i];
        }

       else{
          cout<<"\nOut of range\n"<<endl;
       }
  }

    for(i = 1; i <= n-1 ; i++)
    {
        temp=Ar[i];
        j = i-1;

        while((temp < Ar[j])&&(j >= 0))
        {
            Ar[j+1] = Ar[j];
            j = j-1;
        }

        Ar[j+1] = temp;
    }

    cout<<"\nSorted list is : ";
    for(i = 0 ; i < n ; i++)
    {
        cout<<Ar[i]<<" ";
    }

  return 0;
}



/* Name : Mazedul
   ID : 1737820124
    Year : 2nd
*/

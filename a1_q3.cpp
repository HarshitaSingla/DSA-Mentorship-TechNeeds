#include <iostream>

using namespace std;
int main(){
    int t,j,n,i,count;
  
    count=0;
    cout<<"Enter count of inputs";
    cin>>t;
    for(j=1;j<=t;j++){
        cout<<"Enter a number";
        cin>>n;
    
        for(i=1;i<=n/2;i++){
            if (n%i==0){
            count=count+1;
        }
        else{
            count=0;
        }
        }
    
        if (count==0){
            cout<<"prime";
        
        }
        else{
            cout<<"not prime";
            
        }
        }
    return 0;
}

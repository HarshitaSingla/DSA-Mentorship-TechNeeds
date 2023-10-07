
#include <iostream>

using namespace std;
int n;

int abc(n){
    if (n == 0) 
        return 1; 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 
  
 
int main()
{   int n;
    cout<<"Enter a number";
    cin>>n;
    cout << "Number of digits : " << abc(n); 
    return 0; 
} 
    

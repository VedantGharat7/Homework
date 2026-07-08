#include <iostream>
using namespace std;

int main(){
int sz =7;
int addi =0;
int prod =1;
    int arr[sz] = {2,5,3,4,1,1,2};
    for (int  i = 0; i < sz; i++)
    { addi = arr[i] + addi;
       prod*=arr[i];
    }
    cout << "addition is = " << addi << endl;
    cout << "Prodduct is = " << prod;
    
    


    return 0;
}
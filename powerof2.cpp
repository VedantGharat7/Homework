#include <iostream>
using namespace std;
bool number(int n){
cout <<"hi";
    int pow=1;
if (n==1)
{
    return 1;
}

    for ( int i = 1; i <=n; i++)
    {   pow*=2;
        if (n-pow==0)
        {
            return 1;
        }
        
    }return 0;
    






}

int main(){

if (number(1))
{
    cout << "its a power of 2";
}else{
    cout << "its not a power of 2";
}




    return 0;
}
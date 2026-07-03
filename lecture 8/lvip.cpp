#include <iostream>
#include <climits>
using namespace std;

int main(){
int smallest,largest,size,store;
size = 5;
 int nums [] = {22,1,19,5,2};
store =0;
smallest = INT_MAX;
largest = INT_MIN;
for ( int  i = 0; i < size; i++)
{
    if (nums[i] <smallest)
    {
        smallest = nums[i];
        store = i; // stores the index value
    }
    
} cout << "positional value =" << store;







    return 0;
}
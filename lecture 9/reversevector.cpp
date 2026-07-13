#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> & vec){
   int start =0; int end = vec.size()-1;
    while (start<end) // will stop after both of em meet in middle
    {
        swap(vec[start],vec[end]);
        start++;  end--;
    }
    
}





int main(){

vector<int>vec = {2,5,6,81,9,10};

reverse(vec);
cout << "The reverse array = ";
for ( int val:vec)
{
    cout << val << " ";
}



    return 0;
}
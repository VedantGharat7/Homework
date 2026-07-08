#include <iostream>
using namespace std;
#include <climits>
void creatingarr(int array[],int sz){  //function for creating array

    for (int i = 0; i < sz; i++)
    {
        cout << array[i] << " ";
    }cout << endl;
    


}
int maxi(int array[],int sz){ // function for findint the largest num
int largest = INT_MIN;
int MAXINDEX;
    for (int i = 0; i < sz; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
            MAXINDEX = i;
        }
    }
    return MAXINDEX;
}
int mini(int array[],int sz){  // function for finding the smallest num
int smallest = INT_MAX;
int MININDEX=0;
for (int i = 0; i < sz; i++)
{
    if (array[i]<smallest)
    {
        smallest = array[i];
        MININDEX = i;
    }
    
}
return MININDEX;
}


int main(){
int sz = 5;
int array[sz] = {24,2,1,7,19};
int maxindex = maxi(array,sz);
int minidex = mini(array,sz);

cout << "before = " ;
creatingarr(array,sz);
swap(array[maxindex],array[minidex]);


cout << "after = ";
creatingarr(array,sz);


    return 0;
}
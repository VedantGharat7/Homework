#include <iostream>
using namespace std;
void creatingarr(int array[],int sz){

    for (int i = 0; i < sz; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void unique(int array[],int sz){

    for (int i = 0; i < sz; i++) // main numbers
    {
        int count =0;
        for (int j = 0; j < sz;j++) // checking every main numbers 
        {
           if (array[i]== array[j])
           {
            
            count++;
           }
              
        } if (count ==1)
           {
            cout << array[i] << "  ";
           }
        
    }
    
}


int main(){
 int sz = 6;
 int array[sz] = {1,1,4,2,6,2};
cout << "normal array = ";
creatingarr(array,sz);
cout << endl;
cout << "only unique array numbers = " << " ";
unique(array,sz);


    return 0;
}
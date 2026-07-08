#include <iostream>
using namespace std;
void inputarr(int array[],int sz){   //function for input of user
    cout << "Enter the " << sz << " "<< "Elements: ";
    for (int i = 0; i < sz; i++)
    {
        cin >> array[i];
    }
    
}
void arr(int array[],int sz){  //function for creating arrays
for (int  i = 0; i < sz; i++)
{
    cout << array[i] <<" ";
}cout << endl;


}
int sum(int array[],int sz){        // function for sumation
int addi =0;
 for (int  i = 0; i <sz ; i++)
 {
    addi+=array[i];
 }
 return addi;

}
int product(int array[],int sz){                 // function for multiplication
int prod =1;
for (int  i = 0; i < sz; i++)
{
    prod*=array[i];
}

return prod;


}

int main(){
 
int sz =3;
int array[sz] = {1,4,5};

inputarr(array,sz);     //input for array
cout << "array = "; arr(array,sz);  //creating array
cout << "Sum of arrays = " <<sum(array,sz) << endl; //sumation of array
cout << "product of arrays = " << product(array,sz); //production(ayo?) of array



    return 0;
}
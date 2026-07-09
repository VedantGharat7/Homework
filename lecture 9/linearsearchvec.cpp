#include <iostream>
#include <vector>
using namespace std;
int findingtarger(vector<int>& vec,int target ){

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i]==target)
        {
            return i; // found
        }
        
    }
    return -1; // not found
}
int main(){
    
    int target = 7;
    vector<int>vec = {2,5,7,8,1,0};
    vec.size();  
cout << "The positional value of target = " << findingtarger(vec,target);


return 0;
}
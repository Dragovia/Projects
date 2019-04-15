#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
typedef  int arrayType[];
void showValues(arrayType,int);
int HighValue(arrayType,int);
int main()
{
    int set1[5] = {-2,6,0,4,3};
   //showValues(set1,5);
   HighValue(set1,5);

return 0;
}

void showValues(arrayType nums, int size)
{
    for(int i = 0; i < size; i++){
       // cout << nums[i]<<endl;
    }

}

int HighValue(arrayType nums,int size)
{   int i = 0;
    for(i; i  < size; i++){
        if( nums[0] < nums[i])
        {
            nums[0] == nums[i];
        }
         return  nums[0];
    }
}



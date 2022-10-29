#include <iostream>
using namespace std;

int main() {
    int nums[] = {2,7,11,15}; //initializing the array
    int al = sizeof(nums)/sizeof(nums[0]); //calculating the length of array
     cout<<"The array is: ";
     for(int y=0; y<al; y++){
      cout<<nums[y]<<",";
  }
  cout<<"\n";
    // 2 checks for whether the length of array is between 2 and 104
    if(al<2){
      cout<<"The length of array is too short";
      return 0;
    }
    else if( al>104){
      cout<<"The length of array is too long";
      return 0;
    }

    // 2 checks for whether the array contains any number which is lower than -109 or greater than 109
    for(int x=0; x<al;x++){
      if(nums[x]<-109 || nums[x]>109){
        cout<<"The array contains unacceptable number(s)";
        return 0;
      }
    }

    // getting the target sum from the user
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    if(target<-109 || target>109){
      cout<<"The target value is invalid";
      return 0;
    }
  // looping through array to see if there's any solution and returning the solution if found
  for(int i=0;i<al;i++)
  {
    for(int j = i+1;j<al;j++)
        {
          if(nums[i]+nums[j]==target)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
                cout<<"Because nums["<<i<<"]"<<" and nums["<<j<<"] == "<<target<<", we return "<<"["<<i<<","<<j<<"]"<<endl;
                return 0;
                
            }
        }
}

  // return this in case there was no solution found
  cout<<"This target isn't possible to be acquired from adding any 2 numbers from the given array.";
  return 0;
}

/* Tyler Allen
2-19-15
CS111
Lab5-2
This program will ask the user for a grade (A, B, C, D, or F) and display one of the messages depending on the grade*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  char grade;
  bool pass=false;
  cout<<"Please enter a grade(A, B, C, D, or F)";
  cin>>grade;
  if((grade==67||grade==66)||(grade==97||grade==98)){
    cout<<"Good job"<<endl;
    pass=true;
  }
  else if(grade==67||grade==99){
    cout<<"OK"<<endl;
    pass=true;
  }
  else if((grade==68||grade==100)||(grade==70||grade==102)){
    cout<<"Work harder"<<endl;
    pass=false;
  }
  else{
    cout<<"Invalid grade"<<endl;
  }
  if(pass==true){
    cout<<"Congratulations! You have Passed!"<<endl;
  }


  return 0;
}

/* A data analysis application compares different types of values, such as student marks,
product prices, and sensor readings. Design a generic function that determines the larger
of two values regardless of their data type.*/


#include <iostream>
using namespace std;

// Function Template
  template <typename T>
   T myMax(T x, T y){

       return (x > y) ? x : y;
   }
 int main(){

// Comparing student marks
  cout << "Higher Marks: "
       << myMax<int>(80, 90) << endl;

// Comparing product prices
  cout << "Higher Price: "
       << myMax<double>(800.20, 899.45) << endl;
       
// Comparing sensor readings
  cout << "Higher Sensor Reading: "
       << myMax<float>(45.5f, 70.8f) << endl;

 return 0;

}
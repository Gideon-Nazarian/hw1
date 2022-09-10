/* Write your test code for the ULListStr in this file */

#include <iostream>
#include "ulliststr.h"
using namespace std;


int main(int argc, char* argv[])
{
  //variables
  string num0 = "0";
  string num1 = "1";
  string num2 = "2";
  string num3 = "3";
  string num4 = "4";
  string num5 = "5";
  string num6 = "6";
  string num7 = "7";
  string num8 = "8";
  string num9 = "9";
  string num10 = "10";
  string num11 = "11";
  
 //refrences to variables
  string &ref0 = num0;
  string &ref1 = num1;
  string &ref2 = num2;
  string &ref3 = num3;
  string &ref4 = num4;
  string &ref5 = num5;
  string &ref6 = num6;
  string &ref7 = num7;
  string &ref8 = num8;
  string &ref9 = num9;
  string &ref10 = num10;
  string &ref11 = num11;

 //array to hold refrences (although not used for the sake of ridding compiler warnings to have all variables used when testing cases)
  string ref[12];
  ref[0] = ref0;
  ref[1] = ref1;
  ref[2] = ref2;
  ref[3] = ref3;
  ref[4] = ref4;
  ref[5] = ref5;
  ref[6] = ref6;
  ref[7] = ref7;
  ref[8] = ref8;
  ref[9] = ref9;
  ref[10] = ref10;
  ref[11] = ref11;
  
  
  
  // test pushback (empty case)
  /*
  ULListStr dat;       // create list
  dat.push_back(ref11);   // push back on empty list
  cout << dat.size() << endl; // 1
  cout << dat.get(0) << endl; // 11
  */

  // test pushfront (emptycase)
  /*
  ULListStr dat;       // create list
  dat.push_front(ref10);   
  cout << dat.size() << endl; // 1
  cout << dat.get(0) << endl; // 10
  */

  // test pushback (MultiPush W/1Node)
  /*
  ULListStr dat;       // create list
  dat.push_front(ref10);
  dat.push_back(ref9);
  dat.push_back(ref5);   
  cout << dat.size() << endl; // 3
  cout << dat.get(0) << endl; // 10
  cout << dat.get(1) << endl; // 9
  cout << dat.get(2) << endl; // 5
  */

  // test pushfront (MultiPush W/1Node)
  /*
  ULListStr dat;       // create list
  dat.push_back(ref8);
  dat.push_front(ref10);
  dat.push_front(ref2);   
  cout << dat.size() << endl; // 3
  cout << dat.get(0) << endl; // 2
  cout << dat.get(1) << endl; // 10
  cout << dat.get(2) << endl; // 8
  */

  // test pushfront (MultiPush W/ Node > 1)(checking if linking properly)
  /*
  ULListStr dat;       // create list
  dat.push_front(ref5);
  dat.push_front(ref6);
  dat.push_front(ref7);
  dat.push_front(ref8);
  dat.push_front(ref9);
  dat.push_front(ref10);
  dat.push_front(ref11);
  dat.push_front(ref0);
  dat.push_front(ref1);
  dat.push_front(ref2);
  dat.push_front(ref3);
  dat.push_front(ref4);   
  cout << dat.size() << endl; // 12
  cout << dat.get(0) << endl; // 4
  cout << dat.get(1) << endl; // 3
  cout << dat.get(2) << endl; // 2
  cout << dat.get(3) << endl; // 1
  cout << dat.get(4) << endl; // 0
  cout << dat.get(5) << endl; // 11
  cout << dat.get(6) << endl; // 10
  cout << dat.get(7) << endl; // 9
  cout << dat.get(8) << endl; // 8
  cout << dat.get(9) << endl; // 7
  cout << dat.get(10) << endl; // 6
  cout << dat.get(11) << endl; // 5
  */

  // test pushback (MultiPush W/ Node > 1)(checking if linking properly)
  /*
  ULListStr dat;       // create list
  dat.push_back(ref0);
  dat.push_back(ref2);
  dat.push_back(ref4);
  dat.push_back(ref6);
  dat.push_back(ref8);
  dat.push_back(ref10);
  dat.push_back(ref1);
  dat.push_back(ref3);
  dat.push_back(ref5);
  dat.push_back(ref7);
  dat.push_back(ref9);
  dat.push_back(ref11);   
  cout << dat.size() << endl; // 12
  cout << dat.get(0) << endl; // 0
  cout << dat.get(1) << endl; // 2
  cout << dat.get(2) << endl; // 4
  cout << dat.get(3) << endl; // 6
  cout << dat.get(4) << endl; // 8
  cout << dat.get(5) << endl; // 10
  cout << dat.get(6) << endl; // 1
  cout << dat.get(7) << endl; // 3
  cout << dat.get(8) << endl; // 5
  cout << dat.get(9) << endl; // 7
  cout << dat.get(10) << endl; // 9
  cout << dat.get(11) << endl; // 11
  */

  // test popback (1 element in 1 Node)
  /*
  ULListStr dat;       // create list
  dat.push_back(ref11);   // push back on empty list
  cout << dat.size() << endl; // 1
  cout << dat.get(0) << endl; // 11
  dat.pop_back();
  cout << dat.size() << endl; // 0
  */

  // test popfront (1 element in 1 Node)
  /*
  ULListStr dat;       // create list
  dat.push_back(ref11);   // push back on empty list
  cout << dat.size() << endl; // 1
  cout << dat.get(0) << endl; // 11
  dat.pop_front();
  cout << dat.size() << endl; // 0
  */

  // test popfront/front() (multiple element in 1 Node)
  /*
  ULListStr dat;       // create list
  dat.push_back(ref11);   // push back on empty list
  dat.push_front(ref10);
  dat.push_front(ref4);
  cout << dat.size() << endl; // 3
  cout << dat.front() << endl; // 4
  dat.pop_front();
  cout << dat.get(0) << endl; // 10
  cout << dat.size() << endl; // 2
  */

  // test popback/back() (multiple element in 1 Node)
  /*
  ULListStr dat;       // create list
  dat.push_back(ref11);   // push back on empty list
  dat.push_front(ref10);
  dat.push_front(ref4);
  cout << dat.size() << endl; // 3
  cout << dat.back() << endl; // 11
  dat.pop_back();
  cout << dat.back() << endl; // 10
  cout << dat.size() << endl; // 2
  */

  // test popback/back() (multiple element in multiple Nodes)
  /*
  ULListStr dat;       // create list
  dat.push_front(ref11);   
  dat.push_front(ref10);
  dat.push_front(ref4);
  dat.push_front(ref6);   
  dat.push_front(ref7);
  dat.push_front(ref5);
  dat.push_front(ref1);   
  dat.push_front(ref2);
  dat.push_front(ref3);
  dat.push_front(ref8);   
  dat.push_front(ref9);
  dat.push_front(ref0);
  cout << dat.size() << endl; // 12
  cout << dat.back() << endl; // 11
  dat.pop_back();
  dat.pop_back();
  dat.pop_back();
  cout << dat.back() << endl; // 6
  cout << dat.size() << endl; // 9
  */

  // test popfront/front() (multiple element in multiple Nodes)
  /*
  ULListStr dat;       // create list
  dat.push_front(ref11);   
  dat.push_front(ref10);
  dat.push_front(ref4);
  dat.push_front(ref6);   
  dat.push_front(ref7);
  dat.push_front(ref5);
  dat.push_front(ref1);   
  dat.push_front(ref2);
  dat.push_front(ref3);
  dat.push_front(ref8);   
  dat.push_front(ref9);
  dat.push_front(ref0);
  cout << dat.size() << endl; // 12
  cout << dat.front() << endl; // 0
  dat.pop_front();
  dat.pop_front();
  dat.pop_front();
  cout << dat.front() << endl; // 3
  cout << dat.size() << endl; // 9
  */

  // test  Multiple funciton 
  /*
  ULListStr dat;       // create list
  dat.push_front(ref11);   
  dat.push_back(ref10);
  dat.push_front(ref4);
  dat.push_front(ref6);   
  dat.push_back(ref7);
  dat.push_front(ref5);
  dat.push_front(ref1);   
  dat.push_front(ref2);
  dat.push_front(ref3);
  dat.push_back(ref8);   
  dat.push_back(ref9);
  dat.push_front(ref0);
  cout << dat.size() << endl; // 12
  cout << dat.front() << endl; // 0
  dat.pop_front();
  dat.pop_back();
  dat.pop_back();
  dat.pop_front();
  dat.pop_front();
  cout << dat.front() << endl; // 1
  cout << dat.back() << endl; // 7
  cout << dat.size() << endl; // 7
  */

  // Using get throughout the test cases has yielded results for 
  // All cases of code in the getValAtLoc method.

  return 0;
}

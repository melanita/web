#include <iostream>
#include <string>
using namespace std;

/* 
  You will have to implement a function that will use C++ string object
  in order to reverse  the letter in each word of a sentence.

  INFO:
  http://www.math.bas.bg/~nkirov/2012/WCP/STL/STL.pdf (string)
  http://anaturb.net/C/string_exapm.htm
  http://www.cprogramming.com/tutorial/string.html
  https://www.youtube.com/watch?v=2_znS5i92pM
  
  
  Example:
  I am born in a village => I ma nrob ni a egalliv
*/
string rev_sent(const string s)
{
  /* Write your code here */
}

int main(int argc, char** argv)
{
  int i;
  const string sentence_in[] = {"We are born in this village", "", "GitHub", "I", "wow wow wow", "Miami is a big city"};
  const string sentence_out[] = {"eW era nrob ni siht egalliv", "", "buHtiG", "I", "wow wow wow", "imaiM si a gib ytic"};
  
  for (i = 0; i < sizeof(sentence_in)/sizeof(sentence_in[0]); i++)
  {
    cout << sentence_out << endl << rev_sent(sentence_in[i]) << endl;
    cout << "Test " << i+1 << ": ";
    assert( rev_sent(sentence_in[i]) == sentence_out[i] );
    cout << "OK" << endl;
  }
  
  return 0;
}

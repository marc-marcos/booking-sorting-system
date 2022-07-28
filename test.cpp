// Attempting to implement bubble sort but to vectors and to strings

#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char *argv[])
{
   std::vector<std::string> v = {"asdñflkj", "añsoijga", "zsdñowig", "qprguyadjf", "voiuhgqru"};

   int i;
   for (i = 0; i < v.size()-1; ++i) {
      int j;
      for (j = 0; j < v.size()-1; ++j) {
         if (v[j] > v[j+1]) {
            string temp = v[j+1];
            v[j+1] = v[j];
            v[j] = temp; 
         } 
      }
   }

   for (i = 0; i < v.size(); ++i) {
     cout << v[i] << endl; 
   }
}

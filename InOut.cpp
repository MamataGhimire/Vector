#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &vec)
{
    for(int i=0;i<vec.size();i++)
  {
     cout<<vec[i];
  }
}

int main() {
    
  vector<int>vec;
  int length;
  
  cout<<"enter the size of your vector"<<endl;
  cin>>length;
  cout<<"enter  your elements"<<endl;
  
  for(int i=0;i<length;i++)
    {
      int data;
      cin>>data;
      vec.push_back(data);
  }
  
  display(vec);
  
 return 0;
}

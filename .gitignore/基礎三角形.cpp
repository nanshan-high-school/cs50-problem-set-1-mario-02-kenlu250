#include <iostream>
using namespace std;

int main(){
  int height;
  cout <<"請輸入1-8的一個數字:";
  cin >> height;
  if(height<1 || height>8)
    cout<<"母湯";
  else
    for(int x=1; x<height+1; x++){
      for(int y=height; y>x; y--){
        cout<< " ";
      }
      for(int y=1; y<=x; y++){
        cout<< "#";
      }
      cout<< "\n";
    }
}

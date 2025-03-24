#include <string>
#include <iostream>
#include <stack>
using namespace std;

/*
  最大化vk<-==可以改变一个字符
  vkk->vkvk
  vkv->vk
  所以本质是判断能不能多一个
  能不能多一个？===>有没有vv kk的情况 其他的比如vkvk vkv就没有必要
  可以用栈<-=-只关心相邻的vk 和括号不一样
  能过92分
*/
stack<char> st;
string in;
int a;
int main()
{ 
  cin >> a;
  cin >> in;
  int cnt=0,diff=0;

  for(int i=0;in[i]!='\0';i++){
    if(i==0){
      st.push(in[i]);
      continue;
    }

    if(st.size()&&st.top()=='V'&&in[i]=='K'){
      cnt++;
      //st.pop();
      //continue;
    }

    if(st.size()&&st.top()==in[i]){
      if(in[i]=='V'&&in[i+1]=='K') continue;
      diff++; 
    }
  
    st.push(in[i]);
  }

  if(diff) cout << cnt+1;
  else cout << cnt;

}
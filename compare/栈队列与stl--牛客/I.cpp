#include <stack>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    class Solution {
public:
    long long legalExp(string str) {
        stack<long long> st; // 用一个栈来处理后缀表达式
        int lll = str.size();
        
        for (int i = 0; i < lll; i++) {
            // 处理数字字符
            if (str[i] >= '0' && str[i] <= '9') {
                long long tmp = 0;
                // 处理多个连续的数字
                while (i < lll && str[i] >= '0' && str[i] <= '9') {
                    tmp = tmp * 10 + (str[i] - '0');
                    i++;
                }
                i--;  // 由于循环最后的i++，我们需要回退一下
                st.push(tmp); // 将数字压入栈
            }
            // 处理操作符 #
            else if (str[i] == '#') {
                // #只是作为分隔符，什么也不做
                continue;
            }
            // 处理加法运算
            else if (str[i] == '+') {
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                st.push(a + b); // 将两个数字相加并压入栈
            }
            // 处理减法运算
            else if (str[i] == '-') {
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                st.push(a - b); // 将两个数字相减并压入栈
            }
            // 处理乘法运算
            else if (str[i] == '*') {
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                st.push(a * b); // 将两个数字相乘并压入栈
            }
        }
        
        // 最终栈中只剩下结果
        return st.top();
    }
};

    }
        
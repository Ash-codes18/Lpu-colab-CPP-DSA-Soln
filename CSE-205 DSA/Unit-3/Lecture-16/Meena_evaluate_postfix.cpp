#include <bits/stdc++.h>
using namespace std;


int evaluatePostfix(string exp) {

    stack<int> st;

    for (int i = 0; i < exp.size(); ++i) {
 
        if (exp[i] == ' ')
            continue;

        if (isdigit(exp[i])) {
            int num = 0;
            while (isdigit(exp[i])) {
                num = num * 10 + (exp[i] - '0');
                i++;
            }
            i--;
            st.push(num);
        }

        else {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (exp[i]) {
                case '+':
                    st.push(val2 + val1);
                    break;
                case '-':
                    st.push(val2 - val1);
                    break;
                case '*':
                    st.push(val2 * val1);
                    break;
                case '/':
                    st.push(val2 / val1);
                    break;
            }
        }
    }
    return st.top();
}


int main() {
    string exp;
    getline(cin,exp);

    cout << evaluatePostfix(exp);
    return 0;
}

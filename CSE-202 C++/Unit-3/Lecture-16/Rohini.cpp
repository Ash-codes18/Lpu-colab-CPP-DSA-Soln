    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        int a, b;
        cin >> a >> b;
        
            if (a < 0) {
                a=0;
                
            }
        for (int i = a; i <= b; i++) {
    
            
            vector<int> v;
            int num = i;

            if (num == 0) {
                v.push_back(0);
            }
            else {
                while (num > 0) {
                    int rem = num % 10;
                    v.push_back(rem);
                    num = num / 10;
                }
            }

            string text = "";
            for (int j = v.size() - 1; j >= 0; j--) {
                int digit = v[j];
                switch (digit) {
                    case 0:
                        text += "Zero ";
                        break;
                    case 1:
                        text += "One ";
                        break;
                    case 2:
                        text += "Two ";
                        break;
                    case 3:
                        text += "Three ";
                        break;
                    case 4:
                        text += "Four ";
                        break;
                    case 5:
                        text += "Five ";
                        break;
                    case 6:
                        text += "Six ";
                        break;
                    case 7:
                        text += "Seven ";
                        break;
                    case 8:
                        text += "Eight ";
                        break;
                    case 9:
                        text += "Nine ";
                        break;
                }
            }
            cout << "Number - " << i << "; Text - " << text << endl;
        }

        return 0;
    }

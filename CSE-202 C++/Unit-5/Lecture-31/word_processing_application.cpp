    #include <iostream>
    #include <string>
    #include <algorithm>
    #include <vector>
    using namespace std;

    int main(){


        int wl=-1;
        if(wl==0){
            cout<<"new delete";
        }   

        string s;
        getline(cin,s);


        vector<string> words;

        string word;

        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                word+=s[i];
            }

            else if(s[i]==' ' || i==s.length()-1){
                sort(word.begin(),word.end());
                words.push_back(word);
                word.clear();
            }

        }

        if (!word.empty()) {
            sort(word.begin(), word.end());
            words.push_back(word);
    }
        
        for(auto i:words){
            cout<<i<<" ";
        }

        return 0;
    }
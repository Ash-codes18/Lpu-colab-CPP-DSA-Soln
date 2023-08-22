// You are using GCC
#include <iostream>
using namespace std;


enum LetterType{
  
  vowel,
  consonant,
  invalid,
    
};


class LetterAnalyzer{
   
    public:
            
            LetterType anal(char x){
                
                if(isalpha(x)){
                    
                    if(x=='a' || x=='A' || x=='e' || x=='E' || x=='o' || x=='O' || x=='u' || x=='U' || x=='i' || x=='I' ){
                        
                        return vowel;
                        
                    }
                    
                    else{
                        return consonant;
                    }
                    
                }
                else{
                    return invalid;
                }
                
            }
};


int main(){
    
    char x;
    cin>>x;
    
    LetterAnalyzer l;
    LetterType ans = l.anal(x);
    
    
    switch(ans){
        case vowel:
        cout<<"vowel";
        break;
        case consonant:
        cout<<"consonant";
        break;
        case invalid:
        cout<<"Invalid input";
    }
    
    
    
    return 0;
}
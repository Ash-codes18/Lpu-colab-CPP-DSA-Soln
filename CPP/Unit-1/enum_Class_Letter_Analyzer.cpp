#include <iostream>
#include <cctype>
using namespace std;

enum class LetterType{
    vowel,
    consonant,
    invalid
};
class LetterAnalyzer{
    public:
    static LetterType analyzer(char ch){
        ch = toupper(ch);
        if (isalpha(ch))
        {
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                return LetterType::vowel;
            }else{
                return LetterType::consonant;
                
            }
        }
    return LetterType::invalid;
    
}
};

int main ()
{
    char input;
    cin >> input;
    LetterType result = LetterAnalyzer::analyzer(input);
    switch(result)
    {
        case LetterType::vowel:
        cout << "vowel";
        break;
        case LetterType::consonant:
        cout<< "consonant";
        break;
        default:
        cout<<"Invalid input";
    }
    return 0;
}




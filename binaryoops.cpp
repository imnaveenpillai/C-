#include <iostream>
using namespace std;

class binary{
    string s;

    public:
    void begin();
    void read();
    void check();
    void display();
    void ones_complement();
    void twos_complement();
};

void binary :: begin(){
    cout << "Your input is: ";
    display();
}

void binary :: read(){
    cout << "Enter the binary input: ";
    cin >> s;
    check();
}

void binary :: check(){
    for (int i=0; i<s.length(); i++){
        if (s[i]!='0' && s[i]!='1'){
            cout << "Not valid Input.";
            exit(0);
        }    
    }
}

void binary ::display(){
    cout << s << endl;
}

void binary :: ones_complement(){
    cout << "ones complement is: ";
    for (int i=s.length()-1; i>=0; i--){
        if (s[i]=='0') s[i]='1';
        else s[i] = '0';
    }
    display();
}

void binary :: twos_complement(){
    int tempflag = 0;
    for (int i=s.length()-1; i>=0; i--){
        
        if (!tempflag){
            if (s[i]=='0'){ 
                s[i]='1';
                tempflag = 1;
            }
            else s[i]='0';
        }
    }
    cout << "twos complement is: ";
    display();
}

int main()
{
    binary b;
    b.read();
    b.begin();
    b.ones_complement();
    b.twos_complement();
    return 0;
}
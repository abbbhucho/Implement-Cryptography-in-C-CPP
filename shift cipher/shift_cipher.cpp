#include<iostream>
using namespace std;
  string encrypt(string text,int shift){
  
      string result = "";
      for(int i=0;i<text.length();i++)
      {
          //for uppercase letters
          if(isupper(text[i]))
          {
            result += char((text[i]+shift-65)%26 +65);
          }
          //for lowercase letters
          else
          {
            result += char((text[i]+shift-97)%26+97);
          }
          
      }
    return result;  
    }
  string decrypt(string result,int (shift)){
      string reverse = "";
      for(int i=0;i<result.length();i++)
      {
          //for uppercase letters
          if(isupper(result[i]))
          {
              reverse += char((result[i]+shift-65)%26 + 65);
              if(reverse[i] =='T')
              {
                reverse[i] = ' ';
              }    
          }
          //for lowercase letters
          else
          {
              reverse += char((result[i]+shift-97)%26 + 97);
          }
                  
      }    
    return reverse; 
  }
int main(){
    string str="";
    int shift = 4;
    cout<<"Enter the string\n(use # to end your sentence)";
    getline(cin, str, '#');
    cout<<"enter the shift(by default 4 for caesar cipher)\n";
    cin>>shift; 
    string result = encrypt(str,shift);
    cout<<"The cipher encrypted is\n"<<result<<endl;
    cout<<"The original message is\n"<<decrypt(result,26-shift)<<endl;
    

}

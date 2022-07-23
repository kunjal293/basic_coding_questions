 //syntax to input white spaces in strings
 // get line is iused first is cin,secind one is to be input and third one is the deluminator
 #include<iostream>
 #include<cstring>
 using namespace std;
 int main ()
 {
     string s;
     s="hello world";
      cout<<s<<endl;

    s.push_back('l');
     s.push_back('e');
     s.push_back('a');
    s.push_back('r');
     s.push_back('n');
     cout<<s<<endl;
     s.pop_back();
     s.pop_back();
     s.pop_back();
      cout<<s<<endl;
      s+=",learning strings";
      cout <<s<<endl;
     getline (cin,s);
     cout<<"user input "<<s<<endl;
     cout<<"user input "<<s.length()<<endl;
     for( int i=0;i<=s.length();i++)

     {
         cout<<s[i]<<" ";
     }

 return 0;
 }

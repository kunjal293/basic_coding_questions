


#include<iostream>
#include<cstring>
using namespace std;
//////////////////////////BLUEPRINT/////////////////
class Car{
 public:
     char name[100];
     int seats;
     int mileage;
     int price;

     //1. default constructor
     Car(){
        cout << "Inside default constructor" << endl;
      }


      //2. parameterized constructor
      Car(char *n, int p, int s, int m){
         cout << " inside Parameterized constructor" << endl;
         strcpy(name,n);
         price = p;
         mileage = m;
         seats = s;
       }


       // 3. inside parameterized constructor
       Car(int p, int m, int s, char *x){
         cout << "inside parameterized constructor " << endl;
          strcpy(name,x);
         price = p;
         mileage = m;
         seats = s;
       }
       // 4. copy constructor
       Car(Car &x){
           cout << "inside copy constructor" << endl;
          strcpy(name, x.name);
          price = x.price;
          seats = x.seats;
           mileage = x.mileage;
        }
        //5. copy Assignment operator
        void operator =(Car x){
         cout << "inside copy assignment operator: " << endl;
               strcpy(name, "Ferrari");
          price = x.price;
          seats = x.seats;
           mileage = x.mileage;

         }
         //Operator overloading : D += C
         void operator += (Car& x){
            strcat(name, x.name);
          price += x.price;
          seats += x.seats;
           mileage += x.mileage;

         }


        //6. Destructer
        ~Car(){
         cout << "deleting car is: " << name << endl;
        }


     void print(){
          cout << "Name : " << name << endl;
           cout << "price: " << price << endl;
           cout  << "mileage: " << mileage << endl;
           cout << "seats: " << seats << endl;

      }
 };
////////////////////////////////Blueprint////////////////////
int main(){
 Car A;
 //BMW,2,6,10
 //A.name = "BMW";
 A.name[0] = 'B';
  A.name[1] = 'M';
  A.name[2] = 'W';
  A.name[3] = '\0';
 A.price = 10;
 A.seats = 2;
 A.mileage = 6;

 Car B("Maruti", 20, 5 , 10);
 Car C(10, 16, 4, "Swift");
 Car D(A);
 Car E("i10",4,6,10);

 // Copy Assignment Operator
 D=C;
 D+=E;
 //Car B;
 //strcpy(B.name, "Maruti");
 //B.seats = 5;
 //B.price = 20;
 //B.mileage = 12;

 //cout << "name: " << B.name << endl;
 //cout << "price: " << B.price << endl;
 //cout << "mileage: " << B.mileage << endl;
// cout << "seat: " << B.seat << endl;
A.print();
B.print();
C.print();
D.print();
E.print();
  return 0;
 }

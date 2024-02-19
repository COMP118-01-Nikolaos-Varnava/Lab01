/** \file Lab01.cpp
* \This is lab 1 before the advanced function
* \details Longer Description of the File
* \author Nikolaos Varnava
* \version 0.1
* \date 2017-2017
* \copyright University of Nicosia.
*/
#include<iostream>
using namespace std;
void drawHorizontalLine(int length,char ch){
    for(int i=0;i<length;i++){
        cout<<ch;
    }
    cout<<endl;
}
void drawVerticalLine(int height,char ch){
    for(int i=0;i<height;i++){
        cout<<ch<<endl;
    }
    cout<<endl;
}
void drawSquare(int size,char ch){
    for(int i=0;i<size;i++){
        cout<<ch;
    }
    cout<<endl;
    for (int i = 1; i < size - 1; i++) {
        cout << ch;
        for (int j = 1; j < size - 1; j++) {
            cout << " ";
        }
        cout << ch << endl;
    }
    for (int i = 0; i < size; i++) {
        cout << ch;
    }
    cout << endl;
}
void drawRectangle(int height,int length,char ch){
        for(int i=0;i<length;i++){
            cout<<ch;
        }
        cout<<endl;
        for (int i = 1; i < height - 1; i++) {
             cout << ch;
            for (int j = 1; j < length - 1; j++) {
                 cout << " ";
             }
            cout << ch << endl;
         }
         for (int i = 0; i < length; i++) {
             cout << ch;
         }
         cout << endl;
 }
int main(){
    char x=' ';
    int a,b,c,option;
    cout<<"Menu:"<<endl;
    cout<<"1) Draw a horizontal line"<<endl;
    cout<<"2) Draw a vertical line"<<endl;
    cout<<"3) Draw a square"<<endl;
    cout<<"4) Draw a rectangle"<<endl;
    cout<<"5) Quit"<<endl;
    cout<<"Enter your option: ";
    cin>>option;
    switch(option){
        case 1:
            cout<<"Enter length: ";
            cin>>a;
            cout<<"Enter character: ";
            cin>>x;
            cout<<"Horizontal Line("<<a<<",'"<<x<<"')"<<endl;
            drawHorizontalLine(a,x);
            break;
        case 2:
            cout<<"Enter height: ";
            cin>>b;
            cout<<"Enter character: ";
            cin>>x;
            cout<<"Vertical Line("<<b<<",'"<<x<<"')"<<endl;
            drawVerticalLine(b,x);
            break;
        case 3:
            cout<<"Enter the size: ";
            cin>>c;
            cout<<"Enter the character: ";
            cin>>x;
            cout<<"Square("<<c<<",'"<<x<<"')"<<endl;
            drawSquare(c,x);
            break;
        case 4:
            cout<<"Enter the height: ";
            cin>>b;
            cout<<"Enter the length: ";
            cin>>a;
            cout<<"Enter the character: ";
            cin>>x;
            cout<<"Rectangle("<<b<<","<<a<<",'"<<x<<"')"<<endl;
            drawRectangle(b,a,x);
            break;
        case 5:
            break;
        default:
            cout<<"Invalid input."<<endl;
            break;
    }
    
    return 0;
}


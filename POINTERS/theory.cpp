//POINTERS IN C++
/*A compiler makes use of a SYMBOL TABLE table that maps corresponding variable names,classes,function to their address
in the memory.e.g- int num=5(assume address of 5 in memory is 120 ) so in SYmbol table num-->120 is mappped so as to return content 
at address 120 for num variable. */
#include<iostream>
using namespace std;
int main(){
    int num=5;
    //address operator ---> '&' this will return the address in hexadecimal format
    cout<<&num<<endl;
    // a pointer is used to store address 
    //********** never just declare a pointer and leave always initialize it with something**************
    //eg. int *ptr; cause it may randomly point to any address in memory 
    // DECLARING A POINTER
    int *ptr=&num;//int *ptr means ptr is a pointer to int
    cout<<"Value at address:"<<*ptr<<endl;//this gives value at address pointed by ptr,* is DEREFERENCE OPERTOR("value pointed to by")
    cout<<"address in ptr:"<<ptr<<endl;

    //Printing Adress Of Pointer
    cout<<"address of ptr:"<<&ptr<<endl;

}

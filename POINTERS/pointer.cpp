#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    //p=p+1; ye vala khali yaha pe p ka value update karega
    *p=*p+1;//ye p ke address pe jo value hai vo update kardega
}
int getSum(int arr[],int n){
    //cout<<endl<<"Size-->"<<sizeof(arr)<<endl;//this will give 8bytes because arr[] here is a pointer to array in main func
    /*BENEFIT ye hai ki hum array ka ek part send kar sakte hai rather tha whole array*/
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}
int main(){
    int arr[6]={2,5,10,48,55,66};
    cout<<"Sum is-->"<<getSum(arr+3,3)<<endl;//ye last ke 3 elements ka sum dega
    cout<<"array ka size-->"<<sizeof(arr)<<endl;//4 multiplied by no.of elements
    int *ptr=&arr[0];
    cout<<"Pointer Ka size-->"<<sizeof(ptr)<<endl;
    cout<<"address of arr "<<arr<<endl;
    cout<<"Value of 1st Block of array "<<arr[0]<<endl;
    cout<<"Value of 1st Block of array "<<*arr<<endl;
    cout<<"Value +1--> "<<*arr+1<<endl;//vo vali value +1 i.e 2+1=3
    cout<<"Next adress vali value"<<*(arr+1)<<endl;
    cout<<"address of 2nd Block of array "<<&arr[1]<<endl;
    cout<<"pehli value starting address "<<*arr<<endl;
    cout<<"Value "<<*arr+1<<endl;//value at first block is 2 so answer=3
    cout<<"Value at !st index "<<*(arr+1)<<endl;
    //IMP--------------------arr[i]=*(arr+i)  OR i[arr]=*(i+arr)---------------------------------------------
    int i=2;
    cout<<"Value at ith index"<<i[arr]<<endl;
    cout<<"Value at 2nd index"<<2[arr]<<endl;
    Pointer ka size hota hai 8byte kyuki vo address ke 4byte anur vo addresss pe jo value vo 4byte 
   
   
    Difference of '&' operator-------------------------------------------------//
    int *p=&arr[0];
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<arr<<endl;

    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;


//SYBOL TABLES CONTENT CAnNOT BE CHANGED
//ERROR
   arr=arr+1;//iska matlab tum bolre ho address change kardo 
   cout<<p<<endl;
   p=p+1;//ye next address pe chale jayega
   cout<<p<<endl;
//----------------------CHARACTER ARRAYS-----------------------------------//
char c[5]="abcd";
char *cht=&c[0];
//cout ka implementation character array aur int array ke liye alag hota hai
cout<<arr<<endl;
cout<<c<<endl;//ye pura content print karega
cout<<cht<<endl;
cout<<*cht<<endl;//ye value dega
char temp='z';
char *t= &temp;
cout<<t<<endl;
//char c[5]="abcd" iske bts-->ek temporay memomry banegi usmain iska content(abcd) store hoga aur fir ek main memory main tempory ka content copy kardenge
//char *c="abcd" ismain ek temporay memory banegi aur usmain content hojayega aur *c matlab ye tempory memory ke content ko point karra
//to ye RISKY hainkyuki temp memory koi bhi ho sakti hai TO MAT KARNA KABHI

//-----------------------POINTER IN FUNCTIONS---------------------------//
int value=5;
int *ptr=&value;
update(ptr);
print(ptr);
}

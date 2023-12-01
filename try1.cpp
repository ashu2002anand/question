#include <bits/stdc++.h>
using namespace std;

template<class T>
class arithamatic
{
private:
    T a;
    T b;
public:
    arithamatic(T a,T b);
    T add();
    T sub();
};

template<class T>
arithamatic<T>::arithamatic(T a,T b){
    this->a=a;
    this->b=b;
}
template<class T>
T arithamatic<T>::add(){
    return a+b;
}
template<class T>
T arithamatic<T>::sub(){
   return a-b;
}


int main(){
    arithamatic<int> ar1(10,2);
    arithamatic<float> ar2(12.4,6.5);
    cout<<ar1.add()<<" "<<ar1.sub()<<endl;
    cout<<ar2.add()<<" "<<ar2.sub()<<endl;
    return 0;
}
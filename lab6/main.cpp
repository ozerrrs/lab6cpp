#include <iostream>
#include <cmath>
using namespace std;
double recursive(int n){
    if(n==1){
        return 1;
    }
    double sum = recursive(n-1);
    double temp = pow(-1,n+1)/n;
    sum+= temp;
    return sum;
}
void  recursive(){
    int n;
    cout<<"Enter a value for n:";
    cin>>n;
    double result = recursive(n);
    cout<<"result is"<<result<<endl;


}

int main() {
    int n ;
    cout<<"Enter a value for n";
    cin>>n;

    double result = recursive(n);
    cout<<"The result is :"<<result<<endl;
    recursive();
    return 0;

}

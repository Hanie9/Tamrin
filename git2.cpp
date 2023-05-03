#include <iostream>
using namespace std;

struct myarray{
    static const int max = 100;
    double a[max];
    int n;
    myarray(const double *ma, int k = 0){
        if(k > max)
        k = max;
        for(n = k--; k >= 0; k--)
        a[k] = ma[k];
    }
    void print(void){
        cout << " n = " << n << endl;
        for(int i = 0; i < n; i++)
        cout << "a[" << i << "] = " << a[i] << endl;
    }
};
void f1(void){
    double x[]{10 , 12 , 34 , 54};
    myarray d(x , sizeof(x) / sizeof(double));
    d.print();
}
int main(){
    f1();
    return 0;
}